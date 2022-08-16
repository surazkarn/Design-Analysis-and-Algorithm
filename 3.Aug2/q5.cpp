#include<stdio.h>
#include<stdlib.h>
void non_zero(int **m,int p){
    int count=0;
    for(int i=0;i<p;i++){
        for(int j=0;j<p;j++){
            if(m[i][j]!=0){
                count++;
            }
        }
    }
    printf("The number of non_zero elements are:%d\n",count);
}
void leading_diagonal(int **a,int p)
{
	int i,j,sum=0;
    printf("The elements above leading diagonal is:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<p;j++)
		{
			if(i<=j)
			{
				printf("%d\t",a[i][j]);
                sum+=a[i][j];
			}
			else{
				printf("\t");
			}
		}
		printf("\n");
	}
    printf("The sum is:%d\n\n",sum);
}
void minor_diagonal(int **a,int p)
{
	int i,j;
	for(i=0;i<p;i++)
	{
		for(j=0;j<p;j++)
		{
			if(i+j>p)
			{
				printf("%d\t",a[i][j]);
			}
			else{
				printf("\t");
			}
		}
		printf("\n");
	}
}
void diagonal(int **a,int p)
{
	int i,j,product=1;
    printf("The diagonal elements are:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<p;j++)
		{
			if(i==j)
			{
				printf("%d\t",a[i][j]);
                product*=a[i][j];
			}
			else{
				printf("\t");
			}
		}
		printf("\n");
	}
    printf("The product is:%d",product);
}
int main(){
    int n,**matrix;
    printf("Enter the value of n:");
    scanf("%d",&n);
    matrix=(int**)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        matrix[i]=(int*)malloc(n*sizeof(int));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matrix[i][j]=rand()%10;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    non_zero(matrix,n);
    leading_diagonal(matrix,n);
    minor_diagonal(matrix,n);
    diagonal(matrix,n);
}