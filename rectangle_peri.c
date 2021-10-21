#include<stdio.h>
int main()
{
	float length,breadth,perimeter;
	
	printf("enter length of rectangle: ");
	scanf("%f",&length);
	
	
	printf("enter breadth of rectangle: ");
	scanf("%f",&breadth);
 
	perimeter=2*(length+breadth);
	printf("AOR: %f\n",perimeter);
	return 0;
}
