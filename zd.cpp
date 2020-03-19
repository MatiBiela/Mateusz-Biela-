#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int t[521];
int main(int argc, char** argv) {
	
	
	
	
	for (int i=0; i<1041; i+=2)
	{	
		t[i]=i;
	}
	for (int i=0; i<1041; i+=2)
		{
		cout<<t[i]<<" ";
		}
	
	
		
	cout<<"\n";	
	cout<<"\n";	
	cout<<"\n";	

		

	
		
	
	for (int i=1040; i>0; i-=2)
	{
		t[i]=i;
		t[0]=0;
	
	}
	for (int i=1040; i>0; i-=2)
		{
		cout<<t[i]<<",";
		}
		
		

	
	
	

	
		
		


	return 0;
}
