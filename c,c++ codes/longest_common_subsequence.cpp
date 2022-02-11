#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int x[100][100]={0};


string print(string a,string b,int la,int lb){
    if(la==0 || lb==0)
    return  "";


    if(a[la-1]==b[lb-1])
    return print(a,b,la-1,lb-1)+a[la-1];

    else if(x[lb][la-1]>x[lb-1][la]){
        return print(a,b,la-1,lb);
    }
    else{
        return print(a,b,la,lb-1);
    }
}


 int lcs(string a,string b,int la,int lb){
         
        
        if(la==0 || lb==0)
            return 0;
        for(int i=1;i<=lb;i++){
            for(int j=1;j<=la;j++){
                if(b[i-1]==a[j-1])
                x[i][j]=x[i-1][j-1]+1;
                else{
                    x[i][j]=max(x[i][j-1],x[i-1][j]);
                }
            }
        }
    }
    
int main(){
    string a="ahgbcfd";
    string b="xabycgd";
     int la=a.length();
        int lb=b.length();
     lcs(a,b,la,lb);
     cout<<x[la][lb]<<endl; 
     cout<<print(a,b,la,lb);
}