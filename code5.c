#include <stdio.h>

int main() {
   int a=98701;
   for(a=98701;a>0;a/=10) {
      int digit =a%10;
   printf("%d",digit);
 
}
    return 0;
}
