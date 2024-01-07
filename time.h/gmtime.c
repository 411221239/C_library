/* 
  用於使用timer指向的值填充一個tm結構，該結構包含表示相應時間的值，以協調世界時（UTC）或格林威治標準時間（GMT）時區表示。

  用法：struct tm *gmtime(const time_t *timer);

  timeptr − 這是指向表示日曆時間的time_t值的指針。

  返回值：該函數返回一個指向帶有填充的時間信息的tm結構的指針。以下是timeptr結構的詳細信息 −

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

#define BST (+1)
#define CCT (+8)

int main () {

   time_t rawtime;
   struct tm *info;

   time(&rawtime);
   /* 獲取GMT時間 */
   info = gmtime(&rawtime );
   
   printf("當前世界時鐘:\n");
   printf("倫敦 : %2d:%02d\n", (info->tm_hour+BST)%24, info->tm_min);
   printf("中國  : %2d:%02d\n", (info->tm_hour+CCT)%24, info->tm_min);

   return(0);
}

// 結果
/*
當前世界時鐘:
倫敦 : 14:10
中國 : 21:10
*/
