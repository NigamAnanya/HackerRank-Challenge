#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int days,hours,minutes,seconds,total;
    int a;
    scanf("%d",&total);
    days=total/(24*60*60);
    a=total- days*(24*60*60);
    hours=a/(60*60);
    a-= hours*(60*60);
    minutes=a/60;
    a-= minutes*60;
    seconds=a;
    printf("The Duration is %d days ",days);
    printf("%d hours ",hours);
    printf("%d minutes ",minutes);
    printf("%d seconds",seconds);
    return 0;
}