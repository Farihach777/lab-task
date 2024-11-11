#include<iostream>
using namespace std;
int main()
{
	int GPA;
	int choice;
	cout<<"welcome to the scholarship Menu";
	cout<<"1.performance scholarship(GPA>=3.5)";
	cout<<"2.amal scholarship(GPA>=3.1 and<3.5)";
	cout<<"3.mumtaz scholarship(GPA>=3.3 and<3.5";
	cout<<"4.no scholarship";
	cout<<"enter your choice(1-4)";
	cin>>choice;
	cout<<"enter gpa"<<endl;
	cin>>GPA;
	switch(choice)
	{
		case 1:
			if(GPA>=3.5)
			{
		cout<<"performance scholarship"<<endl;
	}
	else
	{
		cout<<"not eligible"<<endl;
	}
		break;
		case 2:
			if(GPA>=3.1 and GPA <=3.5)
			{
		cout<<"amal scholarship"<<endl;
	}
	else
	{
	cout<<"not eligilbe"<<endl;
}
		break;
		case 3:
			if(3.5>GPA>=3.3)
			{
		cout<<"mumtaz scholarship"<<endl;
	}
	else
	{
		cout<<"no scholarship"<<endl;
	}
		break;
		default:
			cout<<"no scholarship"<<endl;
	}
	return 0;
}