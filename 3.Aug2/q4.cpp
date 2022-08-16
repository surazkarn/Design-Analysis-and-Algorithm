#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void func(int a,int b,int c){
    swap(&a,&b);
    swap(&a,&c);
    cout<<"after swap"<<endl<<a<<endl<<b<<endl<<c<<endl;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"before swap:"<<endl<<a<<endl<<b<<endl<<c<<endl;
    func(a,b,c);
 return 0;
}