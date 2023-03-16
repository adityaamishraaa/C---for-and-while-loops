#include <stdio.h>

int main() {
    int array[5];
    int multiply = 1;
    printf("enter the arrays");
    for (int i=0;i<5;i++)
    {
        scanf("%d", &array[i]);
    }
    for (int j=0;j<5;j++)
    {
        multiply/=array[j];
    }
    printf("multiply the elememnts=%d",multiply);

    return 0;
}
