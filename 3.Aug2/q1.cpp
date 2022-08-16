//wap to store random numbers into an array of n integers and 
//then find out the smallest and largest number stored in it .n is the user input

#include<iostream>
using namespace std;
int main()
{
int a[50],i,n,large,small;

cout << "\nEnter the number of elements : ";
cin >> n;
for (i = 0; i < n; i++)
{
    a[i]=rand();
}

cout<<"\narray is:\n";
for(i=0;i<n;i++)
cout<<a[i]<<" ";

large=small=a[0];

for(i=1;i<n;++i)
{
if(a[i]>large)
large=a[i];

if(a[i]<small)
small=a[i];
}

cout << "\nThe smallest element is " << small << endl;
cout << "\nThe largest element is " << large << endl;

    return 0;
}