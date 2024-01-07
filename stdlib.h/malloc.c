/*
  C庫函數void *malloc(size_t size)用於分配所需的內存並返回指向它的指針。

  用法：void *malloc(size_t size);

  size − 這是內存塊的大小，以字節為單位。

  返回值：該函數返回指向分配的內存的指針，如果請求失敗則返回NULL。
*/

// 範例
#include <stdio.h>
#include <stdlib.h>

int main () {
   char *str;

   /* 初始內存分配 */
   str = (char *) malloc(15);
   strcpy(str, "tutorialspoint");
   printf("字符串 = %s,  地址 = %p\n", str, (void*)str);

   /* 重新分配內存 */
   str = (char *) realloc(str, 25);
   strcat(str, ".com");
   printf("字符串 = %s,  地址 = %p\n", str, (void*)str);

   free(str);
   
   return(0);
} 

// 結果
/*
字符串 = tutorialspoint,  地址 = 0x7f9c344004c0
字符串 = tutorialspoint.com,  地址 = 0x7f9c344004c0
*/
