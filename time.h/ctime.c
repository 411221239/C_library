/* 
  用於返回基於參數timer的本地時間的字符串。

  用法：char *ctime(const time_t *timer);

  timer − 這是包含日曆時間的time_t對象的指針。

  返回值：該函數返回一個包含以人類可讀格式的日期和時間信息的C字符串。
*/

// 範例
#include <stdio.h>
#include <time.h>

int main () {
   time_t curtime;

   time(&curtime);

   printf("當前時間 = %s", ctime(&curtime));

   return(0);
}
// 結果
/*
當前時間 = Sun Jan  7 05:13:51 2024
*/
