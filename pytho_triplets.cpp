#include<iostream>
using namespace std;

int max(int a, int b, int c)
{
    if(a>=b)
    {
        if(c>=a) return c;
        else return a;
    }
    else if(c>=b) return c;
    else return b;
}

bool isPytho(int a, int b, int c)
{
    if(max(a,b,c)==a)
    {
        if(a*a == b*b + c*c) return true;
        else return false;
    }

    if(max(a,b,c)==b)
    {
        if(b*b == a*a + c*c) return true;
        else return false;
    }

    if(max(a,b,c)==c)
    {
        if(c*c == b*b + a*a) return true;
        else return false;
    }
    return false;
}

int main()
{
    int a, b, c; cin>>a>>b>>c;
    if(isPytho(a,b,c)) cout<<endl<<"Yes they are pythogoras triplets."<<endl;
    else cout<<endl<<"No they are not pythogoras triplets."<<endl;
    return 0;
}