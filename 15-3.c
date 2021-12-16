#include<math.h>
#include<stdio.h>
 
float rings(float r1, float r2) // Создаем функцию для вычисления площади кольца
{
   return 3.14 * (r1 * r1 - r2 * r2);
}
 
int main(void)
{
    int i;
    for(i = 1; i <= 3; ++i){ // Создаем цикл для расчета площади 3 различных колец
        float r1, r2; // Объявляем радиусы и вводим их
        printf("R1:");
        scanf("%f", &r1);
        printf("R2:");
        scanf("%f", &r2);
        printf("S: %f\n", rings(r1, r2)); // Выводим результат
    }
    return 0;
}
