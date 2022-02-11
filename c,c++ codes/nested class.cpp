#include<iostream>
#include<string.h>
using namespace std;

class student{
private:
    char name[50];
    int roll_no;
    int age;
    class address{
    private:
        int house_no;
        char city[20];
        char pin[10];
        char street[20];
    public:
        void set_address(int h,char c[],char p[],char s[]){
            house_no=h;
            strcpy(city,c);
            strcpy(pin,p);
            strcpy(street,s);
        }
        void show_address(){
            cout<<"house no: "<<house_no<<endl;
            cout<<"city name: "<<city<<endl;
            cout<<"pin no: "<<pin<<endl;
            cout<<"street name: "<<street<<endl;
        }
    };
    address add;
public:
    void set_name(){
        cout<<"Enter name: ";
        cin>>name;
    }
    void set_roll_no(){
        cout<<"Enter roll no: ";
        cin>>roll_no;
    }
     void set_age(){
        cout<<"Enter age: ";
        cin>>age;
    }
    void set_add(){
        int h;
        char c[20];
        char p[10];
        char s[20];
        cout<<"Enter house no: ";
        cin>>h;
        cout<<"Enter city name: ";
        cin>>c;
        cout<<"Enter pin no: ";
        cin>>p;
        cout<<"Enter street name: ";
        cin>>s;
        add.set_address(h,c,p,s);
    }
    void show_name(){
    cout<<"name: "<<name<<endl;
    }
    void show_roll_no(){
    cout<<"roll no: "<<roll_no<<endl;
    }
    void show_age(){
    cout<<"age: "<<age<<endl;
    }
    void show_add(){
        add.show_address();
    }
};

int main(){
    student s;
    s.set_name();
    s.set_roll_no();
    s.set_age();
    s.set_add();
    cout<<"\n***STUDENT DETAILS***"<<endl;
    s.show_name();
    s.show_roll_no();
    s.show_age();
    s.show_add();
    return 0;
}
