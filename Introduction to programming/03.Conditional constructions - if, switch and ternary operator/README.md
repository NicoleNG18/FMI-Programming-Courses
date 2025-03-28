**1.** Напишете програма, която приема цяло число от стандартния вход и принтира *Even*, ако числото е четно, и *Odd*, ако е нечетно.</br>
**Пример:** </br></br>
Вход:
```
0
```
Изход:
```
Even
```
Вход:
```
-1
```
Изход:
```
Odd
```
**2.** Напишете програма, която представлява прост калкулатор, който поддържа следните двуместни операции:
| Операция  | Символ |
| --------- |:------:|
| събиране  | +      |
| изваждане | -      |
| умножение | *      |
| деление   | /      |

Потребителят трябва да въведе 2 числа и след това знакът на съответната операция. </br>

**Пример:** </br></br>
Вход:
```
2 3 +
```
Изход:
```
5
```
Вход:
```
3 5 /
```
Изход:
```
0.6
```
**3.** Напишете програма, която приема символ и отпечатва типа му. Типовете може да са:
- малка буква
- голяма буква
- цифра
- друго

</br>**Пример:** </br></br>
Вход:
```
2
```
Изход:
```
digit
```
Вход:
```
a
```
Изход:
```
lowercase letter
```
Вход:
```
J
```
Изход:
```
uppercase letter
```
Вход:
```
{
```
Изход:
```
other
```
**4.** Напишете програма, която приема цяло число от 1 до 9 и принтира представянето му с римски цифри.</br>
**Пример:** </br></br>
Вход:
```
4
```
Изход:
```
IV
```
Вход:
```
7
```
Изход:
```
VII
```
**5.** Ще казваме, че поредица от числа е трион, ако всяко число в нея е едновременно по-голямо или равно от двата си съседа, или пък едновременно по-малко или равно от тях.

За първия и последния елемент имаме само по един съсед. </br>
Напишете програма, която въвежда от стандартния 5 на брой цели числа. Да се изведе на стандартния изход "yes", ако въведената поредица е трион, или "no", в противен
случай. </br>

**Пример:** </br>

Вход:
```
1 5 1 0 3
```
Изход:
```
no
```
Вход:
```
-10 10 -2 11 -22
```
Изход:
```
yes
```
**6.** Напишете програма, която приема координати на точка в Декартова координатна система и радиус на окръжност и връща дали точката се намира по контура на окръжност с дадения радиус и център (0, 0).</br>
**Пример:** </br></br>
Вход:
```
2 2 3
```
Изход:
```
Inside the circle
```
Вход:
```
3 4 5
```
Изход:
```
On the circle
```
Вход:
```
10 3 8
```
Изход:
```
Outside the circle
```
**7.** Да се напише програма, която въвежда час и минути в 24-часов формат и изчислява колко ще е часът след 15 минути. Часовете и минути винаги се изписват с 2 цифри, като се слага водеща нула при нужда.</br>
**Пример:** </br></br>
Вход:
```
15 23
```
Изход:
```
15 38
```
Вход:
```
0 0
```
Изход:
```
00 15
```
Вход:
```
2 53
```
Изход:
```
03 08
```
Вход:
```
23 49
```
Изход:
```
00 04
```
**8.** Напишете програма, която прочита 3 числа от стандартния вход и ги принтира сортирани във възходящ ред.
</br>
**Пример:** </br></br>
Вход:
```
9 -2 3
```
Изход:
```
-2 3 9
```
**9. (бонус)** Напишете програма, която приема ден, месец и година и изчислява кой ден от седмицата е тази дата.</br>
*Подсказка:* Може да използвате [*Zeller's congruence*](https://en.wikipedia.org/wiki/Zeller%27s_congruence).
</br>
**Пример:** </br></br>
Вход:
```
15 10 2024
```
Изход:
```
Tuesday
```
Вход:
```
25 12 1964
```
Изход:
```
Friday
```