/* 第四章投影片 P13：使用二維陣列
   重點：三種不同的初始化方式，沒給到的元素自動補 0 */
#include <stdio.h>
#include <stdlib.h>

void printArray(const int a[][3]);

int main(void)
{
   int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};   /* 完整給滿 */
   int array2[2][3] = {1, 2, 3, 4, 5};          /* 不分列，依序填入，不足補 0 */
   int array3[2][3] = {{1, 2}, {4}};            /* 每列各自不足，各自補 0 */

   printf("Values in array1 by row are:\n");
   printArray(array1);

   printf("Values in array2 by row are:\n");
   printArray(array2);

   printf("Values in array3 by row are:\n");
   printArray(array3);

   system("pause");
   return 0;
}

/* 二維陣列當參數時，第一個 [] 可以留空，但第二個一定要寫大小 */
void printArray(const int a[][3])
{
   int i;
   int j;

   for (i = 0; i <= 1; i++)
   {
      for (j = 0; j <= 2; j++)
      {
         printf("%d ", a[i][j]);
      }
      printf("\n");
   }
}
