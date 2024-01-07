/* 
  用於將字符串參數str轉換為長整數（long int類型）。

  用法：long int atol(const char *str);

  str − 這是包含整數表示的字符串。

  返回值：該函數將轉換後的整數作為long int返回。如果無法執行有效轉換，則返回零。
*/

// 範例
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   long val;
   char str[20];
   
   strcpy(str, "98993489");
   val = atol(str);
   printf("字符串值 = %s, 長整數值 = %ld\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = atol(str);
   printf("字符串值 = %s, 長整數值 = %ld\n", str, val);
	
   return(0);
}
// 結果
/*
字符串值 = 98993489, 長整數值 = 98993489
字符串值 = tutorialspoint.com, 長整數值 = 0
*/
