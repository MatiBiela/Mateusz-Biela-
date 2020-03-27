#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct film
{
	string tytul;
	string rezyser;
	double rok;
	double czasTrwaniaMinut;
};

int main(int argc, char** argv) {
	
	film t[5];
		for (int i=0; i<5; i++)
		{
			t[i].tytul="Szybcy i Wsciekli";
			t[i].rezyser="Rob Cohen";
			t[i].rok=2001;
			t[i].czasTrwaniaMinut=120;
		}
		{
		
		
			t[i].tytul="Szybcy i Wsciekli 2";
			t[i].rezyser="John Singleton";
			t[i].rok=2003;
			t[i].czasTrwaniaMinut=108;
		}
		{
		
			t[i].tytul="Szybcy i Wsciekli Tokio drift";
			t[i].rezyser="Justin Lin";
			t[i].rok=2006;
			t[i].czasTrwaniaMinut=105;
	}
	{
		
			t[i].tytul="Szybko i wsciekle";
			t[i].rezyser="Justin Lin";
			t[i].rok=2009;
			t[i].czasTrwaniaMinut=107;
	}
	{
			t[i].tytul="Szybcy i Wsciekli 5 ";
			t[i].rezyser="Justin Lin";
			t[i].rok=2011;
			t[i].czasTrwaniaMinut=132;
	
	}
		
		
	
		for (int i=0; i<5; i++)
		{
			cout<<t[i].tytul;
			cout<<t[i].	rezyser;
			cout<<t[i].rok;
			cout<<t[i].czasTrwaniaMinut;
			
		}
	
	
	
	return 0;
}
