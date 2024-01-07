/* 用於計算str1的初始段的長度，該初始段完全由不在str2中的字符組成的函數。

  用法: size_t strcspn(const char *str1, const char *str2);

  str1 − 這是要掃描的主要C字符串。

  str2 − 這是包含要在str1中匹配的字符列表的字符串。

  返回值: 這個函數返回字符串str1的初始段中不在字符串str2中的字符數量。 */

//範例
#include <stdio.h>
#include <string.h>

int main () {
   int len;
   const char str1[] = "ABCDEF4960910";
   const char str2[] = "013";

   len = strcspn(str1, str2);

   printf("第一個匹配的字符位置在 %d\n", len + 1);
   
   return(0);
}

//結果
/* 
第一個匹配的字符位置在 10 */
