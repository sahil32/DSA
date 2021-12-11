
#include<bits/stdc++.h>
using namespace std;
void swap(int *x, int *y) {
	int temp;  temp = *x;
	 *x = *y;
	 *y = temp;
	}
void reverse (vector<int>& nums, int l , int r) {
	while(l<r) {
		swap(nums[l++] , nums[r--]);
		}
}
int main() {
	vector<int> nums = {1,2,3,4,5,6,7};
	int k = 10;
	int n = nums.size();
	k %= n;
	reverse(nums , 0, n-1);
	reverse(nums , 0 , k-1);
	reverse(nums, k, n-1);
	for(auto x: nums) {
		cout<< x<< " " ;
		}
}
