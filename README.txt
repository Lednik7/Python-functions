# python_func
c++

vector <int> slice(vector<int> &a, int start, int stop) {
	vector <int> ret(stop - start);
	for (int i = 0; i < stop - start; i++) ret[i] = a[start + i];
	return ret;
}

vector <int> twist(vector<int> &a) {
	vector <int> ret(a.size());
	ret = a;
	reverse(ret.begin(), ret.end());
	return ret;
}

vector <int> sorted(vector<int> &a) {
	vector <int> ret = a;
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

int index(vector<int> &a, int b) {
	int j = -1;
	for (int i = 0; i < int (a.size()); ++i) {
		if (a[i] == b) {
			j = i;
			break;
		}
	} return j;
}
