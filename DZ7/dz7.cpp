#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    printf("Нажмите цифровую клавишу: ");
    char c = _getch();   // читаем символ без Enter

    // Проверяем, является ли символ цифрой
    if (c >= '0' && c <= '9') {
        printf("\nВы нажали цифру: %c\n", c);
    }
    else {
        printf("\nВы нажали не цифру: %c\n", c);
    }

    return 0;
}