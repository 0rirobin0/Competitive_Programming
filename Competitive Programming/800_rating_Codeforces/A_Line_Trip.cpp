#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
     int last,n,x;
     cin>>n>>x;
     int ara[n];
     cin>>ara[0];
     int Max=ara[0];
     for (int i = 1; i < n; i++)
     {
       cin>>ara[i];
       int a=ara[i]-ara[i-1];
       if(a>Max)Max=a;
     }
     if (2*(x-ara[n-1])>Max) cout<<2*(x-ara[n-1])<<endl;
     else cout<<Max<<endl;
     
    
     
    }
 return 0;
}