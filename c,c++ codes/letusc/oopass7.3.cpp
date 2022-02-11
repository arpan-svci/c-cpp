#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
class student{
int roll;
char name[20];
int score;
public:
    int getscore(){
        return score;
    }
    void getdata(){
        cout<<"\n roll:";
        cin>>roll;
        cout<<" name:";
        cin.ignore();
        gets(name);
        cout<<" score:";
        cin>>score;
    }
    void putdata(){
        cout<<"\n roll:"<<roll;
        cout<<"\n name:";
        fputs(name,stdout);
        cout<<"\n score:"<<score;
    }
    int getroll(){
        return roll;
    }
};
class studentlist{
vector<student>s1;
vector<int>r;
int i;
public:
    void number(){
        cout<<"\n no. of element:"<<s1.size();
    }
    void addstudent(){
        student s;
        s.getdata();
        s1.push_back(s);
    }
    void addstudentlist(){
        int x;
        cout<<"\n enter no. of student want to isert:";
        cin>>x;
        int i=0;
        while(i<x){
            addstudent();
            i++;
        }
    }
    void putstudent(int x){
       vector<student>::iterator it;
        for(it=s1.begin();it!=s1.end();it++){
            if(it->getroll()==x){
                it->putdata();
            }
        }
    }
    void addstudentat(){
        cout<<"\n enter roll no.";
        cin>>i;
        r.push_back(i);
    }
    void addstudentmore(){
        int a;
        cout<<"\n enter no. of student want to add to list:";
        cin>>a;
        for(int i=0;i<a;i++){
            addstudentat();
        }
    }
    void getresult(int x){
        int i=0;
        vector<student>::iterator it;
        for(it=s1.begin();it!=s1.end();it++){
            if(it->getroll()==x){
                it->putdata();
                i++;
            }
        }
        if(i==0)
        cout<<"\n this roll no. is not present:";
    }
    void getresultlist(){
        int j;
        vector<int>::iterator it1;
        for(it1=r.begin();it1!=r.end();it1++){
            j=*it1;
            getresult(j);
            }
        }
};

int main(){
studentlist a;
a.addstudentlist();
a.addstudentmore();
a.getresultlist();
}
