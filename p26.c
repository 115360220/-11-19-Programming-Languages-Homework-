/* 第四章投影片 P26：用 %p 印出位址
   驗證「陣列名稱」就是「陣列第一個元素的位址」
   %p 會把位址以十六進制印出來 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   char array[5];

   printf("   array = %p\n&array[0] = %p\n  &array = %p\n",
          (void *) array, (void *) &array[0], (void *) &array);

   system("pause");
   return 0;
}
