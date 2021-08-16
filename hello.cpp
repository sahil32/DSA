#include<iostream>
using namespace std;
int main(){
    int a[9]={};
    for(int i = 0;i<9;i++)
    {
        cin>>a[i];
    }
    int n = sizeof(a)/sizeof(a[0]);
    int y = n-1;
    int x = 0;
    while(x!=y)
    {
        swap(a[x++],a[y--]);
    }
    for(int i = 0;i< n;i++)
    {
        cout<< a[i];
    }
}  