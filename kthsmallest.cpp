#include <bits/stdc++.h>
using namespace std;
int main() {
	int arr[] = {261, 989, 386, 334, 710, 639, 624, 713, 497, 997, 963, 409, 500, 797, 167};
	int k = 10;
	int n = sizeof(arr)/sizeof(arr[0]);
	set <int> s(arr , arr+n);
	set<int> :: iterator itr = s.begin();
		while(itr<s.end()) {
			cout<< *itr;
			itr+=2;
			
			}
}
