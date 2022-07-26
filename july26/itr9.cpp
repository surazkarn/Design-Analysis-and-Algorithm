#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n[]={4,8,16,32,64,128,256,512,1024},a=0,itr=1;
    for(int x=0;x<9;x++) {
        for(int j=1;j<n[a];j++){
         for(int i=1;i<j/2;i++)
          {
            itr++;
          }
         }
         cout<<itr<<endl;
    itr=1;
    a++;}
 return 0;
}