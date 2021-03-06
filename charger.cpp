You are given a smartphone with an efficient charger. The initial amount of the charge in the smartphone is S, it charges
the smartphone at different rates depending upon the amount of charge available in the phone to prevent the battery of the phone

from any damage. Assuming that the current amount of charge available in the phone is C, the rates at which the phone is charged

R in units per minute are as follows:

Assuming the current charge level is C, the rates R of charging are (in units per minute)

0≤ C ≤ 10, R = 10  
11 ≤ C ≤ 230, R = 5  
231 ≤ C ≤ 559, R = 8  
560 ≤ C ≤ 1009, R = 2  
1010 ≤ C ≤ 5000, R = 7  
5001 ≤ C ≤ 10000, R = 8  
10001 ≤ C ≤ 1000000000, R = 3  
INPUT:

First-line contains Q, number of queries.

Next, Q lines contain two integers S and T.

OUTPUT:

One integer denoting the number of minutes it takes.

CONSTRAINTS:

1 ≤ Q ≤ 100000
0 ≤ S ≤ T ≤ 1000000000
SAMPLE INPUT:

2
0 5
10 50
SAMPLE OUTPUT:

1
7
Explanation:

First Query :

S = 0,T = 5

In this condition R = 10, hence after 1 minute charge becomes 0 + 10 = 10 which is greater than 5

Therefore total time: 1 minute

Second Query :

S = 10, T = 50. In this condition R = 10 applies, and charge becomes 10 + 10 = 20.

Now charge rate changes to R = 5, then after 6 more minutes charge becomes 20+(5+5+5+5+5+5) = 50

Therefore total time: 7 minutes.
  
  
  
  
  
  
  // code
  
  #include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	vector<int> v = { 10, 230, 559, 1009, 5000, 10000, 1000000000 };
	vector<int> r = { 10, 5, 8, 2, 7, 8, 3 };
	while(t--)
	{
		int a,b,ans = 0;
		cin>>a>>b;
		int i = 0;
		while(a<b)
		{
			while(a<v[i])
				i++;
			int mini = (min(v[i] , b)-a)/r[i];
			ans += mini;
			a += mini * r[i];
			if(a < b)
			{
				a += r[i];
				ans++;
			}
			i++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
