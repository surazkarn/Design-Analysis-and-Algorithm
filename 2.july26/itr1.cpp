#include <iostream>
using namespace std;
int main()
{
    int itr=1,  n[]={4,8,16,32,64,128,256,512,1024};int a=0;
    cout << "\nitr\n " << endl;
for (int j = 0; j <9; j++)
   {
    for(int i=1;i<n[a];i++){
        itr++;       
    }
    
    cout <<itr << endl;
    itr=1; a++;
    }
    return 0;
}


