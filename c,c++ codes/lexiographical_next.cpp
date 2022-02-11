#include<iostream>
#include<string>
#include<iterator>
#include<algorithm>
using namespace std;
bool next_lex(string &s){
    int p,q=s.size()-1;
    bool possible=false;
    for(int i=s.size()-1;i>=1;i--){
        if(s[i-1]<s[i]){
            p=i;
            possible=true;
            break;
        }
    }
    if(! possible)
        return false;
    for (int j = s.size()-1; j>=p; j--){
        if(s[p-1]<s[j]){
            q=j;
            break;
        }
    }
    int temp=s[p-1];
    s[p-1]=s[q];
    s[q]=temp;
    std:reverse(s.begin()+p,s.end());
    return true;
}
int main(){
    string s="abcd";
    int count=0;
    while(next_lex(s)){
        cout<<s<<endl;
        count++;
    }
    cout<<count<<endl;
    return 0;
}