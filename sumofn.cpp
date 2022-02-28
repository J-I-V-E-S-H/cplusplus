#include<iostream>
using namespace std;

int sum_n(int n)
{
    return n*(n+1)/2;
}

int main()
{
    cout<<endl<<"Please enter your number: "; int n; cin>>n; cout<<endl;
    cout<<"The sum of "<<n<<" natural numbers is : "<<sum_n(n)<<endl;
    return 0;
}