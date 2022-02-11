#include<iostream>
#include<conio.h>
using namespace std;
class student{
int roll,score;
public:
   void getdata(){
   cout<<"enter roll no.:";
   cin>>roll;
   cout<<"enter score:";
   cin>>score;
   }
   void putdata(){
   cout<<"roll:"<<roll<<endl<<"score:"<<score;
   }
   void editroll();
   void editscore();
   void show();
};
void student::editroll(){
cout<<"\nenter new roll no.:";
cin>>roll;
}
void student::editscore(){
cout<<"\nenter new score:";
cin>>score;
}
void student::show(){
cout<<"roll:"<<roll<<endl<<"score:"<<score;
}
int main(){
student a,b;
a.getdata();
a.putdata();
a.editroll();
a.show();
a.editscore();
a.show();
}
