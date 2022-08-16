//Algo-1
//a prime number has only two factors : 1 and itself
//simple method 

#include <stdio.h>
int main()
{
    int n=0;
    printf("Enter n:\t");
    scanf("%d", &n);
    int flag=0;
    for(int i=2;i<n;i++){
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

