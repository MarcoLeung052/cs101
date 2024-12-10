#include <stdio.h>
int main()
{
    int n=7;
    for(int i=1;i<=7;i++){
        int m=n-(i-1);
        printf("%*d",m,i);
        for(int j=0;j<i-1;j++){
            printf(" %d",i);
        }
        printf("\n");
    }
}
