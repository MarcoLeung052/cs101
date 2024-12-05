#include <stdio.h>
int main()
{
    int i=3000;
    if (i<1500){
        printf("$70");
    }
    else{
        if(i%100!=0){
            i=((i-1500)/100+1)*10+70;
        }
        else{
            i=((i-1500)/100)*10+70;
        }
        printf("$%d",i);
    }
    return 0;
}
