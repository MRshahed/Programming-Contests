#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

    long int n,fib;
    long int sum=0,first=0,second=1,third=0;

    cin>>n;
    for(int i=0; i<n; i++)
    {
       cin>>fib;
       while(third<=fib)
       {
           if(third%2==0)
           {
            sum+=third;
           }
            third=first+second;
            first=second;
            second=third;
        }
        cout<<sum<<endl;
        sum=0;
        first=0;
        second=1;
        third=0;
    }
    return 0;
}
