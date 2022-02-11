#include<iostream>
using namespace std;

class contractual{
public:
    double allounce;
double salary(double x){
    getallounce();
    return(x+allounce);
}
void getallounce(){
    cout<<"enter allounce :";
    cin>>allounce;
}
};

class permanent{
    public:
    double salary(double x){
        return(x+1.1*x);
    }
};

class employ{

    double basicpay;
    int id;
    char name[20];
    char designation[30];
    int type;
    double salary;
public:
void getsalary(){
if(type==0){
    contractual p;
    salary=p.salary(basicpay);
}
else{
    permanent p;
    salary=p.salary(basicpay);
}
}

void getdata(){
cout<<"employ id:";
cin>> id;
cout<<"name:";
cin.ignore();
gets(name);
cout<<"designation:";
gets(designation);
cout<<"basic pay:";
cin>>basicpay;
cout<<"enter type(for contractual type 0 else anything):";
cin>>type;
getsalary();
}
void putdata(){
cout<<endl<<"employ details:"<<endl;
cout<<"employ id:"<<id<<endl;
cout<<"name:";
fputs(name,stdout);
cout<<endl;
cout<<"designation:";
fputs(designation,stdout);
cout<<endl;
if(type==0)
    cout<<"type:contractual"<<endl;
else
    cout<<"type:permanent"<<endl;
cout<<"salary:"<<salary<<endl;
}
};
int main(){
    employ a[10];
    a[0].getdata();
    a[0].putdata();
}

