#include <stdio.h>
#include <stdlib.h>


struct node
{
    int freq, prop;
    struct node *left, *right;
} * start;



void heapify(struc node *s,int i,int n)
{
    
}

int main()
{
    int n;
    printf("enter the number of letters:");
    scanf("%d", &n);
    struct node *ch=(struct node *)malloc(n * sizeof(struct node) );

    for(int i=0;i<n;i++)
    {
        ch[i].prop=1;
        ch[i].left=NULL;
        ch[i].right=NULL;
    }
    

for (int i = 0; i < n; i++)
{
    printf("enter the freq:");
    scanf("%d", &ch[i].freq);
}
    
    return 0;
}