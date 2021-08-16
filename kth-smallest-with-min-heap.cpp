#include <bits/stdc++.h>
using namespace std;
void swap(int *x, int *y);
class MinHeap {
	int *harr;
	int capacity;
	int heap_size;
public:
	MinHeap(int a[] , int size);
	void MinHeapify(int i);
	int parent (int i) {
		return (i-1) / 2;
		}
	int left (int i) {
		return (2 * i + 1);
		}
		int right {
		return (2 * i + 2);
			}
		int extractMin();
		int getMin() {return harr[0];}
	}
	
MinHeap :: MinHeap(int a[], int size)
{
	heap_size = size;
	harr = a;
	int i = (heap_size-1) /2;
	
	}
	
	
int main() {
	
	return 0;
	} 
