#include<bits/stdc++.h>
using namespace std;
int main()
{
char a,c,d;
cin >> a;
if ( a >64 && a<91)
{
    c = a+32;
    cout << c<<endl;
}
else if ( a >96 && a<123)
{
    d= a-32;
    cout <<d<<endl;
}

return 0;
}
