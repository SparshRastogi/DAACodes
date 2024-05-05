#include <bits/stdc++.h>
using namespace std;

int count(vector<int> coins, int n, int sum)
{
	vector<int> dp(sum + 1,0);
	dp[0] = 1;

	for (int i = 0; i < n; i++)
		for (int j = coins[i]; j <= sum; j++)
			dp[j] += dp[j - coins[i]];
	return dp[sum];
}

int main()
{
	vector<int> coins = { 1, 2, 3 };
	int n = coins.size();
	int sum = 5;
	cout << count(coins, n, sum);
	return 0;
}
