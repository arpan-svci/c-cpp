#include<iostream>
using namespace std;
template<typename T>class arraylist{
    int element;
    public:
arraylist(int x){
    element=x;
}
    private:
    T *p=new T[element];
    public:
    void getelement(){
        for(int i=0;i<element;i++){
            cout<<"\nelement"<<i+1<<":";
            cin>>p[i];
        }
    }
    void getlist(){
        for(int j=0;j<element;j++)
            cout<<"\t"<<p[j];
    }
    T getmax(){
        T maximum=p[0];
        for(int i=1;i<element;i++){
           if(p[i]>maximum){
                maximum=p[i];
           }
        }
        return maximum;
    }
    T sum(){
        T s=0;
        for(int i=0;i<element;i++){
            s=s+p[i];
        }
        return s;
    }
};
int main(){
arraylist<float> a(6);
    a.getelement();
    a.getlist();
    cout<<"\n"<<a.getmax();
    cout<<"\n"<<a.sum();
}
