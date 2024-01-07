/*
  C庫函數void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))用於對數組進行排序。

  用法：void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*));

  base − 這是指向要排序的數組的第一個元素的指針。

  nitems − 由base指向的數組中的元素數量。

  size − 數組中每個元素的大小（以字節為單位）。

  compar − 比較兩個元素的函數。

  返回值：此函數不返回任何值。
*/

// 範例
#include <stdio.h>
#include <stdlib.h>

int values[] = {88, 56, 100, 2, 25};

int cmpfunc(const void *a, const void *b) {
   return (*(int *)a - *(int *)b);
}

int main() {
   int n;

   printf("排序前的列表：\n");
   for (n = 0; n < 5; n++) {
      printf("%d ", values[n]);
   }

   qsort(values, 5, sizeof(int), cmpfunc);

   printf("\n排序後的列表：\n");
   for (n = 0; n < 5; n++) {
      printf("%d ", values[n]);
   }

   return 0;
}
// 結果
/*
排序前的列表：
88 56 100 2 25 
排序後的列表：
2 25 56 88 100 
*/
