/* 第四章投影片 P30：Call by Address
   用指標 int * 接收陣列，在函式裡把陣列前後顛倒 */
#include <stdio.h>
#include <stdlib.h>

void inverse(int *);

int main()
{
   int a[3] = {3, 5, 7}, i;

   for (i = 0; i < 3; i++)
   {
      printf("%d  ", a[i]);
   }
   printf("\n");

   inverse(a);

   for (i = 0; i < 3; i++)
   {
      printf("%d  ", a[i]);
   }
   printf("\n");

   system("pause");
   return 0;
}

void inverse(int *b)
{
   int tmp[3], i;

   /* 先倒著存進暫存陣列 */
   for (i = 0; i < 3; i++)
   {
      tmp[2 - i] = b[i];
   }

   /* 再搬回原陣列 */
   for (i = 0; i < 3; i++)
   {
      b[i] = tmp[i];
   }
}
