/*
  C庫函數void *realloc(void *ptr, size_t size)試圖調整由ptr指向的先前由malloc或calloc調用分配的內存塊的大小。

  用法：void *realloc(void *ptr, size_t size);

  ptr − 這是要重新分配的先前由malloc、calloc或realloc分配的內存塊的指針。如果這是NULL，則通過函數分配一個新的塊並返回指向它的指針。

  size − 這是內存塊的新大小，以字節為單位。如果它為0並且ptr指向一個現有的內存塊，則釋放ptr指向的內存塊並返回NULL指針。

  返回值：該函數返回指向新分配內存的指針，如果請求失敗則返回NULL。
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
