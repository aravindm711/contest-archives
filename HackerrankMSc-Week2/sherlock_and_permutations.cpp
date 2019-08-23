#include<iostream>
#include<cmath>
using namespace std;

long long int power(long long int x, long long int y) 
{ 
	long long int p = 1000000007,res = 1;

	x = x % p; // Update x if it is more than or 
				// equal to p 

	while (y > 0) 
	{ 
		// If y is odd, multiply x with result 
		if (y & 1) 
			res = (res*x) % p; 

		// y must be even now 
		y = y>>1; // y = y/2 
		x = (x*x) % p; 
	} 
	return res; 
}

long long int fact(int n) 
{ 
	long long int p = 1000000007;

    if (n >= p) 
        return 0; 
  
   long long int result = 1; 
    for (int i = 1; i <= n; i++) 
        result = (result * i) % p; 
  
    return result; 
} 

int main()
{
	int check=1,t,n,m,j=0,i;

	long long int mod = 1000000007;

	while(check)
	{
		cin>>t;
		if(t >= 1 && t <= 200)
			check =0;
	}


	long long int answers[t];

	while(t)
	{
		cin >> n >> m;

		if( (n >= 1 && n<= 1000) && (m>=1 && m <= 1000))
		{
			answers[j] = ( fact(n+m-1) * ( power( fact(n)*fact(m-1),mod-2 ) ) ) % mod ;
			t--;
			j++;
		}
	}

	for (i=0;i<j;i++)
		cout<< answers[i] << endl;
}
