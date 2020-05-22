#include<iostream> 
#include <vector>
#include <string> 
#include <algorithm>  
#include <array> 
using namespace std;

vector <int> slice(vector<int> a, int start, int stop, int step = 1) {
	vector <int> ret(0);
	for (int i = 0; i < (stop - start); i+=step) ret.push_back(a[start + i]);
	return ret;
}

vector <int> twist(vector<int> ret) {
	reverse(ret.begin(), ret.end());
	return ret;
}

vector <int> sorted(vector<int> ret) {
	for (int i = 1; i < int (ret.size()); ++i) {
		int tmp = ret[i];
		int j = i - 1;
		while (j >= 0 && ret[j] > tmp) {
			ret[j + 1] = ret[j];
			--j;
		}
		ret[j + 1] = tmp;
	} return ret;
}

int index(vector<int> a, int b) {
	int j = -1;
	for (int i = 0; i < int (a.size()); ++i) {
		if (a[i] == b) {
			j = i;
			break;
		}
	} return j;
}

double num(string str){
	return atof (str.c_str());
}


int main() {
	int b;
	cin >> b;
	vector <int> base(b);

	for (int i = 0; i < b; i++) {
		cin >> base[i];
	}
	
	for (auto c : base) cout << c << " ";
	
	system("pause");
	return 0;
}
