/* 用於在字符串haystack中查找子字符串needle的第一次出現。

  用法: char *strstr(const char *haystack, const char *needle);

  haystack − 這是要掃描的主C字符串。

  needle − 這是要在haystack字符串中搜索的小字符串。

  返回值: 這個函數返回指向在haystack中找到的needle中的任何整個字符序列的第一次出現的指針，如果在haystack中不存在該序列，則返回空指針。 */

//範例
#include <stdio.h>
#include <string.h>

int main () {
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;

   ret = strstr(haystack, needle);

   printf("子字符串是: %s\n", ret);
   
   return(0);
}

/* 結果
子字符串是: Point */
