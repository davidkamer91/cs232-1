#include <stdio.h>

int main()
{

float radius,area,cir;
printf("Enter radius (in mm):");
scanf("%f",&radius);
area=3.14*radius*radius;
cir=2*3.14*radius;
cir=cir/25.4;
area=area/25.4;
printf("Circle's area is %.2f (sq in).\n",area);
printf("Its circumference is %.2f (in).",cir);
return 0;
}