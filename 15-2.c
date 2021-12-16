#include<math.h>
#include<stdio.h>

int sign(float x) // Создаём функцию, удовлетворяющюю условиям задания
{
   if (x < 0) 
   { 
   		return -1;
	}    
	if (x == 0)
	{ 
		return 0;
	}    
	if (x > 0)
	{ 
		return 1;
	}
}
 
int main(void)
{
    float a,b; // Объявляем переменные и вводим их
    printf("A:");
    scanf("%f", &a);
    printf("B:");
    scanf("%f", &b);
 
    printf("Sign(A) + Sign(B): %i\n", sign(a) + sign(b)); // Выводим результат
 
    return 0;
}
