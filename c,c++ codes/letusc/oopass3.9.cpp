#include<iostream>
#include<conio.h>
using namespace std;
class TIME{
int hour,minute,second;
public:
    int gettime24(){
        int a,b,c;
        cout<<"\n enter hour,minute,second:\n";
        cout<<"hour:";
        cin>>a;
        if(a>24){
            cout<<"wrong input";
            return 0;
        }
        hour=a;
        cout<<"minute:";
        cin>>b;
        if(b>59){
            cout<<"wrong input";
            return 0;
        }
        minute=b;
        cout<<"second:";
        cin>>c;
        if(c>59){
            cout<<"wrong input";
            return 0;
        }
        second=c;
    }
    int gettime12(){
        int a,x,y,z;
      cout<<"press 1 for am"<<endl<<"press 2 for pm";
      cin>>a;
    switch(a){
    case 1:
        cout<<"\n enter hour,minute and second:\n";
        cout<<"hour:";
        cin>>x;
        if(x>12){
            cout<<"wrong input";
            return 0;
        }
        hour=x;
        cout<<"minute:";
        cin>>y;
        if(y>59){
            cout<<"wrong input";
            return 0;
        }
        minute=y;
        cout<<"second:";
        cin>>z;
        if(z>59){
            cout<<"wrong input";
            return 0;
        }
        second=z;
        break;
    case 2:
        int d;
        cout<<"\n enter hour,minute and second:\n";
        cout<<"hour:";
        cin>>x;
        if(x>12){
            cout<<"wrong input";
            return 0;
        }
        hour=x+12;
        cout<<"minute:";
        cin>>y;
        if(y>59){
            cout<<"wrong input";
            return 0;
        }
        minute=y;
        cout<<"second:";
        cin>>z;
        if(z>59){
            cout<<"wrong input";
            return 0;
        }
        second=z;
        break;
    case 3:
        cout<<"\n wrong input\n";
    }
    }
    void puttime12(){
    if(hour>12){
        cout<<hour-12<<":"<<minute<<":"<<second<<" pm";
    }
    else if(hour==12){
        cout<<hour<<":"<<minute<<":"<<second<<" pm";
    }
    else{
        if(hour==0){
            cout<<hour+12<<":"<<minute<<":"<<second<<" am";
        }
        else
        cout<<hour<<":"<<minute<<":"<<second<<" am";
    }
    }
    void puttime24(){
    cout<<hour<<":"<<minute<<":"<<second;
    }
    void addminute(int x){
        int o=minute+x;
        int c=(hour+o/60);
        minute=o%60;
        if(c/24>0){
            printf("it is day %d\n",(c/24)+1);
            hour=(hour+o/60)%24;
        }
        else{
            hour=c;
        }
    }
};
int main(){
TIME a,b;
a.gettime12();
a.addminute(2000);
a.puttime12();
}
