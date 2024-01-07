/* 
  用於將字符串參數str轉換為整數（int類型）。

  用法：int atoi(const char *str);

  str − 這是整數表示的字符串。

  返回值：該函數將轉換後的整數作為int值返回。如果無法執行有效轉換，則返回零。
*/

// 範例
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int val;
   char str[20];
   
   strcpy(str, "98993489");
   val = atoi(str);
   printf("字符串值 = %s, 整數值 = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = atoi(str);
   printf("字符串值 = %s, 整數值 = %d\n", str, val);

   return(0);
}
// 結果
/*
字符串值 = 98993489, 整數值 = 98993489
字符串值 = tutorialspoint.com, 整數值 = 0
*/
