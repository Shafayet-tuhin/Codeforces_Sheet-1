#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,flr,cl,rnd,x;
    cin>>a>>b;
    x = a/b;
   flr = floor(x);
    cl = ceil(x);
    rnd = round(x);
    cout<< "floor " <<a<< " / " <<b<< " = " <<flr<< endl;
    cout<< "ceil " <<a<< " / " <<b<< " = " <<cl<< endl;
    cout<< "round " <<a<< " / " << b << " = " <<rnd << endl;
    return 0;

}
