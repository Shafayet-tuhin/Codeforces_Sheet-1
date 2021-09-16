#include<bits/stdc++.h>
using namespace std;
int main()

{
 int a,b,c,d,m,n;
 cin>>a>>b>>c>>d;
 m = max(a,c);
 n = min(b,d);
 if (m>n)
 {
     cout<<"-1"<<endl;
 }
 else
 {
     cout<<m<<" "<<n<<endl;
 }

 return 0;
}
