#include <iostream>
using namespace std;
int BinarytoNum(int num){
    int ans=0,pow=1;
    while(num>0){
        int rem=num%10;
        num/=10;
        ans+=rem*pow;
        pow*=2;
    }
    return ans;
}

int main(){
    int binary;
    cin>>binary;
    cout <<BinarytoNum(binary);
    return 0;
}