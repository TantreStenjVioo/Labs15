#include<math.h>
#include <stdio.h>

float fact2(int n) // Создаем функцию по заданным условиям
{
    int temp = 1;
    for (; n > 0; n -= 2) temp *= n;
    return temp;
}
 
int main(void)
{
    int i, n;
    for (i = 1; i <= 5; ++i)
	{
        printf("N:");
        scanf("%i", &n);
        printf("fact: %f\n", fact2(n)); // Вызываем функцию и выводим результат
    }
    return 0;
}
