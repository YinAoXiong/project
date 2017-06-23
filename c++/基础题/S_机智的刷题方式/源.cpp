
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 10010;
const int inf = 0x7FFFFFFF;
struct temp
{
	int key;
	int value;
};
temp the_min(int *f, int except_time)
{
	temp a;
	int min = f[except_time];
	int key = except_time;
	for (int i = except_time + 1; i <= except_time + 8; ++i)
		if (f[i] < min)
		{
			min = f[i];
			key = i;
		}
	a.key = key;
	a.value = min;
	return a;

}
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int things_weight[3], things_value[3];
		things_value[0] = 1;
		things_value[1] = 2;
		things_value[2] = 5;
		for (int i = 0; i < 3; ++i)
			cin >> things_weight[i];
		int except_value, all_weight;
		cin >> except_value >> all_weight;
		int dp[N];
		dp[0] = 0;
		for (int i = 1; i <= except_value + 9; ++i)
			dp[i] = inf;
		for (int i = 0; i < 3; ++i)
			for (int j = things_value[i]; j <= except_value + 8; ++j)
				if (j >= things_value[i])
				{
					dp[j] = min(dp[j], dp[j - things_value[i]] + things_weight[i]);
				}
		temp a = the_min(dp, except_value);

		for (int i = 0; i < N; ++i)
			dp[i] = 0;
		for (int i = 0; i < 3; ++i)
			for (int j = things_weight[i]; j <= all_weight; ++j)
				dp[j] = max(dp[j], dp[j - things_weight[i]] + things_value[i]);
		cout << a.value << endl << dp[all_weight] << endl;
	}
	return 0;
}


