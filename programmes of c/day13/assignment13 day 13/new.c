
#include<stdio.h>
int main()
{
 int a; 
void  * ptr=&a ;

printf("*ptr=%d ", *(int*)ptr);
return 0;
}


/*#include<stdio.h>
int main()
{
const int a = 1000;
int const b = 2000;
void const * ptr ;
ptr=&a;
printf("*ptr=%d ", *(int*)ptr);
ptr=(int*)&b;
printf("*ptr=%d", *(int*)ptr);
return 0;
}
*/
/*#include <stdio.h>
int main(void)
{
int i;
char str[]={'P','R','E','C','A','T'};
printf("A%c ",str);
printf("A%s ",str);
printf("A%c ",str[0]);
for(i=0;i<=7;i++)
{
  printf("\n%c",str[i]);
}
return 0; 
 
}
*/
 /*#include <stdio.h>
int main(void)
{
char city[]="PUNE";
char *ptr=city;
while(*ptr != '\0')
{
printf("%c", *ptr);
ptr++;
}
return 0;
}

*/







/*#include<stdio.h>
int main()
{
const int a = 1000;
int const b = 2000;
  void const  * ptr = (int *)&a;
printf("*ptr=%d ", ++(*(int*)ptr));
ptr=&b;
printf("*ptr=%d", *(int*)ptr);
return 0;
}
*/