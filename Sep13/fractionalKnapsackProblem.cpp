#include <iostream>
using namespace std;

int main()
{
    float pi[]= {130,60,90,45,65};
    float wi[]= {30,40,50,20,30};
    float capacity=100;
    float r[5];

    for (int i = 0; i < 5; i++)
    {
        r[i]=pi[i]/wi[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (r[j-1]<r[j])
            {
            float temp = r[j-1];
                r[j-1]=r[j];
                r[j]=temp;

            float temppi= pi[j-1];
                pi[j-1]=pi[j];
                pi[j]=temppi;

             float tempwi= wi[j-1];
                wi[j-1]=wi[j];
                wi[j]=tempwi;
            }
            
        }
        
    }
    
    float freq=0;int result=0;
    for (int i = 0; i < 5; i++)
    {
        if(wi[i]<=capacity){
            capacity=wi[i];
            result=result+(pi[i]);
        }
        else{
            result = result+(capacity/wi[i])*pi[i];
            capacity=0;
        }
        cout<<i<<" ";
        if(capacity==0) break;

    }
    cout<<result;
    
    
    

   
}