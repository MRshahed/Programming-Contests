#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
   int n;
   cin>>n;
   int a,count=0;

   for(int i=1; i<=n; i++)
   {
       if(n%i==0)
       {
         a=i+(n/i);
         if(a>count)
         {
             count=a;
         }
       }
   }
   cout<<count;
   count=0;

    return 0;
}
