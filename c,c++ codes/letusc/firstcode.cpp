#include<iostream>
#include<conio.h>
using namespace std;
 class student{
    public:
        static int roll,id;
        void changeroll(int a){
        roll=a;
        }
        void changeid(int b){
        id=b;
        }
        void showroll();
        void showid();
 };
 void student :: showid(){
 cout<<student::id;
 }
 void student :: showroll(){
 cout<<student::roll;
 }
 int student::id=500;
 int student::roll=4000;
int main(){
    student s1;
    s1.showid();
    cout<<endl;
    s1.showroll();
    }
