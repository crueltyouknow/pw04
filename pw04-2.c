#include <stdio.h>
#include <stdint.h>

/* Практическая работа №4, задание 4.2, вариант 25.
   Типы: uint16_t a, b. Формула: (float)a * b / 2 (площадь треугольника). */

int main(void)
{
    uint16_t a, b;

    printf("Введите a и b (0..65535): ");
    if (scanf("%hu %hu", &a, &b) != 2)
    {
        printf("Ошибка ввода\n");
        return 0;
    }

    /* Без приведения типов выражение a * b / 2 считалось бы так:
       uint16_t повышается до int, произведение вычисляется в int
       (например, 65535 * 65535 = 4294836225 не помещается в int,
       что приводит к переполнению), а деление на 2 было бы целочисленным,
       и дробная часть (.5 при нечетном произведении) терялась бы.
       Приведение (float)a переводит всё вычисление в вещественную
       арифметику, и результат получается верным. */
    float area = (float)a * b / 2;

    printf("Результат: %.2f\n", area);

    printf("sizeof(uint16_t) = %llu\n", (unsigned long long)sizeof(uint16_t));
    printf("sizeof(float)    = %llu\n", (unsigned long long)sizeof(float));
    printf("sizeof(int)      = %llu\n", (unsigned long long)sizeof(int));

    return 0;
}
