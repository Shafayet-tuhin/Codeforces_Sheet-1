#include<bits/stdc++.h>
using namespace std;
int main()
{
char a;
cin >> a;
if ( a >64 && a<91)
{
    cout << "ALPHA\n"<<"IS CAPITAL"<<endl;
}
else if ( a >96 && a<123)
{
    cout << "ALPHA\n"<<"IS SMALL"<<endl;
}

else if (a >47 && a<58)
    {
        cout << "IS DIGIT4" <<endl;
    }


return 0;
}
