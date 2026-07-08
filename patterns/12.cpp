#include <bits/stdc++.h>
using namespace std;
void pattern(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<j+1;
        }
        for (int j=0;j<n+1-2*i;j++){
            cout<<"-";

        }
        // for (int j=1;j<1+1;j++){
        //     cout<<j;
        // }
        cout<<endl;
    }
}
int main(){
    int n=5;
    //cin>>n;
    pattern(n);
    return 0;
}