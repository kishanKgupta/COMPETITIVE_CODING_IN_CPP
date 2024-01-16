#include<bits/stdc++.h>
using namespace std;

int prime(int num,int num1)
{
    int count=0;
    if(num<1 || num1<=1)
    {
        cout<<"No prime Number"<<endl;
    }
    else
    {
        if(num==1)
        {
            num = 2;
        }
       for(int i=num;i<=num1;i++)
        {
            for(int j=2;j<=num1;j++)
            {
                if(i%j==0)
                {
                    count++;
                }
            }
            if(count<=1)
            {
                cout<<i<<" ";
            }
            count=0;
        }
    }    
        
        
      return 0;  
}
int main()
{
    int num,num1;
    cout<<"Enter start value of prime :";
    cin>>num;
    cout <<"Enter End value of prime :";
    cin >> num1;
    prime(num,num1);
    return 0;
}