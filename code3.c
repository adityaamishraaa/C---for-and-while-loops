#include <stdio.h>

int main() {
int a=0;
   for(int i=1;i<4;i++)
   {
       for(int j=1;j<=i;j++)
       {
       a++;
           printf("%d",a);
       }
       printf("\n");
   }

    return 0;
}
