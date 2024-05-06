using namespace std; 
#include <bits/stdc++.h>
void SelectActivities(vector<int> s, vector<int> f) 
{ 
	vector<pair<int, int> > ans; 

	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > p; 

	for (int i = 0; i < s.size(); i++) { 
		p.push(make_pair(f[i], s[i])); 
	} 

	auto it = p.top(); 
	int start = it.second; 
	int end = it.first; 
	p.pop(); 
	ans.push_back(make_pair(start, end)); 

	while (!p.empty()) { 
		auto itr = p.top(); 
		p.pop(); 
		if (itr.second >= end) { 
			start = itr.second; 
			end = itr.first; 
			ans.push_back(make_pair(start, end)); 
		} 
	} 
	cout << "Following Activities should be selected. "
		<< endl 
		<< endl; 

	for (auto itr = ans.begin(); itr != ans.end(); itr++) { 
		cout << "Activity started at " << (*itr).first 
			<< " and ends at " << (*itr).second << endl; 
	} 
} 

int main() 
{ 
	vector<int> s = { 1, 3, 0, 0, 8, 5 }; 
	vector<int> f = { 2, 8, 3, 1, 9, 6 }; 

	SelectActivities(s, f); 

	return 0; 
}
