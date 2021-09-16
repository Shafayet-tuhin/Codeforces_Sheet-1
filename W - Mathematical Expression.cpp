#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,d,e,f,g,j;
    char c,i;

    cin>>a>>c>>b>>i>>j;
    d=a*b;
    e=a+b;
    f=a-b;
    g=a/b;
    if(c=='*'){
        if(d==j){
            cout<< "Yes\n" ;
        }
        else{
            cout<<d;
        }
    }
    if(c=='+'){
        if(e==j){
            cout<< "Yes\n" ;
        }
        else{
            cout<<e;
        }
    }
    if(c=='-'){
        if(f==j){
            cout<< "Yes\n" ;
        }
        else{
            cout<<f;
        }
    }
    if(c=='/'){
        if(g==j){
            cout<< "Yes\n" ;
        }
        else{
            cout<<g;
        }
    }
    return 0;
}
