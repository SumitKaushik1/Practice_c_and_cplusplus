#include<stdio.h>      
#define PI 10
int main(void)

{    
    
    #if PI==11   //integer value operation are  allowed in preprocessor ,it means integer numberes 
    printf("  not found");//arithmetioc and logical or any other type of operation are  allowed.
    #elif  PI==10 
     printf("found");
     #endif
     return 0;                   
     
} 
/*
/*#include<stdio.h>      
#define PI 3.14
int main(void)

{    
    
    #if PI==3.14   //floating point operation are not allowed in preprocessor ,it means decimal numberes 
    printf(" a==31");//arithmetioc and logical or any other type of operation are not allowed.
    #elif  PI==3.14 
     printf("a==3=0");
     #endif
     return 0;                   
     
}*/