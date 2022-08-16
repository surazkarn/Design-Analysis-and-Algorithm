//Algo 2
//square root method


#include <stdio.h>
#include <math.h>
int main()
{
    int n=0;
    printf("Enter n:\t");
    scanf("%d", &n);
    int flag=0;
    for(int i=0;i<=sqrt(n);i++){
        if(n%i==0){
            flag=1;
        }
    }
    if (flag==0)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    
}