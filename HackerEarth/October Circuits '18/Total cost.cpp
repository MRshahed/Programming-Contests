#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

    long int p,s,t,h,x;
    int n,result,result2;

    cin>>p>>s>>t>>h>>x;
     n=s-t;
    if(n<x)
    {
        int n1=x-n;

        result=(n*p)+(n1*h);
         cout<<result;
    }
    else if(n>x)
    {
          result2=x*p;

          cout<<result2;
    }

return 0;
}
