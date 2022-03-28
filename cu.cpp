#include<iostream>
using namespace std;
char f(int sayi){
	if(sayi>84){
		return 'A';
	}
	else if (sayi>69 && sayi<85)
	{
		return 'B';
	}
	else if(sayi>=50 && sayi<70){
		return 'C';
	}
	else if(sayi<49){
		return 'D';
	}
	return '?';

}


int main()
{
	int u;
	cout<<"sınav notunu gir: "<<endl;
	cin>>u;
	switch(f(u))
	{
		case 'A': cout<<"Muhteşemmmmmm :D"<<endl;
		break;

		case 'B': cout<<"Harika:DDDDD"<<endl;
		break;

		case 'C': cout<<"dersi geçtiniz"<<endl;
		break;

		case 'D': cout<<"kaldın :)"<<endl;
		break;

	}

	
	return 0;
}
