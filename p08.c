/* 第四章投影片 P08：使用一維陣列，用星號圖型長短表示陣列元素的大小 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
   int n[SIZE] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
   int i;
   int j;

   printf("%s%13s%17s\n", "Element", "Value", "Histogram");

   for (i = 0; i < SIZE; i++)
   {
      printf("%7d%13d ", i, n[i]);

      /* 內層迴圈：值是多少就印幾個星號 */
      for (j = 1; j <= n[i]; j++)
      {
         printf("%c", '*');
      }

      printf("\n");
   }

   system("pause");
   return 0;
}
