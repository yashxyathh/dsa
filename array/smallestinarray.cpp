#include<iostream>
#include<climits>
#include <algorithm>
using namespace std;
int main(){
    int mark[5]={23,34,21,56,102};
    int smallest= INT_MIN;
    for (int i=0;i<5;i++){
        smallest=max(mark[i],smallest);
    }
    cout<< smallest;
    
}