#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
class student{
    public:
        char name[20];
        int roll, year, age;
};
student s[20];
void detailsbyroll(int k){
    int i=0,roll;
    cout<<"\n enter the roll no. of student whose details you want to know:";
    cin>>roll;
    for( i=0;i<=k;i++){
        if(s[i].roll==roll){
            break;
        }
    }
    if(i==k){
        cout<<"\n roll no. is not present\n";
        return;
    }
    else{
        cout<<"\n name is        :"<<s[i].name;
        cout<<"\n age is         :"<<s[i].age;
        cout<<"\n year of joining:"<<s[i].year;
    }

}

int main(){
int i,j,roll;
cout<<"\n enter the no. of student whose details you want to insert:";
cin>>i;
if(i>100){
    return 0;
}
for(j=0;j<i;j++){
    cout<<"\n enter details of "<<j+1<<"th students";
    cout<<"\n enter roll:";
    cin>>s[j].roll;
    cin.ignore();
    cout<<"\n enter name:";
    gets(s[j].name);
    cout<<"\n enter year of joining:";
    cin>>s[j].year;
    cout<<"\n enter age of student:";
    cin>>s[j].age;
}
detailsbyroll(i);
}

