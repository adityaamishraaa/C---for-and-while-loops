#include <stdio.h>

int main() {
    int array[5];
    int sum= 0;
    printf("enter the arrays");
    for (int i=0;i<5;i++)
    {
        scanf("%d", &array[i]);
    }
    for (int j=0;j<5;j++)
    {
        sum+=array[j];
    }
    printf("the average of the elememnts=%d",sum/5);
    

    return 0;
}
