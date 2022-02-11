
#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Student{
    public:
    int roll;
    string name;
    Student* next;
    vector<int> sb1;
};

class StuList{
    private:
    Student* head;
    public:
    StuList(){
        head = NULL;
    }

    bool checkUnique(int x){
        Student *temp1;
        temp1= head;
        while(temp1!=NULL){
            if(temp1->roll==x)
            return false;
            temp1=temp1->next;
        }
        return true;
    }

    void push(int x,string y){
        Student *temp = new Student;
        temp->roll = x;
        temp->name = y;
        temp ->next = NULL;
        if(!checkUnique(x))
        {
            cout<<"Roll Number not unique\n";
            return;
        }
        else{
            if(head == NULL)
            head = temp;
            else{
                Student *temp1;
                temp1= head;
                while(temp1->next!=NULL)
                temp1=temp1->next;
                temp1->next = temp;
            }
        }
    }

    void display(){
        Student *temp1;
        temp1= head;
        while(temp1!=NULL){
            cout<<"Roll No : "<<temp1->roll<<" Name: "<<temp1->name<<endl;
            temp1=temp1->next;
        }
    }

    void add(int rll,int code){
        Student *temp1;
        temp1= head;
        while(temp1!=NULL){
            if(temp1->roll==rll)
            break;
            temp1=temp1->next;
        }
        temp1->sb1.push_back(code);
    }

    vector<int> disSub(int rll){
        Student *temp1;
        temp1= head;
        while(temp1!=NULL){
            if(temp1->roll==rll)
            break;
            temp1=temp1->next;
        }
        return temp1->sb1;
    }
    void display(int rll){
        Student *temp1;
        temp1= head;
        while(temp1!=NULL){
            if(temp1->roll==rll){
                cout<<"Roll No : "<<temp1->roll<<" Name: "<<temp1->name<<endl;
                break;
            }
            temp1=temp1->next;
        }
    }
};

class Subject{
    public:
    int code;
    string name;
    Subject* next;
    vector<int> sl1;
};

class SubList{
    private:
    Subject* head;
    public:
    SubList(){
        head = NULL;
    }
    void push(int x,string y){
        Subject *temp = new Subject;
        temp->code = x;
        temp->name = y;
        temp ->next = NULL;
        if(head == NULL)
        head = temp;
        else{
            Subject *temp1;
            temp1= head;
            while(temp1->next!=NULL)
            temp1=temp1->next;
            temp1->next = temp;
        }
    }

    void display(){
        Subject *temp1;
        temp1= head;
        while(temp1!=NULL){
            cout<<"Code No : "<<temp1->code<<" Name: "<<temp1->name<<endl;
            temp1=temp1->next;
        }
    }
    void display(int cde){
        Subject *temp1;
        temp1= head;
        while(temp1!=NULL){
            if(temp1->code==cde){
                cout<<"Code No : "<<temp1->code<<" Name: "<<temp1->name<<endl;
                break;
            }

            temp1=temp1->next;
        }
    }

    void add(int cde, int roll){
        Subject *temp1;
        temp1= head;
        while(temp1!=NULL){
            if(temp1->code==cde)
            break;
            temp1=temp1->next;
        }
        temp1->sl1.push_back(roll);
    }

    vector<int> disStu(int cde){
        Subject *temp1;
        temp1= head;
        while(temp1!=NULL){
            if(temp1->code==cde)
            break;
            temp1=temp1->next;
        }
        return temp1->sl1;
    }
};





int main(){
    StuList a;
    SubList b;
    for(;;){
        cout<<"Enter : \n1. To add subject\n2. To add student\n3. To assign subject to a particular student\n4. To show all students for a particular subject\n5. To show all subjects of a particular student\n6. Exit\n";
        int c;
        cin>>c;
        switch(c){
            case 1:{
                cout<<"Enter subject code and name\n";
                int x;
                string y;
                cin>>x>>y;
                b.push(x,y);
                break;
            }
            case 2:{
                cout<<"Enter student roll and name\n";
                int x;
                string y;
                cin>>x>>y;
                a.push(x,y);
                break;
            }
            case 3:{
                cout<<"Available subjects: \n";
                b.display();
                cout<<"Enter student roll and subject code \n";
                int x,y;
                cin>>x>>y;
                a.add(x,y);
                b.add(y,x);
                break;
            }
            case 4:{
                cout<<"Enter subject code \n";
                int x;
                cin>>x;
                vector<int> l(b.disStu(x));
                cout<<"Student list is: \n";
                for (auto int i = 0; i<l.size(); ++i)
                a.display(l[i]);
                break;
            }
            case 5:{
                cout<<"Enter student roll \n";
                int x;
                cin>>x;
                vector<int> p(a.disSub(x));
                cout<<"Subject list is: \n";
                for (auto int j = 0; j<p.size(); ++j)
                b.display(p[j]);
                break;
            }
            case 6:{
                cout<<"Exiting ...";
                exit(0);
                break;
            }
            default:{
                cout<<"Wring Input";
                break;
            }
        }
    }
    return 0;
}
