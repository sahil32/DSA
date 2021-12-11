#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n , int wrong, int curr) {
	int temp = arr[curr];
	for(int i  = curr; i > wrong; i--){
		arr[i] = arr[i-1];
		}
	arr[wrong] = temp;
	}
void rearrange (int arr[], int n) {
	int wrong = -1;
	for(int i = 0; i < n; i++) {
		if(wrong>=0) {
			if(((arr[wrong]>=0) && (arr[i] < 0)) || ((arr[wrong]<0) && (arr[i] >= 0))) {
				rotate(arr , n, wrong, i);
				if (i - wrong >= 2) {
					wrong += 2;
					} else {
						wrong = -1;
					}
				}
			}
			if(wrong == -1) {
				if(((arr[i]<0) && (i%2)) || ((arr[i] >= 0) && (!(i%2))))
		{
			wrong = i;
		}
				}
		}
	}
void printArr(int arr[], int n) {
	for(int i = 0; i< n;i++){
		cout<< arr[i]<<"\t";
		} 
		cout << "\n";
	}
int main() {
	int arr[] = { -5, -2, 5, 2,
                 4, 7, 1, 8, 0, -8 };
	int n = sizeof(arr)/sizeof(arr[0]);
	printArr(arr, n);
	rearrange(arr, n);
	printArr(arr, n);
	}
