/* 第四章投影片 P04：基本練習，使用一維陣列
   重點：陣列並不會自動地將初始值設定為零，要自己用迴圈設 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int n[10];
   int i;

   for (i = 0; i < 10; i++)
   {
      n[i] = 0;
   }

   printf("%s%13s\n", "Element", "Value");

   for (i = 0; i < 10; i++)
   {
      printf("%7d%13d\n", i, n[i]);
   }

   system("pause");
   return 0;
}
