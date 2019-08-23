#include<iostream>
using namespace std;

const int asize= 100005;
const int mod = 1000000007;
long long int arr[asize];
long long int gf[asize+5],gr[asize+5];

long long int gcd(long long int a,long long int b)
{
    while(a&&b)
    {
        if(a>=b)
            a=a%b;
        else
            b=b%a;
    }
    return a+b;
}
int main()
{
    long long int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(n==1)
    {
        cout << arr[0]+1 << endl;
        return 0;
    }

    for(int i=0;i<n;i++)
    {
        gf[i+1]=gcd(gf[i],arr[i]);
    }

    long long int j=0;
    for(int i=n-1;i>=0;i--)
    {
        gr[j+1]=gcd(gr[j],arr[i]);
        j++;
    }
    for(int i=0;i<n;i++)
    {
        long long int x=gcd(gf[i],gr[n-i-1]);
        if(arr[i]%x!=0)
	{
            cout<<x<<endl;
            return 0;
        }
    }
    return 0;
}
