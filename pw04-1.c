#include <stdio.h>

/* Практическая работа №4, задание 4.1, вариант 18.
   Углы: секунды -> минуты и секунды, коэффициент 60. */

#define SEC_PER_MIN 60

int main(void)
{
    int total;

    printf("Введите угол в секундах (<= 0 или EOF для выхода):\n");

    while (scanf("%d", &total) == 1 && total > 0)
    {
        /* При целочисленном делении int / int результат тоже int:
           процессор возвращает только целую часть частного, а дробная
           часть отбрасывается (усечение к нулю). Остаток от деления
           получаем отдельно операцией %. */
        int minutes = total / SEC_PER_MIN;
        int seconds = total % SEC_PER_MIN;

        printf("%d сек = %d мин %d сек\n", total, minutes, seconds);
    }

    return 0;
}
