#include<iostream>
using namespace std;
class admission{
    public:
int year;
int month;
int day;
admission(){
year=0;
month=0;
day=0;
}
};
class   STUDENT{
    static int number;
    int roll,count=0,q=0,p=0;
    char name[30];
    char course[20];
    int s[5];
    admission date;
    public:
        int getdata(){
            if(p==0){
                cout<<"name of student:";
                fflush(stdin);
                gets(name);
                cout<<"\nroll of the student:";
                cin>>roll;
                cout<<"\nenter course:";
                fflush(stdin);
                gets(course);
                p=1;
            }
            else
                cout<<"taken admission";
        }
        void addm(){
            //int x;
            //cout<<"\nif student dont take admission then enter 0 else any no.:";
            //cin>>x;
            if(count==0&&p==1){
                count=1;
                cout<<"\nenter admission year:";
                cin>>date.year;
                cout<<"\nenter admission month:";
                cin>>date.month;
                cout<<"\n admission day:";
                cin>>date.day;
            }
            else{
                cout<<"\ndont take admission or taken admission\n";
            }
        }
        void getmarks(){
            if(count==1&&q==0){
                for(int i=0;i<5;i++){
                    cout<<"enter marks of subject no."<<i+1<<":";
                    cin>>s[i];
                }
            q=1;
            }
            else
                cout<<endl<<"dont take admission or marks are taken"<<endl;
        }
        void marksheet(){
            if(q==1){
                cout<<endl;
                cout<<"name=";
                fputs(name,stdout);
                cout<<endl<<"course:";
                fputs(course,stdout);
                cout<<endl<<"roll="<<roll<<endl;
                cout<<"marks:";
                for(int i=0;i<5;i++){
                    cout<<"subject"<<i+1<<":";
                    cout<<s[i];
                    cout<<endl;
                }
                number++;
            }
            else
                cout<<endl<<"dont take admission"<<endl;
        }
        int no(){
            cout<<endl<<"total no. of person taken admission:"<<number<<endl;
        }
};
int STUDENT::number=0;
int main(){
STUDENT s1,s2,s3;
s1.getdata();
s1.addm();
s1.getmarks();
s1.marksheet();
s1.addm();
s1.getmarks();
s1.no();
s2.getdata();
s2.addm();
s2.getmarks();
s2.marksheet();
s2.getdata();
s2.getmarks();
s2.marksheet();
s2.no();

}
