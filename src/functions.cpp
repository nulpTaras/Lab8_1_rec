#include <iostream>
#include <cstring>

using namespace std;

int Count(const char* str, int i = 0) {
    if (str[i] == '\0') {
        return 0; // Якщо кінець рядка, повертаємо 0
    }
    return (str[i] == ',' ? 1 : 0) + Count(str, i + 1); // Додаємо 1, якщо кома, і переходимо до наступного символа
}

void Change(char* dest, const char* str, int i = 0, int index = 0) {
    if (str[i] == '\0') {
        dest[index] = '\0'; // Додаємо нульовий символ у кінець
        return;
    }
    if (str[i] == ',') {
        dest[index] = '*';
        dest[index + 1] = '*';
        Change(dest, str, i + 1, index + 2); // Перехід далі після заміни
    } else {
        dest[index] = str[i];
        Change(dest, str, i + 1, index + 1); // Перехід далі без заміни
    }
}

