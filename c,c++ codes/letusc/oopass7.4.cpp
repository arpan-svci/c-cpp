#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
class student{
int roll;
int score;
public:
    int getscore(){
        return score;
    }
    void getdata(){
        cout<<"\n roll:";
        cin>>roll;
        cout<<" score:";
        cin>>score;
    }
    void putdata(){
        cout<<"\n roll:"<<roll;
        cout<<"\n score:"<<score;
    }
    int getroll(){
        return roll;
    }
};
class studentlist{
vector<student>s1;
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
    void decendingscore(){
        for(int i=0;i<(s1.size())-1;i++){
            for(int j=0;j<(s1.size())-1;j++){
                if(s1[j].getscore()<s1[j+1].getscore()){
                    student k;
                    k=s1[j];
                    s1[j]=s1[j+1];
                    s1[j+1]=k;
                }
            }
        }
    }
    void getlist(){
        for(int i=0;i<s1.size();i++){
            s1[i].putdata();
        }
    }
};
int main(){
studentlist a;
a.addstudentlist();
a.decendingscore();
a.getlist();
}
