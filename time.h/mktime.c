/* 
  用於將指向timeptr的結構轉換為一個與本地時區相對應的time_t值。

  用法：time_t mktime(struct tm *timeptr);

  timeptr − 這是一個指向表示日曆時間的time_t值的指針，該時間被分解為其組件。以下是timeptr結構的詳細信息

  struct tm {
     int tm_sec;         /* 秒, 範圍 0 到 59        */
     int tm_min;         /* 分, 範圍 0 到 59        */
     int tm_hour;        /* 小時, 範圍 0 到 23       */
     int tm_mday;        /* 月的某一天, 範圍 1 到 31 */
     int tm_mon;         /* 月, 範圍 0 到 11        */
     int tm_year;        /* 自1900年以來的年數      */
     int tm_wday;        /* 一周的某一天, 範圍 0 到 6 */
     int tm_yday;        /* 一年的某一天, 範圍 0 到 365 */
     int tm_isdst;       /* 夏令時                 */	
  };
  
  返回值：返回與作為參數傳遞的日曆時間相對應的time_t值。如果出錯，則返回-1。

  注意：該函數返回一個與本地時區相對應的time_t值。
*/

// 範例
#include <stdio.h>
#include <time.h>

int main () {
   int ret;
   struct tm info;
   char buffer[80];

   info.tm_year = 2001 - 1900;
   info.tm_mon = 7 - 1;
   info.tm_mday = 4;
   info.tm_hour = 0;
   info.tm_min = 0;
   info.tm_sec = 1;
   info.tm_isdst = -1;

   ret = mktime(&info);
   if( ret == -1 ) {
      printf("錯誤：無法使用mktime製作時間\n");
   } else {
      strftime(buffer, sizeof(buffer), "%c", &info );
      printf("%s", buffer);
   }

   return(0);
}

// 結果
/*
Wed Jul 4 00:00:01 2001
*/
