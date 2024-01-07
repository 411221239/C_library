/* 
  用於獲取自1970年1月1日00:00:00 UTC以來的秒數，這被稱為Epoch時間。如果seconds不為NULL，則返回值也存儲在seconds變量中。

  用法：time_t time(time_t *seconds);

  seconds − 這是一個指向time_t類型對象的指針，其中將存儲秒數值。

  返回值：以time_t對象表示的當前日曆時間。

  注意：如果seconds不為NULL，則返回值也存儲在seconds變量中。
*/

// 範例
#include <stdio.h>
#include <time.h>

int main () {
   time_t seconds;

   seconds = time(NULL);
   printf("自1970年1月1日00:00:00 UTC以來的小時數 = %ld\n", seconds/3600);
  
   return(0);
}

// 結果
/*
自1970年1月1日00:00:00 UTC以來的小時數 = 473500
*/
