#include <stdio.h>
int main(void)
{ float f1,f2,c1,c2;
printf("\nENTER THE TEMPERATURE IN FAHREHNEIT:");
scanf("%f",&f1);
c1=(5*(f1-32))/9;
printf ("\nthe celcius value:%f",c1);
printf("\nENTER THE TEMPERATURE IN CELCIUS:");
scanf("%f",&c1);
f2=(((9*c1)/5)+32);
printf ("\nthe fahreneit  value:%f",f2);
return 0;


}