#include "BasicString.h"
#include <cstring>
#include <algorithm>
#pragma warning (disable : 4996)

BasicString::BasicString() : size(0) {
    staticString[0] = '\0';  
}

BasicString::BasicString(const char* data)
    : size(strlen(data)) {
    if (!isUsingDynamic()) {
        std::strcpy(this->staticString, data);
    }
    else {
        this->dynamicString = new char[this->size + 1];
        std::strcpy(this->dynamicString, data);
    }
}

BasicString::BasicString(const BasicString& other)
    : size(other.size) {
    if (other.size < Constants::SSO_COUNT) {
        std::strcpy(this->staticString, other.staticString);
    }
    else {
        this->dynamicString = new char[this->size + 1];
        std::strcpy(this->dynamicString, other.dynamicString);
    }
}

BasicString& BasicString::operator=(const BasicString& other) 
{
    if (this != &other) {
        BasicString copy(other);
        swap(copy);
    }
    return *this;
}

BasicString::~BasicString() {

    if (isUsingDynamic()) {
        delete[] this->dynamicString;
        this->dynamicString = nullptr;
    }

}

size_t BasicString::getSize() const {
    return this->size;
}

const char* BasicString::getString() const {
    return !isUsingDynamic() ? staticString : dynamicString;
}

void BasicString::resize(unsigned newDataSize) {
 
     if (newDataSize < Constants::SSO_COUNT) {
         if (isUsingDynamic()) {
             char tmp[Constants::SSO_COUNT + 1];
             std::strncpy(tmp, this->dynamicString, newDataSize);
             tmp[newDataSize] = '\0';
 
             delete[] this->dynamicString;
             std::strcpy(this->staticString, tmp);
         }
     }
     else {
         if (!isUsingDynamic()) {
             char* newData = new char[newDataSize + 1];
             std::strncpy(newData, this->staticString, std::min(this->size, (size_t) newDataSize));
             newData[std::min(this->size, (size_t) newDataSize)] = '\0';
 
             this->dynamicString = newData;
         }
         else {
             char* newData = new char[newDataSize + 1];
             std::strncpy(newData, this->dynamicString, std::min(this->size, (size_t)newDataSize));
             newData[std::min(this->size, (size_t) newDataSize)] = '\0';
             delete[] this->dynamicString;
             this->dynamicString = newData;
         }
     }
 
     this->size = newDataSize;
 }


bool BasicString::isUsingDynamic() const {
    return this->size >= Constants::SSO_COUNT;
}

void BasicString::swap(BasicString& other) noexcept
{
    if (!isUsingDynamic() && other.size < Constants::SSO_COUNT) {

        char temp[Constants::SSO_COUNT + 1];

        std::strcpy(temp, this->staticString);
        std::strcpy(this->staticString, other.staticString);
        std::strcpy(other.staticString, temp);
    }
    else {
        std::swap(this->dynamicString, other.dynamicString);
    }

    std::swap(this->size, other.size);
}
