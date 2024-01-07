/* 
  用於返回一個指向字符串的指針，該字符串表示結構struct timeptr的日期和時間。

  用法：char *asctime(const struct tm *timeptr);

  timeptr是一個指向tm結構的指針，該結構包含一個被分解為其組成部分的日曆時間，如下所示−

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

  返回值：該函數返回一個包含用人類可讀格式表示的日期和時間信息的C字符串，格式為Www Mmm dd hh:mm:ss yyyy，其中Www是星期幾，Mmm是字母表示的月份，dd是月份中的一天，hh:mm:ss是時間，yyyy是年份。
*/

// 範例
#include <stdio.h>
#include <string.h>
#include <time.h>

int main () {
   struct tm t;

   t.tm_sec    = 10;
   t.tm_min    = 10;
   t.tm_hour   = 6;
   t.tm_mday   = 25;
   t.tm_mon    = 2;
   t.tm_year   = 89;
   t.tm_wday   = 6;

   puts(asctime(&t));
   
   return(0);
}
// 結果
/*
Sat Mar 25 06:10:10 1989
*/
