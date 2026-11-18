/* 第四章投影片 P37：linear search（線性搜尋）
   從頭一個一個比對，找到就回傳索引值，整個找完都沒有就回傳 -1 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int linearSearch(const int array[], int key, int size);

int main(void)
{
   int a[SIZE];
   int x;
   int searchKey;
   int element;

   /* 把陣列填成 0, 2, 4, 6, ... 198 */
   for (x = 0; x < SIZE; x++)
   {
      a[x] = 2 * x;
   }

   printf("Enter integer search key:\n");
   scanf("%d", &searchKey);

   element = linearSearch(a, searchKey, SIZE);

   if (element != -1)
   {
      printf("Found value in element %d\n", element);
   }
   else
   {
      printf("Value not found\n");
   }

   system("pause");
   return 0;
}

int linearSearch(const int array[], int key, int size)
{
   int n;

   for (n = 0; n < size; ++n)
   {
      if (array[n] == key)
      {
         return n;
      }
   }

   return -1;
}
