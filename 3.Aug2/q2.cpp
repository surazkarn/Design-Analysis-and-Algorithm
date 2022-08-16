//wap to store random numbers into an array of n integers and 
//where the array must contains some duplicate 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    srand((int) time(0));
    int n;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%5;
        // cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    int count=0,countmost=0,max=0,ele;
    cout<<endl<<"the duplicate element are:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j])
            {
                cout<<a[i]<<endl;
                count++;
                countmost++;
            }
        }
        if(max<countmost){
        max=countmost;
         ele=a[i];}
    }
    cout<<" the total duplicate number is:"<<count<<endl;
    cout<<" the most repetated number is:"<<ele<<endl;
 return 0;
}