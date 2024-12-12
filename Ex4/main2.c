#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    double PI=4.0f;
    int PI_int=0;
    bool tf=0;
    for(int i=0;tf==0;i++){
        PI=PI+pow(-1,i+1)*4/(3+i*2);
        if((int)(PI*100000)==314159){
            printf("%d %.5f\n",3+i*2,PI);
            tf=1;
        }
    }
}
