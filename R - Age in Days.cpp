#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d,e;
cin >>a;
b = a /365;
c = a% 365;
d = c/30;
e = (a%365) % 30;
cout <<b<<" years"<<endl;
cout <<d<<" months"<<endl;
cout <<e<<" days"<<endl;

return 0;
}
