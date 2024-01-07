/* 用於使用定界符delim將字符串str拆分為一系列令牌。

  用法: char *strtok(char *str, const char *delim);

  str − 此字符串的內容被修改並拆分為較小的字符串（令牌）。

  delim − 這是包含分隔符的C字符串。這些可能因調用而異。

  返回值: 這個函數返回指向字符串中找到的第一個令牌的指針。如果沒有要檢索的令牌，則返回空指針。 */

//範例
#include <string.h>
#include <stdio.h>

int main () {
   char str[80] = "This is - www.tutorialspoint.com - website";
   const char s[2] = "-";
   char *token;
   
   /* 獲取第一個令牌 */
   token = strtok(str, s);
   
   /* 遍歷其他令牌 */
   while( token != NULL ) {
      printf("%s\n", token );
    
      token = strtok(NULL, s);
   }
   
   return(0);
}

//結果
/* 
This is 
www.tutorialspoint.com 
website */
