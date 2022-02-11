#include<iostream>
#include<string.h>
#include<vector>
#include<iterator>
using namespace std;
class student{
int roll,score;
public:
char name[20];
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
    char* getname(){
        return(name);
    }
};
class studentlist{
vector<student>s1;
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
    void highest(){
        int s,r;
          vector<student>::iterator it;
          vector<student>::iterator ti;
          it=s1.begin();
          s=it->getscore();
        for(it=s1.begin();it!=s1.end();it++){
            if(it->getscore()>s){
                s=it->getscore();
                r=it->getroll();
            }
        }
        cout<<"\n highest scorer:";
        putstudent(r);
    }
  void findnamewithsubstring(){
         vector<student>::iterator it;
         char c;
         int i=0;
         cout<<"\n student with substring:";
        for(it=s1.begin();it!=s1.end();it++){
                c=it->name[0];
                i=0;
                while(c!=it->name[19]){
                    if(c==' '){
                        it->putdata();
                        break;
                    }
                    c=it->name[i];
                    i++;
                }
        }
    }
     void findnamewithoutsubstring(){
         vector<student>::iterator it;
         char c;
         int i=0,j=1;
         cout<<"\n student name without substring:";
        for(it=s1.begin();it!=s1.end();it++){
                c=it->name[0];
                i=0;
                j=1;
                while(c!=it->name[19]){
                    if(c==' '){
                        j=0;
                        break;
                    }
                    c=it->name[i];
                    i++;
                }
                if(j==1)
                    it->putdata();
        }
    }
};
int main(){
    int x;
    char c[20];
    studentlist a;
    a.addstudentlist();
    cout<<endl<<"enter roll no.:";
    cin>>x;
    a.putstudent(x);
    cout<<endl;
    a.findnamewithsubstring();
    cout<<endl;
    a.findnamewithoutsubstring();
    a.number();
    a.highest();
}
