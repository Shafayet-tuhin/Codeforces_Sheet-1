#include<bits/stdc++.h>
using namespace std;
int main()
{
double n;
cin>>n;
int z = n;
double b = n - z;
if(b > 0)
{
    cout<<"float "<<z<<" "<<b;
}
else
    cout<<"int "<<z;
return 0;
}
