#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int a,b,r,t,y,u;
char s;
cin>>a>>s>>b;

if (s == 43)
{
    r =a+b;
    cout<<r<<endl;
}
else if (s ==45)
{
    t =a-b;
    cout<<t<<endl;
}
else if (s == 42)
{
    y =a*b;
    cout<<y<<endl;
}
else if (s == 47)
{
    u =a/b;
    cout<<u<<endl;
}
return 0;
}
