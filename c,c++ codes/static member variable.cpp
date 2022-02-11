#include<iostream>
using namespace std;

class account{
    private:
        int balance;
        static int roi;
    public:
   /* void set_balance(int b){
        balance=b;
    }
    static void set_roi(float r){ //static member function
        roi=r;
    }*/
    void show_data(){
        cout<<"roi="<<roi;
    }
};
//float account:: roi;//defining static member variable

int main(){
    account a1;
    //account::set_roi(2.5);
    a1.show_data();
    account a2;
    a2.show_data();
    return 0;
}
