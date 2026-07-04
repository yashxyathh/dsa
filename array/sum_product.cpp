#include<iostream>
using namespace std;
void product(int num[], int sz ){
    int pro=1;
    for (int i=0;i<sz;i++){
        pro*=num[i];
    }
    cout<<pro<<endl;
}
void sum(int num[], int sz ){
    int sum=0;
    for (int i=0;i<sz;i++){
        sum+=num[i];
    }
    cout<<sum<<endl;
}

int main(){
    int sz;
    
    cout<< "enter number of elements:";
    cin >> sz;
    int num[sz];
    for (int i=0;i<sz;i++)
    {
        cin>> num[i];
    }
    product(num,sz);
    sum(num,sz);

    return 0;
}