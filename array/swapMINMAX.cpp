 #include <iostream>
using namespace std;
int main(){
    int num[5]={1,23,4,5,6};
    int max_Index=0;
    int min_Index=0;
    for(int i =0 ;i<5;i++){
        if(num[i]>num[max_Index]){
            max_Index=i;
        }
        if (num[i]<num[min_Index]){
            min_Index=i;
        }
    
    }
    swap(num[max_Index],num[min_Index]);
    for (int i=0;i<5;i++){
        cout << num[i]<<" ";

    }
    return 0;
}