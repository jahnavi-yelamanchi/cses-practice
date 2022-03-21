#include<iostream>
using namespace std;
int main(){
    int n;
    long long x,mx,sum;
    cin>>n;
    cin>>mx;
    for(int i=1;i<n;i++){
        cin>>x;
        mx = max(mx,x);
        sum+= (mx-x);
    }
    cout<<sum<<endl;
}
