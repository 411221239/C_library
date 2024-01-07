/* 
  用於使用timer指向的時間來填充一個tm結構，該結構包含表示相應本地時間的值。timer的值被分解為tm結構並以本地時區表示。

  用法：struct tm *localtime(const time_t *timer);

  timer − 這是指向表示日曆時間的time_t值的指針。

  返回值：該函數返回一個指向帶有填充的時間信息的tm結構的指針。以下是tm結構的信息 −

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
*/

// 範例
#include <stdio.h>
#include <time.h>

int main () {
   time_t rawtime;
   struct tm *info;
   time( &rawtime );
   info = localtime( &rawtime );
   printf("當前本地時間和日期: %s", asctime(info));
   return(0);
}

// 結果
/*
當前本地時間和日期: Sun Jan  7 05:05:05 2024
*/
