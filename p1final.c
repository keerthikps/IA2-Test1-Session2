#include <stdio.h>
void input(float *Base, float *Height) 
{
	printf("Enter the Value of Base and Height");
	scanf("%f%f", Base, Height);
}
void find_area(float Base, float Height, float *area) 
{
	*area = Base * Height / 2.0;
}
void output(float area) 
{
	printf("The area of the Triangle is %f:", area);
}
int main() 
{
	float Base, Height, area;
	input(&Base, &Height);
	find_area(Base, Height, &area);
	output(area);
	return 0;
}