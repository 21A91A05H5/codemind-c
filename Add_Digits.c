#include<stdio.h> 
int main() 
{ 
    int num; 
    int dig,sum; 
    scanf("%d",&num); 
    do 
    { 
        sum = 0;  
        while(num!=0)  
        { 
            dig=num%10; 
            sum+=dig; 
            num/=10; 
        } 
        num=sum; 
    }while(num/10!=0);  
            printf("%d",sum); 

    return 0; 
}