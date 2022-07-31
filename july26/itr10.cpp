#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n[]={4,8,16,32,64,128,256,512,1024},itr=0;
    for(int a=0;a<9;a++) {
        for(int j=1;j<=n[a];j++){
         for(int i=1;i<=j/3;i++)
          {
            itr++;
          }
         }
         cout<<itr<<endl;
    itr=0;
   }
 return 0;
}