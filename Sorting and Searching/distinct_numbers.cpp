#include <bits/stdc++.h>
using namespace std;

int distinct(int* arr, int len){
    set<int> S; // declaring a set container using STL
    for (int i = 0; i < len; i++) {
        S.insert(arr[i]); // inserting all elements of the
                          // array into set
    }
    int ans = S.size(); // calculating the size of the set
    return ans;
}
int main(){
	int n;
	cin>>n;
  int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
  int dis_elements = distinct(arr, n); // calling the function on array
  cout << dis_elements << endl;
  return 0;
}
