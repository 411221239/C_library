/* 用於計算str1的初始部分的長度，該部分完全由str2中的字符組成。

  用法: size_t strspn(const char *str1, const char *str2);

  str1 − 這是要掃描的主C字符串。

  str2 − 這是包含要在str1中匹配的字符列表的字符串。

  返回值: 這個函數返回str1的初始部分中只包含來自str2的字符的數量。 */

//範例
#include <stdio.h>
#include <string.h>

int main () {
   int len;
   const char str1[] = "ABCDEFG019874";
   const char str2[] = "ABCD";

   len = strspn(str1, str2);

   printf("匹配的初始部分的長度：%d\n", len);
   
   return(0);
}

//結果
/* 
匹配的初始部分的長度：4 */
