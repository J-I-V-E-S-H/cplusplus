#include <iostream>
using namespace std;


void sol_rect();
void hol_rect();
void str_pyri(); 
void inv_pyri();
void rev_pyri();
void num_pyri();
void floyd_pyri();
void butterfly();
void zero_one();
void rhombus();
void triangle();
void palin_tri();
void twin_tri();
void zig_zag();

int main()
{
    cout<<"\t\tMenu driven program for diffrent patterns\n\n";

    cout<<"Kindly choose an input:"<<endl;
    cout<<"1.) Solid rectangle pattern"<<endl
        <<"2.) Hollow rectangle pattern"<<endl
        <<"3.) Straight half pyrimid pattern"<<endl
        <<"4.) Inverted half pyrimid pattern"<<endl
        <<"5.) Reversed half pyrimid pattern"<<endl
        <<"6.) Numbered half pyrimid pattern"<<endl
        <<"7.) Floyd half pyrimid pattern"<<endl
        <<"8.) Butterfly pattern"<<endl
        <<"9.) Zero-One pattern"<<endl
        <<"10.) Rhombus pattern"<<endl
        <<"11.) Triangle pattern"<<endl
        <<"12.) Palindromic triangle pattern"<<endl
        <<"13.) Twin triangles pattern"<<endl
        <<"14.) Zig-zag pattern"<<endl
        <<"Kindly enter your input: "; int n; cin>>n;
    cout<<endl;

    switch(n)
    {
        case 1: { sol_rect(); break;}
        case 2: { hol_rect(); break;}
        case 3: { str_pyri(); break;}
        case 4: { inv_pyri(); break;}
        case 5: { rev_pyri(); break;}
        case 6: { num_pyri(); break;}
        case 7: { floyd_pyri(); break;}
        case 8: { butterfly(); break;}
        case 9: { zero_one(); break;}
        case 10: { rhombus(); break;}
        case 11: { triangle(); break;}
        case 12: { palin_tri(); break;}
        case 13: { twin_tri(); break;}
        case 14: { zig_zag(); break;}
        default: break;

    }

    return 0;
}

void sol_rect()
{
    cout<<endl<<"Kindly enter the length of the rectangle: "; int l; cin>>l;
    cout<<endl<<"Kindly enter the breadth of the rectangle: "; int b; cin>>b;

    for(int i=0; i<l; i++)
    {
        for(int j=0; j<b; j++) cout<<"*";
        cout<<endl;
    }
}

void hol_rect()
{
    cout<<endl<<"Kindly enter the length of the rectangle: "; int l; cin>>l;
    cout<<endl<<"Kindly enter the breadth of the rectangle: "; int b; cin>>b;

    for(int i=0; i<l; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(i==0||i==l-1) cout<<"*";
            else
            {
                if(j==0||j==b-1) cout<<"*";
                else cout<<" ";
            }
        }
        cout<<endl;
    }
}

void str_pyri()
{
    cout<<endl<<"Kindly enter the size of the pyrimid: "; int n; cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++) cout<<"*";
        cout<<endl;
    }
}

void inv_pyri()
{
    cout<<endl<<"Kindly enter the size of the pattern: "; int n; cin>>n;
    
    for(int i=1; i<=n; i++) 
    {
        for(int j=0; j<n; j++) 
        {
            if(j<n-i) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
}

void rev_pyri()
{
    cout<<endl<<"Kindly enter the size of the pattern: "; int n; cin>>n;
    
    for(int i=n; i>0; i--) 
    {
        for(int j=0; j<i; j++) cout<<"*";
        cout<<endl;
    }
}

void num_pyri()
{
    cout<<endl<<"Kindly enter the size of the pattern: "; int n; cin>>n;
    
    for(int i=1; i<=n; i++) 
    {
        for(int j=0; j<i; j++) cout<<i;
        cout<<endl;
    }
}

void floyd_pyri()
{
    cout<<endl<<"Kindly enter the size of the pattern: "; int n; cin>>n;
    
    int num = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++) cout<<num++<<" ";
        cout<<endl;
    }
}

void butterfly()
{
    cout<<endl<<"Kindly enter the size of the pattern: "; int n; cin>>n;
    
    for(int i=0; i<2*n; i++)
    {
        if(i<=n)
        {
            for(int j=0; j<2*n; j++)
            {   
                if(j<i||j>=2*n-i) cout<<"*";
                else cout<<" ";

            }
        }
        
        else
        {
            for(int j=0; j<2*n; j++)
            {   
                if(j>=i||j<2*n-i) cout<<"*";
                else cout<<" ";

            }
        }
        cout<<endl;

        
    }   
    
    
}

void zero_one()
{
    cout<<endl<<"Kindly enter the size of the pattern: "; int n; cin>>n;
    
    for(int i =0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if((i+j)%2!=0) cout<<true;
            else cout<<false;
        }
        cout<<endl;
    }
}

void rhombus()
{
    cout<<endl<<"Kindly enter the size of the pattern: "; int n; cin>>n;

    for (int i=0; i<n; i++)
    {
        for(int j=0; j<n-i;j++) cout<<" ";
        for(int j=0; j<n; j++) cout<<"*";
        cout<<endl;
    }
}

void triangle()
{
    cout<<endl<<"Kindly enter the size of the pattern: "; int n; cin>>n;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<n-i; j++) cout<<" ";
        for(int j=0; j<i; j++) cout<<j+1<<" ";
        cout<<endl;
    }
}

void palin_tri()
{
    cout<<endl<<"Kindly enter the size of the pattern: "; int n; cin>>n;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<n-i; j++) cout<<" ";
        for(int j=i; j>=1; j--) cout<<j;
        for(int j=2; j<=i; j++) cout<<j<<"";
        cout<<endl;
    }
}

void twin_tri()
{
    cout<<endl<<"Kindly enter the size of the pattern: "; int n; cin>>n;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<n-i; j++) cout<<" ";
        for(int j=0; j<i; j++) cout<<"*"<<" ";
        cout<<endl;
    }
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i; j++) cout<<" ";
        for(int j=0; j<n-i; j++) cout<<"*"<<" ";
        cout<<endl;
    }
}

void zig_zag()
{
    cout<<endl<<"Kindly enter the size of the pattern: "; int n; cin>>n;
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=n; j++) 
        {
            if((i+j)%4==0) cout<<"*";
            else if(i%2==0&&j%2==0) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}