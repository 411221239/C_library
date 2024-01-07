/* 
  用於返回程序啟動以來經過的時鐘滴答數。要獲取CPU使用的秒數，需要除以CLOCKS_PER_SEC。

  在CLOCKS_PER_SEC等於1000000的32位系統上，此函數將大約每72分鐘返回相同的值。

  用法：clock_t clock(void);

  返回值：該函數返回自程序啟動以來經過的時鐘滴答數。失敗時，該函數返回-1的值。
*/

// 範例
#include <time.h>
#include <stdio.h>

int main () {
   clock_t start_t, end_t;
   double total_t;
   int i;

   start_t = clock();
   printf("程序開始，start_t = %ld\n", start_t);
    
   printf("進入掃描大循環，start_t = %ld\n", start_t);
   for(i=0; i< 10000000; i++) {
   }
   end_t = clock();
   printf("大循環結束，end_t = %ld\n", end_t);
   
   total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
   printf("CPU花費的總時間: %f\n", total_t  );
   printf("程序結束...\n");

   return(0);
}
// 結果
/*
程序開始，start_t = 790
進入掃描大循環，start_t = 790
大循環結束，end_t = 21490
CPU花費的總時間: 0.020700
程序結束...
*/
