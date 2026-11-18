/* 第四章投影片 P21：static 陣列與 automatic 陣列的差別
   static：只建立一次，離開函式後值會保留到下次呼叫，未給初始值時自動為 0
   automatic：每次呼叫都重新建立，上次的修改不會留下來 */
#include <stdio.h>
#include <stdlib.h>

void staticArrayInit(void);
void automaticArrayInit(void);

int main(void)
{
   printf("First call to each function:\n");
   staticArrayInit();
   automaticArrayInit();

   printf("\n\nSecond call to each function:\n");
   staticArrayInit();
   automaticArrayInit();

   printf("\n");
   system("pause");
   return 0;
}

void staticArrayInit(void)
{
   static int array1[3];
   int i;

   printf("\nValues on entering staticArrayInit:\n");

   for (i = 0; i <= 2; i++)
   {
      printf("array1[%d] = %d  ", i, array1[i]);
   }

   printf("\nValues on exiting staticArrayInit:\n");

   for (i = 0; i <= 2; i++)
   {
      printf("array1[%d] = %d  ", i, array1[i] += 5);
   }
}

void automaticArrayInit(void)
{
   int array2[3] = {1, 2, 3};
   int i;

   printf("\n\nValues on entering automicArrayInit:\n");

   for (i = 0; i <= 2; i++)
   {
      printf("array2[%d] = %d  ", i, array2[i]);
   }

   printf("\nValues on exiting automicArrayInit:\n");

   for (i = 0; i <= 2; i++)
   {
      printf("array2[%d] = %d  ", i, array2[i] += 5);
   }
}
