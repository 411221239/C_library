/*
  C函式庫中的strftime函式用於根據指定的格式規則，將結構體timeptr中表示的時間格式化並存儲到字符串str中。

  宣告:
  size_t strftime(char *str, size_t maxsize, const char *format, const struct tm *timeptr);

  參數:
  str - 這是指向存儲結果C字符串的目的地數組的指針。
  maxsize - 這是要複製到str的最大字符數。
  format - 這是包含常規字符和特殊格式指示符任意組合的C字符串。這些格式指示符將被函式替換為tm中指定的相應值，表示時間。格式指示符包括：
    %a - 縮寫的星期幾名稱，例如Sun。
    %A - 完整的星期幾名稱，例如Sunday。
    %b - 縮寫的月份名稱，例如Mar。
    %B - 完整的月份名稱，例如March。
    %c - 日期和時間表示，例如Sun Aug 19 02:56:02 2012。
    %d - 月份中的第幾天（01-31），例如19。
    %H - 24小時制的小時（00-23），例如14。
    %I - 12小時制的小時（01-12），例如05。
    %j - 一年中的第幾天（001-366），例如231。
    %m - 月份的十進制數字（01-12），例如08。
    %M - 分鐘（00-59），例如55。
    %p - AM或PM註記，例如PM。
    %S - 秒（00-61），例如02。
    %U - 以第一個星期天為第一天的週數（00-53），例如33。
    %w - 星期幾的十進制數字，星期天為0（0-6），例如4。
    %W - 以第一個星期一為第一天的週數（00-53），例如34。
    %x - 日期表示，例如08/19/12。
    %X - 時間表示，例如02:50:06。
    %y - 年份的最後兩位數（00-99），例如01。
    %Y - 年份，例如2012。
    %Z - 時區名稱或縮寫，例如CDT。
    %% - 百分號。
    
  timeptr - 這是指向包含日曆時間的tm結構的指針。
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

  返回值:
  如果結果C字符串在少於size個字符（包括終止空字符）的情況下適應，則返回複製到str的總字符數（不包括終止空字符），否則返回零。 */

//範例
#include <stdio.h>
#include <time.h>

int main () {
   time_t rawtime;
   struct tm *info;
   char buffer[80];

   // 獲取當前時間
   time( &rawtime );

   // 將時間轉換為tm結構
   info = localtime( &rawtime );

   // 使用strftime函式格式化時間並輸出到字符串buffer
   strftime(buffer, 80, "%x - %I:%M%p", info);

   // 結果
   printf("/* 結果\n格式化後的日期和時間: |%s|\n", buffer );
  
   return 0;
}

//結果
/* 
  格式化後的日期和時間: |08/23/12 - 12:40AM|
*/
