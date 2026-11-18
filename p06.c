/* 第四章投影片 P06：使用一維陣列，使用 #define 前置處理器命令
   重點：#define SIZE 10 後面沒有分號，改一個地方就能調整整支程式 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
   int s[SIZE];
   int j;

   for (j = 0; j < SIZE; j++)
   {
      s[j] = 2 + 2 * j;
   }

   printf("%s%13s\n", "Element", "Value");

   for (j = 0; j < SIZE; j++)
   {
      printf("%7d%13d\n", j, s[j]);
   }

   system("pause");
   return 0;
}
