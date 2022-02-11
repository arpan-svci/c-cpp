#include<iostream>
#include<conio.h>
#define MAX_ITEM 100
using namespace std;
class customer;
class discount;

class item{
char name[20];
int itemcode;  //itemcode must be unique
int price;
public:
    int getitemcode(){
       return itemcode;
    }
    void getname(){
        cout<<"\n name of the item:";
        cin.ignore();
        gets(name);
    }
    void getitemcode(int x){
        itemcode=x;
    }
    int getprice(){
        cout<<"\n product price:";
        cin>>price;
    }
    int putprice(){
        return price;
    }
    void putdata(){
        cout<<"\n name of item:"<<name;
        cout<<"\n item code:"<<itemcode;
        cout<<"\n price:"<<price;
    }
};

class itemlist{
item it[MAX_ITEM];
int number;
int count;
public:
    void getitemlist(){
        int code,s=0;
        cout<<"\n no.of item want to add:";
        cin>>number;
        for(int i=0;i<number;i++){
            cout<<"\n enter item"<<i+1<<":";
            cout<<"\n enter unique item code:";
            cin>>code;
            for(int j=0;j<count;j++){
                if(code==it[j].getitemcode())
                    s++;
                }
                if(s==0){
                    it[i].getitemcode(code);
                    it[i].getname();
                    it[i].getprice();
                    count++;
                }
                else{
                    cout<<"\n item already exist";
                    i--;
                    s=0;
                }
        }
    }
    int getnumber(){
        return number;
    }
    void printitemlist(){
        cout<<"no. of item present="<<number;
        for(int i=0;i<number;i++){
            cout<<endl;
            it[i].putdata();
        }
    }
    friend float sub(itemlist,customer);

};

class discount{//to get discount for privilege person
int special_discount;
public:
    friend float total(customer,discount);
    void getdiscountrate(){
        cout<<"\n discount for privilege customers: ";
        cin>>special_discount;
    }
};

class product{
public:
int code;
int quantity;
};

class customer{
int type;//1 for normal 2 for privileges
float totalamount;
float subtotalamount;
public:
    void putsubtotalamount(){
        cout<<endl<<subtotalamount;
    }
    void getsubtotalamount(float x){
        subtotalamount=x;
    }
     void puttotalamount(){
        cout<<endl<<totalamount;
    }
    void gettotalamount(float x){
        totalamount=x;
    }
    product product[100];
    int k;
    void puttype(){
        cout<<"\n enter 1 for normal and enter 2 for privilege customer:";
        cin>>type;
    }
    int gettype(){
        return type;
    }

  friend float sub(itemlist,customer);
  friend float total(customer,discount);
    void bill(){
        cout<<"\n how many items customer want to buy:";
        cin>>k;
        for(int i=0;i<k;i++){
            cout<<"\n item code:";
            cin>>product[i].code;
            cout<<"\n quantity:";
            cin>>product[i].quantity;
        }
    }
};

float sub(itemlist a,customer b){//to get subtotal amount
    float amount=0,s=0;
    for(int i=0;i<b.k;i++){
            s=0;
            for(int j=0;j<a.number;j++){
                if(b.product[i].code==a.it[j].getitemcode()){
                    amount=amount+b.product[i].quantity*a.it[j].putprice();
                    s++;
                    break;
                }
                if(s!=0){
                    cout<<"\n item is not present in list";
                }
            }
    }
   b.getsubtotalamount(amount);
   cout<<"\n subtotal amount="<<b.subtotalamount;
   return amount;
}

float total(customer a,discount b){//to get total amount after discount
    int x;
    float y;
    if(a.type==2){
      x=b.special_discount;
      y=a.subtotalamount*((100-x)*0.01);
    }
    else{
        y=a.subtotalamount;
    }
    cout<<"\n total amount:"<<y;
    return y;
}

int main(){
float k;
float l;
discount o;
itemlist a;
customer b;
o.getdiscountrate();
a.getitemlist();
a.printitemlist();
b.puttype();
b.bill();
k=sub(a,b);
b.getsubtotalamount(k);
l=total(b,o);
b.gettotalamount(l);
}
