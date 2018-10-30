#include<iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

int n;
cin>>n;
long long int num,a,b,c;

for(int i=0; i<n; i++)
{
    cin>>num;

    a=(num-1)/3;
    b=(num-1)/5;
    c=(num-1)/15;

    cout<<3*(a*(a+1)/2)+5*(b*(b+1)/2)-15*(c*(c+1)/2)<<endl;

}
return 0;
}
