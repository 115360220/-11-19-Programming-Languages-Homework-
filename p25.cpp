/* 第四章投影片 P25：Call by reference
   注意：C 語言沒有支援 &（參考），所以這題必須存成 .cpp 並用 g++ 編譯
   函式參數寫成 int &xref 之後，xref 和呼叫端的 x 共用同一塊記憶體，
   在函式裡改 xref，外面的 x 也會跟著變 */
#include <stdio.h>
#include <stdlib.h>

int addbyone(int &xref);

int main()
{
   int x = 100;
   int y = addbyone(x);

   printf("x=%d\n", x);
   printf("y=%d\n", y);

   system("pause");
   return 0;
}

int addbyone(int &xref)
{
   xref++;
   printf("xref=%d\n", xref);
   return xref;
}
