/* 用於將字符c（一個unsigned char）複製到由參數str指向的字符串的前n個字符的函數。

  用法: void *memset(void *str, int c, size_t n);

  str − 這是指向要填充的內存塊的指針。

  c − 這是要設置的值。該值作為int傳遞，但該函數使用該值的unsigned char轉換填充內存塊。

  n − 要設置為該值的字節數。

  返回值: 返回指向內存區域的指針str。 */

//範例
#include <stdio.h>
#include <string.h>

int main () {
   char str[50];

   strcpy(str, "This is string.h library function");
   puts(str);

   memset(str, '$', 7);
   puts(str);
   
   return(0);
}

/* 結果
This is string.h library function
$$$$$$$ string.h library function */
