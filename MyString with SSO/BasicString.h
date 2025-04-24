#pragma once
#include <iostream>

namespace Constants{
    constexpr unsigned SSO_COUNT = 15; 
}

class BasicString
{
public:
    BasicString();
    BasicString(const char* data);
    BasicString(const BasicString& other);
    BasicString& operator=(const BasicString& other);
    ~BasicString();

    size_t getSize() const;
    const char* getString() const;

    bool isUsingDynamic() const;
     
private:
    void swap(BasicString& other) noexcept;

    size_t size;

    union {
        char* dynamicString;
        char staticString[Constants::SSO_COUNT + 1];
    };

};
