#include<iostream>
using namespace std;

struct book{
    int book_id;
    float price;
    char name[20];

    void input(){
        cout<<"Enter book id, price and name of the book"<<endl;
        cin>>book_id>>price>>name;
    }

    void display(){
        cout<<"Book id is: "<<book_id<<"\n"<<"Price is: "<<price<<"\n"<<"Name is: "<<name;
    }
};

int main(){
    book b1;
    b1.input();
    b1.display();
    return 0;
}
