/* 第四章投影片 P19：字串陣列
   重點：scanf 會一直由鍵盤讀入字元，直到遇到第一個空白字元為止
   所以輸入 "Hello there" 只會讀到 "Hello" */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   char string1[20];
   char string2[] = "string literal";
   int i;

   printf("Enter a string: ");
   scanf("%s", string1);

   printf("string1 is: %s\nstring2 is: %s\n"
          "string1 with spaces between characters is: \n",
          string1, string2);

   /* 字串結尾是 '\0'，用它當迴圈的終止條件 */
   for (i = 0; string1[i] != '\0'; i++)
   {
      printf("%c ", string1[i]);
   }

   printf("\n");
   system("pause");
   return 0;
}
