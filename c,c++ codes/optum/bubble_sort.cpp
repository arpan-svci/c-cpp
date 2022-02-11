#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr ={987,64,1,1000};

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<'\t';
    }
    cout<<endl;
    for(int i=arr.size()-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int k=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=k;
            }
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<'\t';
    }
    return 0;
}