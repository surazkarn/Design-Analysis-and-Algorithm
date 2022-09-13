#include <stdio.h>
#include<stdlib.h>
#include<time.h>
clock_t begin,end;
//clock_t returns the number of clock ticks elapsed since the program was launched.
double cpu_time_used;
int rand=0;
int *arr;



void generate(int n)
{
    rand++;
    srand(n+rand);
    //seed the random number generator
    free(arr);
    //deallocates the memory previously allocated
    arr=(int *)malloc(n+rand);
 for(int i=0;i<n;i++)
  *(arr+i)=rand();


}

void swap(int* x,int* y)
{
	int t=(*x);
	(*x)=(*y);
	(*y)=t;
}

void 
