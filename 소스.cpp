#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main() {
	int size = 0;
	vector<int> vec;
	int x;

	while (cin >> x) {
		vec.push_back(x);
		size++;
	}

	sort(vec.rbegin(), vec.rend());
	cout << "ordered array" << endl;
	for (auto it = vec.begin(); it < vec.end(); it++) {
		cout << *it << " ";
	}
}