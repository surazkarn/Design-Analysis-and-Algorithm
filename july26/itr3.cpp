#include <iostream>
using namespace std;
int main()
{
    int itr=1,  n[]={4,8,16,32,64,128,256,512,1024};int a=0;
for (int s = 0; s <9; s++)
   {
    for(int i=1;i<n[a];i++){
        for (int j = 1; j <n[a] ; j++)
        {
             for (int j = 1; j <n[a] ; j++)
        {
             itr++;    
        }   
        }       
    }
    cout << "itr=" << itr << endl;
    itr=1; a++;
    }
    return 0;
}


