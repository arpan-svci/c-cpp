#include<iostream>
using namespace std;

class integer{
private:
    int x;
public:
    void set_data(){
        cout<<"Enter value of integer";
        cin>>x;
    }
    void show_data(){
        cout<<"x="<<x<<endl;
    }
    integer operator ++(){
        integer temp;
        temp.x=++x;
        return(temp);
    }
    integer operator ++ (int){
        integer temp;
        temp.x=x++;
        return(temp);
    }
};

int main(){
    integer i1,i2;
    i1.set_data();
    cout<<"value of i1:\n";
    i1.show_data();
    i2=++i1;
    cout<<"value of i1:\n";
    i1.show_data();
    cout<<"value of i2:\n";
    i2.show_data();
    i2=i1++;
    cout<<"value of i1:\n";
    i1.show_data();
    cout<<"value of i2:\n";
    i2.show_data();
    return 0;
}
