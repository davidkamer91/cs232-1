#include <stdio.h>

int main()
{

float radius,area;
printf("Enter radius (in mm):");
scanf("%f",&radius);
area=3.14*radius*radius;
area=area/25.4;
printf("Circle's area is %.2f (sq in).\n",area);

return 0;
}