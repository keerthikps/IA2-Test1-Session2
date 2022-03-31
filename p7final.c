#include<stdio.h>
typedef struct _triangle
{
  float base,altitude,area;
} Triangle;
Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base, altitude of a triangle:\n");
  scanf("%f %f", &t.base, &t.altitude);
  return t;
}
void find_area(Triangle *t)
{
  t->area=0.5*(t->base)*(t->altitude);
}
void output(Triangle t)
{
  printf("The area of triangle with base=%0.3f and altitud=%0.3f is %0.3f",t.base,t.altitude,t.area);
}
int main()
{
  Triangle t = input_triangle();
  find_area(&t);
  output(t);
  return 0;
}