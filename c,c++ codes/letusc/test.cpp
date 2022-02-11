#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string>
using namespace std;
class student{
    public:
        string name;
        int roll, year, age;
};

int main(){
student s[20];
int i,j;
cout<<"\n enter the no. of student whose details you want to insert:";
cin>>i;
for(j=0;j<i;j++){
    cout<<"\n enter details of students";
    cout<<"\n enter roll:";
    cin>>s[j].roll;
    cout<<"\n enter name:";
    getline(cin,s[j].name);
    cout<<s[j].name;
}
}
