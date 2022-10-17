#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 double x;
 double y;
 //Варіант 14

 printf("\n Enter x:");
 scanf("%lf",&x);
 system("cls");
 if (x>=-20 && x<-1)
 {
     y=(double)((2*pow(x,3))-4*pow(x,2));
 }
 printf("\n %10.2f",y);

}
