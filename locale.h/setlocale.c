/* 用於設置或讀取與位置相關的信息。

  用法: char *setlocale(int category, const char *locale);

  category − 這是一個指定由語言環境設置所影響的函數類別的命名常量。

  LC_ALL 表示所有下面的選項。

  LC_COLLATE 表示字符串比較。請參見 strcoll()。

  LC_CTYPE 表示字符分類和轉換。例如 − strtoupper()。

  LC_MONETARY 表示通貨格式化，適用於 localeconv()。

  LC_NUMERIC 表示 localeconv() 的十進制分隔符。

  LC_TIME 表示strftime()的日期和時間格式。

  LC_MESSAGES 表示系統響應。

  locale − 如果locale為NULL或空字符串""，則將從具有與上述類別相同名稱的環境變量的值中設置區域名。

  返回值: 對setlocale()的成功調用將返回與設置的區域相對應的不透明字符串。如果無法滿足請求，則返回值為NULL。 */

// 範例
#include <locale.h>
#include <stdio.h>
#include <time.h>

int main () {
   time_t currtime;
   struct tm *timer;
   char buffer[80];

   time( &currtime );
   timer = localtime( &currtime );

   // 設置地域為英國英語
   printf("Locale is: %s\n", setlocale(LC_ALL, "en_GB"));
   strftime(buffer, 80, "%c", timer );
   printf("Date in en_GB locale is: %s\n", buffer);

   // 設置地域為德國德語
   printf("Locale is: %s\n", setlocale(LC_ALL, "de_DE"));
   strftime(buffer, 80, "%c", timer );
   printf("Date in de_DE locale is: %s\n", buffer);

   return(0);
}

//結果
/*
Locale is: (null)
Date in en_GB locale is: Sun Jan  7 04:35:58 2024
Locale is: (null)
Date in de_DE locale is: Sun Jan  7 04:35:58 2024 */
