#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int n,k;
    cin>>n>>k;
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ara[i];
    }


    if(k>1 || is_sorted(ara,ara+n))
    {
       cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    



   }

 return 0;
}