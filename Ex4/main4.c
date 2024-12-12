#include <stdio.h>
int main() {
    int i = 12345;
    printf("%d",(i/1000)%10+(i%1000)/10*10+i%10*1000+i/10000*10000);
    return 0;
}
