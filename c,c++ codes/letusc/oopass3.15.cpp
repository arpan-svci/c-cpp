#include<iostream>
using namespace std;
class TRANSACTION{
char type;// w for withdrawal d for deposite
double amount;
int account_no;
public:
double transaction1(double x){
    cout<<"enter type of transaction(enter w for withdrawal and d for deposit):";
    cin>>type;
    cout<<"enter amount:";
    cin>>amount;
    if(type=='w'){
    if(x>=amount)
        return(x-amount);
    else
        cout<<"there is no available money";
        return x;
    }
    else
        return(x+amount);
}
 double getamount(){
    return(amount);
}
};
class BALANCE{
int account_no;
int year;
int month;
int day;
double balance;
public:
    void getdetails(){
        cout<<"account no.:";
        cin>>account_no;
        cout<<"last date:"<<endl;
        cout<<"day:";
        cin>>day;
        cout<<"month:";
        cin>>month;
        cout<<"year:";
        cin>>year;
        cout<<"account balance:";
        cin>>balance;
    }
    void transaction(){
        TRANSACTION a;
        balance=a.transaction1(balance);
        if(balance>=a.getamount()){
        cout<<"transaction date:"<<endl;
        cout<<"day:";
        cin>>day;
        cout<<"month:";
        cin>>month;
        cout<<"year";
        cin>>year;
        }
    }
    void putdetails(){
        cout<<endl<<"details:"<<endl;
        cout<<"account no.:"<<account_no<<endl;
        cout<<"last date:";
        cout<<day<<"/"<<month<<"/"<<year<<endl;
        cout<<"account balance:"<<balance<<endl<<endl;
    }
};
int main(){
BALANCE a;
a.getdetails();
a.putdetails();
a.transaction();
a.putdetails();
}
