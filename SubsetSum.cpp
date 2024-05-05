#include <bits/stdc++.h>
using namespace std;

void PrintSubsetSum(int i, int n, vector<int> set, int targetSum,
					vector<int>& subset)
{
	if (targetSum == 0) {

		cout << "[ ";
		for (int i = 0; i < subset.size(); i++) {
			cout << subset[i] << " ";
		}
		cout << "]";
		return;
	}

	if (i == n) {
		return;
	}

	PrintSubsetSum(i + 1, n, set, targetSum, subset);

	if (set[i] <= targetSum) {

		subset.push_back(set[i]);

		PrintSubsetSum(i + 1, n, set, targetSum - set[i],
					subset);

		subset.pop_back();
	}
}

int main()
{
	vector<int> set = { 1, 2, 1,2,0,3 };
	int sum = 3;
	int n = set.size();
	vector<int> subset;
	cout << "Output 1:" << endl;
	PrintSubsetSum(0, n, set, sum, subset);
	cout << endl;

	return 0;
}
