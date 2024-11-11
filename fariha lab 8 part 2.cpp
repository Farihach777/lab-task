#include<iostream>
using namespace std;
int main()
{
 int entryFee=10;
 int snackCost=5;
 int num,totalcost;
 string name[30];
 cout<<"enterr the num of students(max 15): ";
 cin>>num;
 if(num<15)
 	for(int i=1;i<=num;i++)
 	{
 		cout<<"enter name"<<i<<":";
 		cin>>name[i];
 		int cost=entryFee+snackCost;
 		totalcost=totalcost+cost;
 		cout<<name[i]<<" :entryfee= $"<<entryFee <<" : snaclCost+ $"<<snackCost<<" :Totalcost= $"<<cost<<endl;
	 }
	 cout<<"Name of students are :"<<endl;
	 for(int j=1;j<=num;j++)
	 {
	 	cout<<"total cost is: $"<<totalcost<<endl;
	 }
 
 {
 	cout<<"Error: Not more users allowed ."<<endl;
 }
 return 0;
}