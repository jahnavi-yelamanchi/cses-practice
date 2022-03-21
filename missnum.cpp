#include<iostream>
using namespace std;
int main(){
    long long int n,sum=0;
    cin>>n;
    long long int x[n];
    long long int actual = n*(n+1)/2;
    for(int i=1;i<n;i++){
        cin>>x[i];
        sum+=x[i];
    }
    cout<<actual-sum<<endl;
    return 0;
}
