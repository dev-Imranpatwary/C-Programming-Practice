#include<stdio.h>
int main(){
 float num,positive_value;
 printf("Enter a negative number: ");
 scanf("%f",&num);
 positive_value=num*(-1);
printf("Converted value:%.f\n",positive_value);
return 0;
}
