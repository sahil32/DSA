#include<bits/stdc++.h>
using namespace std;
int main() {
	vector<int> arr = {0, 1, 0, 3, 12};
	int n = arr.size();
	int p = 0;
	int q = 0;
	while(p < n && q < n) 
	{
		if(arr[q] != 0) {
			swap(arr[q], arr[p]);
			p++;
			}
		q++;
	}
	for(auto x: arr) {
		cout<< x<< " " ;
}
}
