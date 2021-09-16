#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;

    double a,b,c,d,i,k;

    cin>>a>>b>>c>>d;

    i=b*log(a);

    k=d*log(c);

    if(i>k)
   {
        cout<<"YES";
   }
    else
    {
        cout<<"NO";
    }
    return 0;
}
