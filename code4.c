#include <stdio.h>

int main() {
   int a=98701;
   while(a>0) {
   printf("%d",a%10);
   a =a/10;
}
    return 0;
}
