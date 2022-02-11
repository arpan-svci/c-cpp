#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*string kangaroo(int x1, int v1, int x2, int v2) {
if(v1==v2&&x1==x2)
    return "YES";
else if(v1>v2){
    if(x1>=x2)
        return "NO";
    else{
            cout<<"x1="<<x1<<"x2="<<x2;
        while(x1<x2){
            cout<<"x1="<<x1<<"x2="<<x2;
            x1=x1+v1;
            x2=x2+v2;
            if(x1==x2)
                return "YES";
        }
         return "No";
    }
}
else if(v1<v2){
    if(x1<=x2)
        return "NO";
    else{
        while(x1>x2){
            cout<<"x1="<<x1<<"x2="<<x2;
            x1=x1+v1;
            x2=x2+v2;
            if(x1==x2)
                return "YES";
        }
        return "No";
    }
}
else
    return"NO";
}
int main(){
string s=kangaroo(21,6,47,3);
cout<<s;
}*/
// int main(){
// vector<int>a{1,4,2,8,3,12,43,5,7,8};
// sort(a.begin(),a.end());
// for(auto x:a)
//     cout<<x<<"\t";
// }
// int main(){
//    string a="111";
//    string b="1102";

//    int la=a.length();
//    int lb=b.length();
//    int length=0;
//  vector<int>r(la+lb);//result will be stored here
//     int d=0;
// int n=0;

//    for(int i=lb-1;i>=0;i--){//this is for one strig
//          int c=0;    
//        int t=d;
//        for(int j=la-1;j>=0;j--){// this is for anodher
         
//          int p=((b[i]-'0')*(a[j]-'0'))+c+r[t];
//          r[t]=p%10;
//          c=p/10;
//         t++;
//        }
//       length=t-1;
//        while(c){
//            r[t]=c%10;
//            c=c/10; 
//               length=t;     
//        }
//        d++;
       
//    }



//   for(int i=length;i>=0;i--){
//       cout<<r[i];
//   }
//     return 0;
// }
int main(){
    vector<vector<int>> k{{0,2,3},{4,7,8},{1,34,78}};
    cout<<*(*k)+1;
    return 0;
}