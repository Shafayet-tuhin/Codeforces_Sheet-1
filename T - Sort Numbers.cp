/*
𝓐𝓾𝔃𝓾𝓫𝓲𝓵𝓵𝓪𝓱 𝓜𝓲𝓷𝓪𝓼𝓱𝓪𝓲𝓽𝓪𝓷 𝓝𝓲𝓻𝓪𝓳𝓮𝓮𝓶
𝓑𝓲𝓼𝓶𝓲𝓵𝓵𝓪𝓱𝓲𝓻 𝓡𝓪𝓱𝓶𝓪𝓷𝓲𝓻 𝓡𝓪𝓱𝓲𝓶
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
   #ifndef ONLINE_JUDGE
  freopen("D:/inputoutput/input.txt", "r", stdin);
  freopen("D:/inputoutput/output.txt", "w", stdout);
  #endif
  int a[3],b[3],i;
    for (int i = 0; i < 3; i++) 
    {
        cin>> a[i] ;
    
    b[i]=a[i];}

 
  
    sort(a, a + 3);
  
    for (int i = 0; i < 3; i++)
    { 
        cout << a[i] << endl;
    }
    cout<<endl;
    for (int i = 0; i < 3; i++)
    { 
        cout << b[i] << endl;
    }
  
    return 0;
}
