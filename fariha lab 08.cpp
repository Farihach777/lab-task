#include <iostream>
using namespace std;

int main()
{
	int num=2;
	while(num<=20)
	{

		int i=2;
		while(i<num && num%i !=0)
		{
		 i++;
		}
	
	if(i==num)
{
	cout<<num<<endl;
}
num++;
}
return 0;
}