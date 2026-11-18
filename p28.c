/* 第四章投影片 P28：傳遞陣列引數給函式
   傳「整個陣列」→ 傳的是位址，函式裡的修改會影響原陣列
   傳「單一元素」→ 傳的是值的複本，函式裡的修改不會影響原陣列 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void modifyArray(int b[], int size);
void modifyElement(int e);

int main(void)
{
   int a[SIZE] = {0, 1, 2, 3, 4};
   int i;

   printf("Effects of passing entire array by reference:\n\nThe"
          "values of the original array are:\n");

   for (i = 0; i < SIZE; i++)
   {
      printf("%3d", a[i]);
   }

   printf("\n");

   modifyArray(a, SIZE);

   printf("The values of the modified array are:\n");

   for (i = 0; i < SIZE; i++)
   {
      printf("%3d", a[i]);
   }

   printf("\n\n\nEffects of passing array element"
          "by value:\n\nThe value of a[3] is %d\n", a[3]);

   modifyElement(a[3]);

   printf("The value of a[3] is %d\n", a[3]);

   system("pause");
   return 0;
}

/* 收到的是原陣列的位址，所以改動會留下來 */
void modifyArray(int b[], int size)
{
   int j;

   for (j = 0; j < size; j++)
   {
      b[j] *= 2;
   }
}

/* 收到的只是一份複本，改了也不影響原來的 a[3] */
void modifyElement(int e)
{
   printf("Value in modifyElement is %d\n", e *= 2);
}
