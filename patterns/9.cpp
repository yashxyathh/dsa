#include <bits/stdc++.h>
using namespace std;
void pattern(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            cout<< " ";
        }
        for(int j=0;j<i*2+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-1-i;j++){
            cout<< " ";
        }
        cout<<endl;
    }
    for (int i = 0; i <n; i++)
    {
        for (int j=0;j<i;j++){
            cout<< " ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<< "*";
        }
        for (int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
        

        cout<<endl;
    
}
int main (){
    int n=5;
    cin>>n;
    pattern(n);
    return 0;
}


