/*
  C函式庫中的 int sscanf(const char *str, const char *format, ...) 函式從字串中讀取格式化的輸入。

  用法：int sscanf(const char *str, const char *format, ...);

  str − 這是函式處理的C字串，作為其源來擷取數據。

  format − 這是包含以下一項或多項的C字串：空白字元，非空白字元和格式規範符號。

  格式規範符號遵循這個原型：[=%[*][width][modifiers]type=]

  Sr.No.	參數和描述
  1	    *          這是一個可選的起始星號，表示數據將從流中讀取但被忽略，即不存儲在相應的參數中。
  2	    width      這指定了當前讀取操作中要讀取的最大字符數。
  3	    modifiers  指定與 int（在 d、i 和 n 的情況下）、unsigned int（在 o、u 和 x 的情況下）或 float（在 e、f 和 g 的情況下）不同的大小，用於由相應的附加參數指針指向的數據：h：short int（對於 d、i 和 n），或 unsigned short int（對於 o、u 和 x）l：long int（對於 d、i 和 n），或 unsigned long int（對於 o、u 和 x），或 double（對於 e、f 和 g）L：long double（對於 e、f 和 g）
  4	    type       一個字符，指定要讀取的數據類型以及預期如何讀取。參見下一個表。

  fscanf 類型規定符
  type	Qualifying Input	Type of argument
  c    單一字符：讀取下一個字符。如果指定的寬度與1不同，則函數將讀取寬度個字符並將它們存儲在作為參數傳遞的數組的連續位置中。不附加空字符。	char *
  d    十進制整數：數字可選地以+或-號開頭。	int *
  e, E, f, g, G    浮點數：包含小數點的十進制數字，可選地以+或-號開頭，並可選地跟有e或E字符和十進制數字。有效輸入的兩個示例是-732.103和7.12e4。	float *
  o    八進制整數：	int *
  s    字符串。這將讀取後續字符，直到找到空格為止（空格字符被視為空格、換行和制表符）。	char *
  u    無符號十進制整數。	unsigned int *
  x, X    十六進制整數	int *
  other arguments − 這個函數期望一系列指針作為附加的參數，每個指針指向格式字符串中相應的％-tag指定的類型的對象，順序一致。

  對於格式字符串中檢索數據的每個格式規範符號，應該指定一個附加參數。如果要將sscanf操作的結果存儲在常規變量上，應該在其標識符之前加上引用運算符，即和波浪號（＆），例如：int n; sscanf (str,"%d",&n);

  返回值：成功時，函數返回填充的變數數量。如果在成功讀取任何數據之前發生輸入失敗，則返回 EOF。
*/

// 範例
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int day, year;
   char weekday[20], month[20], dtm[100];

   strcpy( dtm, "Saturday March 25 1989" );
   sscanf( dtm, "%s %s %d  %d", weekday, month, &day, &year );

   printf("%s %d, %d = %s\n", month, day, year, weekday );
    
   return(0);
}
// 結果：
/*
March 25, 1989 = Saturday
*/
