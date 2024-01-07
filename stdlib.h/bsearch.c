/*
  C庫函數void *bsearch(const void *key, const void *base, size_t nitems, size_t size, int (*compar)(const void *, const void *))用於在由base指向的nitems個對象的數組中搜索一個與由key指向的對象相匹配的成員。數組中每個成員的大小由size指定。

  數組的內容應根據由compar引用的比較函數按升序排列。

  用法：void *bsearch(const void *key, const void *base, size_t nitems, size_t size, int (*compar)(const void *, const void *));

  key − 用作搜索的鍵的對象的指針，被類型轉換為void*。

  base − 在其中執行搜索的數組的第一個對象的指針，被類型轉換為void*。

  nitems − 由base指向的數組中的元素數量。

  size − 數組中每個元素的大小（以字節為單位）。

  compare − 比較兩個元素的函數。

  返回值：此函數返回與搜索鍵匹配的數組中的項的指針。如果找不到鍵，則返回NULL。
*/

// 範例
#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void * a, const void * b) {
   return (*(int*)a - *(int*)b);
}

int values[] = {5, 20, 29, 32, 63};

int main () {
   int *item;
   int key = 32;

   /* 使用bsearch()在數組中查找值32 */
   item = (int*) bsearch(&key, values, 5, sizeof(int), cmpfunc);
   if (item != NULL) {
      printf("找到項目 = %d\n", *item);
   } else {
      printf("未找到項目\n");
   }

   return(0);
}
// 結果
/*
找到項目 = 32
*/
