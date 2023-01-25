#include <iostream>

using namespace std;

int main()
{
    int a,b,sum,prod,diff,divide,modulus;
    char calc;
    
    cout<<"Calculator Program\n";
    
    cout<<"Enter the first number:\n";
    cin>>a;
    
    cout<<"Enter the second number:\n";
    cin>>b;
    
    cout<<"Enter the function you want to do:\n";
    cin>>calc;
    
    if(calc=='+')
    {
    sum=a+b;
    cout<<"The sum of the given numbers is:"<<sum;
    
    }
    
    else if (calc=='x')
    {
        prod=a*b;
        cout<<"The prod of given numbers is:"<<prod;
        
    }
    
    else if (calc=='-')
    {
        diff=a-b;
        cout<<"The difference between the given numbers is:"<<diff;
        
    }
    
    else if (calc=='/')
    {
        divide=a/b;
        cout<<"The division of the given numbers is:"<<divide;
        
    }
    
    else if (calc=='%')
    {
        modulus=a%b;
        cout<<"The modulus of the given numbers is:"<<modulus;
        
    }
    return 0;
}