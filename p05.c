/* 第四章投影片 P05：使用一維陣列，簡化初始值
   重點：宣告時直接給初始值列表，不用再跑一次迴圈 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
   int i;

   printf("%s%13s\n", "Element", "Value");

   for (i = 0; i < 10; i++)
   {
      printf("%7d%13d\n", i, n[i]);
   }

   system("pause");
   return 0;
}
