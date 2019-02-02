#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,t1,t2,t3;
    int sum=0;

    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>t1>>t2>>t3;

    int st=t2-t1;

    for(int j=t1; j<=t3; j+=st)
    {
        sum+=j;
    }
    cout<<sum<<endl;
    sum=0;
    }

return 0;
}
