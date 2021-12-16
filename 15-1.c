#include <stdio.h>

void PowerA3(float A, float* B) //Создаём функцию для вычисления 3 степени числа A
{
    *B = A * A * A;
}

int main()
{ 
    for (int i = 1; i <= 5; ++i) { // Создаём цикл для рассчёта третьей степени для 5ти чисел
        float A; 
        printf("A:"); // Вводим число
        scanf_s("%f", &A);
        float B;
        PowerA3(A, &B);
        printf_s("B: %f\n", B); // Выводим результат
    }
    return 0;
}
