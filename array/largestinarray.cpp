#include<iostream>
#include<climits>
#include <algorithm>
using namespace std;
int main(){
    int mark[5]={23,34,21,56,102};
    int largest= INT_MIN;
    for (int i=0;i<5;i++){
        largest=max(mark[i],largest);
    }
    cout<< largest;
    
}