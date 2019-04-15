#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int a[n];
int b[n];
int c[n];

for(int i=0; i<n; i++)
{
    cin>>a[i];
    a[i]*=20;
}
for(int j=0; j<n; j++)
{
    cin>>b[j];
    b[j]*=10;
}

for(int k=0; k<n; k++)
{
    c[k]=a[k]-b[k];
}
sort(c,c+n);

   if(c[n-1]<0)
    {
        cout<<"0"<<endl;
    }
    else
    {
    cout<<c[n-1]<<endl;

    }



return 0;
}

