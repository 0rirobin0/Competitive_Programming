#include<bits/stdc++.h>
using namespace std;
int main()
{


 int t;
 cin>>t;
 while(t--)
 {
    int n,c=0,dot=0,ans;
    string s;
    cin>>n>>s;
    
    for (char i : s)
    {
        
        if(i=='.')
        
        {
        if (c<3)
        {
            c++;
        }
        dot++;
        

        }
        if(i=='#' && c<3) c=0;
    

        
    }
    // cout<<"c"<<dot<<c<<endl;

    
    if (dot>=3 && c==3)
    {
     ans=2;
    }
    else
    {
        ans=dot;
    }
    

   cout<<ans<<endl;

  
    
    
    





  
 }


 return 0;
}