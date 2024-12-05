#include <stdio.h>
int main()
{
    int i=30;
    if (i<30){
        printf("free");
    }
    else{
        if(i>=240){
            printf("$240");
        }
        else{
            if(i%30!=0){
                i=(i/30+1)*30;
            }
            printf("$%d",i);
        }
    }
    return 0;
}
