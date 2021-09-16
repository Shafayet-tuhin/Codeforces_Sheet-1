#include<bits/stdc++.h>
using namespace std;
int main()
{
   #ifndef ONLINE_JUDGE
  freopen("D:/inputoutput/input.txt", "r", stdin);
  freopen("D:/inputoutput/output.txt", "w", stdout);
  #endif
 long long int a,b,c,d,m;
 cin>>a>>b>>c>>d;
 m = ((a%100)*(b%100)*(c%100)*(d%100))%100;
  if(m==0){cout<<"00";}
   if(m>=10){cout<<m;}
     if(m>=1 && m<=9)
     {
        printf("0%d\n",m);
    }
 
return 0;
}
