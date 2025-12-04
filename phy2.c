#include<stdio.h>
#include<math.h>
int main()
{ int green = 530;
int red = 700 ;
double a = (3 * green )/0.9063; //sin(65) = 0.9063
 double angle = ((2*700)/1754.8);
double rad_angle= asin(angle) *(180.00/3.141592653589793);
 printf("%lf",rad_angle);
return 0;}
