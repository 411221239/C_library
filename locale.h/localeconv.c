/* 用于设置或读取与位置相关的信息，返回一个lconv结构类型的对象。

  用法: struct lconv *localeconv(void);

  返回值: 此函数返回当前区域的struct lconv指针，其结构如下：

  typedef struct {
     char *decimal_point;
     char *thousands_sep;
     char *grouping;  
     char *int_curr_symbol;
     char *currency_symbol;
     char *mon_decimal_point;
     char *mon_thousands_sep;
     char *mon_grouping;
     char *positive_sign;
     char *negative_sign;
     char int_frac_digits;
     char frac_digits;
     char p_cs_precedes;
     char p_sep_by_space;
     char n_cs_precedes;
     char n_sep_by_space;
     char p_sign_posn;
     char n_sign_posn;
  } lconv */

// 示例
#include <locale.h>
#include <stdio.h>

int main () {
   struct lconv *lc;

   setlocale(LC_MONETARY, "zh_CN");
   lc = localeconv();
   printf("本地货币符号: %s\n", lc->currency_symbol);
   printf("国际货币符号: %s\n", lc->int_curr_symbol);

   setlocale(LC_MONETARY, "en_US");
   lc = localeconv();
   printf("本地货币符号: %s\n", lc->currency_symbol);
   printf("国际货币符号: %s\n", lc->int_curr_symbol);

   setlocale(LC_MONETARY, "en_GB");
   lc = localeconv();
   printf("本地货币符号: %s\n", lc->currency_symbol);
   printf("国际货币符号: %s\n", lc->int_curr_symbol);

   printf("小数点 = %s\n", lc->decimal_point);

   return 0;
}

/* 结果
本地货币符号: ¥
国际货币符号: CNY
本地货币符号: $
国际货币符号: USD
本地货币符号: £
国际货币符号: GBP
小数点 = . */
