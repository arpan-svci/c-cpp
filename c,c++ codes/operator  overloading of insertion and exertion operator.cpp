#include<iostream>
#include<string>
using namespace std;

class person{
private:
    string name;
    int age;
public:
    friend &operator>>(istream &input,person &p);
    friend &operator<<(ostream &output,person &p);
};
&operator>>(istream &input,person &p){
    cout<<"enter person's name: ";
    input>>p.name;
    cout<<"enter person's age: ";
    input>>p.age;
}
&operator<<(ostream &output,person &p){
    cout<<"person's name is: ";
    output<<p.name<<endl;
    cout<<"person's age is: ";
    output<<p.age<<endl;
}
int main(){
    person p1;
    cin>>p1;
    cout<<p1;
}
