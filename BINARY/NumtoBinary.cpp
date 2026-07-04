#include<iostream>
using namespace std;
int NumtoBinary(int num){
    int ans=0,pow=1;
    while (num>0){
        int rem=num%2;
        num/=2;
        ans+=(rem *pow);
        pow*=10;}
    return ans;
}
int main (){
    int num;
    cin>>num;
    cout << NumtoBinary(num);
    return 0; 
}