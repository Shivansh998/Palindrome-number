#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,rem,p;
    cin>>n;
    p = n;
    while(p>0)
    {
        rem = p%10;
        rev = (rev*10)+rem;
        p = p/10;
    }
    if(rev==n)
        cout<<" It is a Palindrome Number";
    else
        cout<<" It is not a Palindrome Number";
        cout<<endl;
}
