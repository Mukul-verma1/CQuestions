#include <stdio.h>

int main()
{
    int n=100;
    printf("Even numbers from 1 to n:\n");
    for (int i=1;i<=n;i++){
        if (i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
