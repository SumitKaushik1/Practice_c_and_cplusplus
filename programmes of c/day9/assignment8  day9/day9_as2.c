
#include <stdio.h>
void is_prime1(int num);
int is_prime2(int a1);
void range_in_prime(int num1,int num2);

int main (void)

{
    int num3,a,b,res;
printf("enter the number:");
scanf("%d",&num3);
is_prime1(num3);
printf("\nenter first number of  the range:");
scanf("%d",&a);
printf("\nenter  second number of  the range:");
scanf("%d",&b);

range_in_prime( a, b);
return 0;
}

void is_prime1(int num)
{
    int i;
    if(num==1)
    printf("\n%d :is not a prime number ",1);
    else
    if(num==0)
    printf("\n%d :is not a prime number ",0);
    else
    {
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                printf("\n%d:is not a prime number ",num);
            return ;
            }
        }
        printf("\n%d:is a prime number",num);
        return;
         
    }
    }

void range_in_prime(int num1,int num2)
{
    int i,res1;
    
    printf("all prime numbers between range:");
    for(i=num1;i<=num2;i++)
    {
        res1=is_prime2(i);
        if(res1)
        {printf("%d,",i);
        
    
    }
    
    }
    
    
}


int is_prime2(int a1)
{
    int i;
    if(a1==1)

    return 0;
    if(a1==0)
       return 0;
    
    else
    {
        for (i=2;i<=a1/2;i++)
        {
            if(a1%i==0)
            return 0;
        }
        return 1;
    }
}
/*
int isPrime(int num);
void printPrimes(int lowerLimit, int upperLimit);



int main()
{
    int num1, lowerLimit, upperLimit;
         printf("enter the number:");
    scanf("%d",&num1);
     if (isPrime(num1))
     printf("\n%d: is a prime number ",num1);
     else 
          printf("\n%d: is  not a prime number ",num1);





    printf("\nEnter the lower and upper limit to list primes: ");
    scanf("%d%d", &lowerLimit, &upperLimit);
    
    
    printPrimes(lowerLimit, upperLimit);
    
    return 0;
}


void printPrimes(int lowerLimit, int upperLimit)
{
    printf("All prime number between %d to %d are: ", lowerLimit, upperLimit);
    
    while(lowerLimit <= upperLimit)
    {
        
        if(isPrime(lowerLimit))
        {
            printf("%d, ", lowerLimit);
        }
        
        lowerLimit++;
    }
}

  
int isPrime(int num)   
{  
    int i;  
      
    for(i=2; i<=num/2; i++)    //eg take number 34=factors 1,2......17,34   ie 34/2=17 =last number divisible by 34 is 17
    {    
        if(num % i == 0)    
        {   return 0 ;               //number is divisible by any till less tha num/2 then num has more than two factorand is not a
             }              //prime number     
    }   
      
    return 1;   
}       


  */