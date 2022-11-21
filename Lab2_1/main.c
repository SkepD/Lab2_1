#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 double x;
 double y;

 printf("Enter x:");
 scanf("%lf",&x);

 if (x>=-20 && x<-1){
    y=(2*(pow(x,3))- 4 * (pow(x,2)));//variant 14
    }
 else if (x>=-1 && x<=1){
    y=(5);
    }
 else if (x>=5 && x<15){
    y=(sqrt(2*pow(x,2)-5*x));
    }
 else{
    y=(1-x/2);
    }

    printf("\n Y=%6.2f",y);
    return 0;
}
