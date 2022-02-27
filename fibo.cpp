#include<iostream>
using namespace std;

int fibo(int n)
{
    int temp = 0;
    int a=1,b=0,c=0;
    for(int i=1; i<=n; i++)
    {
        c=a+b;
        cout<<c<<" ";
        b=a;
        a=c;
        
    }
    cout<<endl;
    return 1;
}

int main()
{
    cout<<endl<<"Enter the limit of series: "; int n; cin>>n; cout<<endl;
    fibo(n);
    return 0;
}