/* Exercise 6.11: Bubble Sort（改良版）
   a) 第一回合跑完，最大的數字必定在最後面；第二回合跑完，最大的兩個就定位。
      所以第 n 回合只要比較到 SIZE-n 就好，不必每回合都比 SIZE-1 次。
   b) 如果某一回合完全沒有發生交換，代表資料已經排好了，直接結束，
      不用把九個回合跑完。 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
   int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
   int i;
   int pass;
   int hold;
   int swapped;              /* 這一回合有沒有發生交換 */
   int passesUsed = 0;
   int comparisons = 0;

   printf("Data items in original order\n");

   for (i = 0; i < SIZE; i++)
   {
      printf("%4d", a[i]);
   }

   for (pass = 1; pass < SIZE; pass++)
   {
      swapped = 0;
      passesUsed++;

      /* 改良 a：上限從 SIZE-1 改成 SIZE-pass
         後面 pass-1 個元素已經就定位，不用再碰 */
      for (i = 0; i < SIZE - pass; i++)
      {
         comparisons++;

         if (a[i] > a[i + 1])
         {
            hold = a[i];
            a[i] = a[i + 1];
            a[i + 1] = hold;
            swapped = 1;
         }
      }

      /* 改良 b：整個回合都沒交換，表示已經排好，提早收工 */
      if (swapped == 0)
      {
         break;
      }
   }

   printf("\nData items in ascending order\n");

   for (i = 0; i < SIZE; i++)
   {
      printf("%4d", a[i]);
   }

   printf("\n\n--- 改良效果 ---\n");
   printf("Passes used:      %2d  (original always uses %d)\n",
          passesUsed, SIZE - 1);
   printf("Comparisons made: %2d  (original always makes %d)\n",
          comparisons, (SIZE - 1) * (SIZE - 1));

   system("pause");
   return 0;
}
