#include<iostream>
#include<vector>
using namespace std;
int binarysearch(int startindex,int endindex,int value,vector<int> k){
    if(startindex==endindex){
        return -1;
    }
    int val=(startindex+endindex)/2;
    if(k[val]==value){
        return val;
    }
    else if(value>k[val]){
        return(binarysearch(val+1,endindex,value,k));
    }
    else{
        return(binarysearch(startindex,val-1,value,k));
    }
}
int main(){
    vector<int> t={2,3,5,7,8,9,12,24,34,38};
    int value=9;
    int s=binarysearch(0,t.size()-1,value,t);
    cout<<s;
    return 0;
}