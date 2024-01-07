/*
  C庫函數char *getenv(const char *name)搜索由name指向的環境字符串並返回字符串的相應值。

  用法：char *getenv(const char *name);

  name − 包含所請求變量名的C字符串。

  返回值：該函數返回所請求環境變量值的以null結尾的字符串，如果該環境變量不存在則返回NULL。
*/

// 範例
#include <stdio.h>
#include <stdlib.h>

int main () {
   printf("PATH : %s\n", getenv("PATH"));
   printf("HOME : %s\n", getenv("HOME"));
   printf("ROOT : %s\n", getenv("ROOT"));

   return(0);
}
// 結果
/*
PATH : /opt/swift/swift-5.7.3-RELEASE-ubuntu22.04/usr/bin/:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
HOME : /home/runner28
ROOT : (null)
*/
