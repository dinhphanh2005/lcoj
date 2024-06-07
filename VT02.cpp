#include <iostream>
#include <cmath>
#include <set>
using namespace std;

int n;
set<int> s;

int main() {
	cin >> n;
	for (int i=1; i<=n; i++) {
		int x; cin >> x;
		s.insert(x);
	}
	if (s.size()<2) {
		cout << "NOT FOUND\n";
		return 0;
	}
	auto it=s.end();
	it--;
	it--;
	cout << *it;
	
	return 0;
}