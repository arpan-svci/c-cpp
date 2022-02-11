#include<iostream>
#include<conio.h>
using namespace std;
class APPLICANT{
static int id;
int idd;
char name[20];
int score;
public:
    void getdata(){
    id++;
    idd=id;
    cout<<"enter name:";
    cin.ignore();
    gets(name);
    cout<<"enter score:";
    cin>>score;
    }
    void putdata(){
    cout<<"applicant id:"<<idd<<endl<<"name:";
    fputs(name,stdout);
    cout<<endl;
    cout<<"score:"<<score<<endl;
    }
};
int APPLICANT::id=99;
int main(){
APPLICANT a,b;
a.getdata();
b.getdata();
b.putdata();
a.putdata();
}
