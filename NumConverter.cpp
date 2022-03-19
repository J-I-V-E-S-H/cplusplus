#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int getDigits(int n)
{
    int count=1;
    for(n; n/10>0; n/=10) count++;
    return count;
}

int bin_to_dec(int n)
{
    int ans = 0;
    int x = n;
    for(int i=0; i<getDigits(n); i++)
    {
        ans+= x%10*pow(2,i);
        x/=10;
    }
    return ans;
}

int dec_to_bin(int n)
{
    int ans = 0;
    for(int i=0; n>0; i++)
    {
        ans+= n%2*pow(10,i);
        n/=2;
    }
    return ans;
}


int oct_to_dec(int n)
{
    int ans = 0;
    int x = n;
    for(int i=0; i<getDigits(n); i++)
    {
        ans+= x%10*pow(8,i);
        x/=10;
    }
    return ans;
}

int dec_to_oct(int n)
{
    int ans = 0;
    for(int i=0; n>0; i++)
    {
        ans+= n%8*pow(10,i);
        n/=8;
    }
    return ans;
}

int hex_to_dec(string n)
{
    int ans = 0;
    for(int i=0; i<n.length(); i++)
    {
        switch(n[n.length()-i-1])
        {
            case '0': { ans+= 0*pow(16,i); break; }
            case '1': { ans+= 1*pow(16,i); break; }
            case '2': { ans+= 2*pow(16,i); break; }
            case '3': { ans+= 3*pow(16,i); break; }
            case '4': { ans+= 4*pow(16,i); break; }
            case '5': { ans+= 5*pow(16,i); break; }
            case '6': { ans+= 6*pow(16,i); break; }
            case '7': { ans+= 7*pow(16,i); break; }
            case '8': { ans+= 8*pow(16,i); break; }
            case '9': { ans+= 9*pow(16,i); break; }
            case 'A': case 'a': { ans+= 10*pow(16,i); break; }
            case 'B': case 'b': { ans+= 11*pow(16,i); break; }
            case 'C': case 'c': { ans+= 12*pow(16,i); break; }
            case 'D': case 'd': { ans+= 13*pow(16,i); break; }
            case 'E': case 'e': { ans+= 14*pow(16,i); break; }
            case 'F': case 'f': { ans+= 15*pow(16,i); break; }
            default: break;
        }
    }
    return ans;
}

void dec_to_hex(int n)
{
    int x = n;
    int counter = 0;
    char ans[20];
    for(int i=0; n>0; i++)
    {
        switch(n%16)
        {
            case 0: ans[i] = '0'; counter++; break;
            case 1: ans[i] = '1'; counter++; break;
            case 2: ans[i] = '2'; counter++; break;
            case 3: ans[i] = '3'; counter++; break;
            case 4: ans[i] = '4'; counter++; break;
            case 5: ans[i] = '5'; counter++; break;
            case 6: ans[i] = '6'; counter++; break;
            case 7: ans[i] = '7'; counter++; break;
            case 8: ans[i] = '8'; counter++; break;
            case 9: ans[i] = '9'; counter++; break;
            case 10: ans[i] = 'A'; counter++; break;
            case 11: ans[i] = 'B'; counter++; break;
            case 12: ans[i] = 'C'; counter++; break;
            case 13: ans[i] = 'D'; counter++; break;
            case 14: ans[i] = 'E'; counter++; break;
            case 15: ans[i] = 'F'; counter++; break;
            default: cout<<endl<<"Wrong!!!"; counter++; break;
        }
        n/=16;
    }
    cout<<endl<<"The decimal no: "<<x<<" is: "; for(int i=counter-1; i>=0; i--) cout<<ans[i]; cout<<" in hexadecimal system."<<endl;
}

int main()
{
    cout<<endl<<"\tWelcome to the menu driven number converter."<<endl;
    cout<<endl<<"1.) Binary to Decimal converter."
        <<endl<<"2.) Octal to Decimal converter."
        <<endl<<"3.) HexaDecimal to Decimal converter."
        <<endl<<"4.) Decimal to Binary."
        <<endl<<"5.) Decimal to Octal."
        <<endl<<"6.) Decimal to Hexadecimal."
        <<endl<<"Please select an option: "; int n; cin>>n; cout<<endl;

        switch(n)
        {
            case 1:
            {    cout<<"Please enter the binary number you want to convert: "; int num; cin>>num;
                cout<<endl<<"The binary number: "<<num<<" is: "<<bin_to_dec(num)<<" in decimal system."<<endl;
                break;
            }
            case 2:
            { 
                cout<<"Please enter the octal number you want to convert: "; int num; cin>>num;
                cout<<endl<<"The octal number: "<<num<<" is: "<<oct_to_dec(num)<<" in decimal system."<<endl;
                break;
            }
            case 3:
            {
                cout<<"Please enter the HexaDecimal number you want to convert: "; string num; cin>>num;
                cout<<endl<<"The HexaDecimal number: "<<num<<" is: "<<hex_to_dec(num)<<" in decimal system."<<endl;
                break;
            }
            case 4:
            {
                cout<<"Please enter the decimal number you want to convert: "; int num; cin>>num;
                cout<<endl<<"The binary number: "<<num<<" is: "<<dec_to_bin(num)<<" in binary system."<<endl;
                break;
            }
            case 5:
            {
                cout<<"Please enter the decimal number you want to convert: "; int num; cin>>num;
                cout<<endl<<"The decimal number: "<<num<<" is: "<<dec_to_oct(num)<<" in octal system."<<endl;
                break;
            }
            case 6:
            {
                cout<<"Please enter the decimal number you want to convert: "; int num; cin>>num;
                dec_to_hex(num);
                break;
            }
            default: break;

        }
    return 0;
}