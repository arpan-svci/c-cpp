#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,int> m;
	map<int,int>::iterator p;
	int i,n,roll,score,temp;
	cout<<"\n enter the number of students: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nenter roll: ";
		cin>>roll;
		cout<<"enter score: ";
		cin>>score;
		m.insert(pair<int,int>(roll,score));
    }
	while(1)
	{
		cout<<"Enter 1 to retrieve score or other number to end: ";
		cin>>n;
		//system("cls");
		if(n==1)
		{
			cout<<"enter roll: ";
			cin>>temp;
			p=m.find(temp);
			if(p!=m.end())
			cout<<"Roll - "<<p->first<<" ,Score - "<<p->second<<endl;
			else
			cout<<"Entered roll number doesn't exist\n";
		}
		else
		exit(0);
	}
	return 0;
}
