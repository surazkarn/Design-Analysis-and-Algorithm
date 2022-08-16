#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n[]={4,8,16,32,64,128,256,512,1024},itr=0;
    for(int x=0;x<9;x++) {
        for(int j=0;j<n[x];j++){
         for(int i=0;i<j;i++)
          {
            itr++;
          }
         }
         cout<<itr<<endl;
    itr=0;
 }
 return 0;
}