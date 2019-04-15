#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m,q,c;
bool flag=false;
cin>>n;
int v=0;
for(int i=0; i<n; i++)
{
    cin>>m;
    int a[m];
    for(int j=0; j<m; j++)
    {
     cin>>a[j];
    }
    sort(a,a+m);
    cin>>q;
    while(q--)
    {
    cin>>c;
    for(int l=0; l<m; l++)
    {
        if(a[l]<c)
          {
             if(a[l]>v)
             {
             v=a[l];
             flag=true;
             }
          }
    }
    if(flag)
    {
    cout<<v<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    }
    c=0;
    v=0;
}

return 0;
}
