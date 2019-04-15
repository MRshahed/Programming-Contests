#include<bits/stdc++.h>
using namespace std;

int main()
{

int a,b,k;

cin>>a>>b>>k;

int c,d;

while(k--)
{
c=(a+1)*b;
d=a*(b+1);
if(c>d)
{
    a++;
}
else
{
    b++;
}
}
if(c>d)
{
    cout<<c<<endl;
}
else
{
    cout<<d<<endl;
}

return 0;
}
