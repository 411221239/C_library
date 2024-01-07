/*
  C庫函數int atexit(void (*func)(void))導致在程序終止時調用指定的函數func。您可以在程序中的任何位置註冊終止函數，但它將在程序終止時被調用。

  用法：int atexit(void (*func)(void));

  func − 這是在程序終止時要調用的函數。

  返回值：如果成功註冊函數，則該函數返回零值，否則如果失敗則返回非零值。
*/

// 範例
#include <stdio.h>
#include <stdlib.h>

void functionA () {
   printf("這是 functionA\n");
}

int main () {
   /* 註冊終止函數 */
   atexit(functionA);
   
   printf("啟動主程序...\n");

   printf("退出主程序...\n");

   return(0);
}
// 結果
/*
啟動主程序...
退出主程序...
這是 functionA
*/
