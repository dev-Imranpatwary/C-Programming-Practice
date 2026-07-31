#include<stdio.h>
int main()
{
  float num,fractional_part;
  printf("Enter a decimal number: ");
  scanf("%f",&num);
  fractional_part=num-(int)num;
  printf("value:%d\n",(int)num);
  printf("extracted value:%f\n",fractional_part);
return 0;
}
