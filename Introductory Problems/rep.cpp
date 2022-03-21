#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
    const long long int maxsize=1000000;
    char str[maxsize];
    int n,cur,best;
    cin>>str;
    n=(int)strlen(str);
    cur=best=1;
    for(int i=1;i<n;i++){
        if(str[i]==str[i-1]) cur++;
        else cur=1;
        best=max(best,cur);
    }
    cout<<best<<endl;
    return 0;
}
