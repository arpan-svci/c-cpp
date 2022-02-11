#include<iostream>
#define MAX_STUDENT 100
using namespace std;
class student{
int roll,score;
char name[20];
public:
student(){
    roll=-1;
}
int getroll(){
    return roll;
}
void takedata(){
    cout<<"\n enter roll:";
    cin>>roll;
    cout<<"\n enter score:";
    cin>>score;
    cout<<"\ enter name:";
    cin.ignore();
    gets(name);
}
void showdata(){
    cout<<endl;
    cout<<"\n roll:"<<roll;
    cout<<"\n name:";
    fputs(name,stdout);
    cout<<"\n score:"<<score;
}
};
static int count=0;
student s[MAX_STUDENT];
int takestudent(){
if(count==MAX_STUDENT){
    cout<<"\n student no. exceeds\n";
    return 0;
}
s[count].takedata();
count++;
}
int viewdata(int x){
if(x>=MAX_STUDENT){
    cout<<"\n wrong input\n";
    return 0;
}
if(s[x].getroll()==-1){
    cout<<"\n this is empty position\n";
    return 0;
}
s[x].showdata();
}
int main(){
takestudent();
viewdata(0);
}
