#include<iostream>
using namespace std;
int linearsearch(int arr[],int sz,int target){
    for (int i =0;i<sz;i++){
        if (arr[i]==target){
            return i+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,3,4,5,6,7,8};
    int sz=7;
    int target=22;
   cout<< linearsearch(arr,sz,target);
    return 0;
}