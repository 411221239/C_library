/* 
  用於返回time1和time2之間的秒數差異，即(time1 - time2)。這兩個時間以日曆時間表示，該時間表示自Epoch（1970年1月1日00:00:00，協調世界時（UTC））以來經過的時間。

  用法：double difftime(time_t time1, time_t time2);

  Parameters
  time1 − 這是end time的time_t對象。
  time2 − 這是start time的time_t對象。

  返回值：該函數返回兩個時間的差異（time1 - time2）作為double值。
*/

// 範例
#include <stdio.h>
#include <time.h>

int main () {
   time_t start_t, end_t;
   double diff_t;

   printf("程序開始...\n");
   time(&start_t);

   printf("休眠5秒...\n");
   sleep(5);

   time(&end_t);
   diff_t = difftime(end_t, start_t);

   printf("執行時間 = %f\n", diff_t);
   printf("程序結束...\n");

   return(0);
}

// 結果
/*
程序開始...
休眠5秒...
執行時間 = 5.000000
程序結束...
*/
