 #include<stdio.h>
int print_size(int a[])
{
printf("%d, %d, ", sizeof(a) , sizeof( a[3] ) );
return 0;
}
int main(void)
{
int a[] = {1,2,3};
printf("%d, %d, ",sizeof(a) , sizeof( a[-1] ) );
print_size(a);
}