#include <stdio.h>
#include<stdlib.h>
#include<time.h>
clock_t start,end;
double cpu_time_used;
int randomiser=0;
int* arr;
int main()
{
    for(int i=n-1;i>=0;)
    int p=parent(i);
    int l=max(Arr[lc],Arr[rc]);



void generate(int n)
{
 randomiser++;
 srand(n+randomiser);
 free(arr);
 arr=(int*)malloc(n*sizeof(int));
 for(int i=0;i<n;i++)
  *(arr+i)=rand();
}
void swap(int* x,int* y)
{
	int t=(*x);
	(*x)=(*y);
	(*y)=t;
}

void heapifylarge(int arr[], int n, int i) 
{ 
	int largest = i; // Initialize largest as parent
	int l = 2*i + 1; // left = 2*i + 1 
	int r = 2*i + 2; // right = 2*i + 2 

	// If left child is larger than parent 
	if (l < n && arr[l] > arr[largest]) 
		largest = l; 

	// If right child is larger than largest so far
	if (r < n && arr[r] > arr[largest]) 
		largest = r; 

	// If largest is not root 
	if (largest != i) 
	{ 
		swap(&arr[i],&arr[largest]); 

		// Recursively heapify the affected sub-tree 
		heapifylarge(arr, n, largest); 
	} 
} 




    int main() 
{ 
	int n,opt;
    
	arr=(int*)malloc(n*sizeof(int));
	printf("\nEnter number of elements:");
	scanf("%d",&n);
	generate(n);
	
}

}