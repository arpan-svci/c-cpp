#include<iostream>
using namespace std;

struct book{
    private:
        int book_id;
        float price;
        char name[20];
    public:
        void input(){
            cout<<"Enter book id, price and name of the book"<<endl;
            cin>>book_id>>price>>name;
            if(book_id<0)
                book_id= -book_id;
        }

        void display(){
            cout<<book_id<<" "<<price<<" "<<name;
        }
};

int main(){
    book b1;
    b1.input();
    b1.display();
    return 0;
}
