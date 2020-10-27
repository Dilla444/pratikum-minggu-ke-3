#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	cout<<"MENGHITUNG JUMLAH DERET BILANGAN\n";
	cout<<"       -NAMA : DILLA SAFIRA-\n";
	cout<<"       -NIM  : 20051397072-\n";
	cout<<"       -KELAS : 2020B-\n ";
	cout<<"\n";
	cout<<"===================================\n";	
	
	int x[10] =    {1,2,3,4,5,6,7,8,9,10};
	int y[10] =    {1,2,3,4,5,6,7,8,9,10};
	int da = 0, DA = 1;
	char ascii;
	
	endl(cout);
	cout<<"X/Y";
	for(int X=1; X<11; ++X)
	{
		cout<<" "<<X<<" ";
	}
	endl(cout);
	endl(cout);
	//tampilkan garis di mulai disini while(da<65)
	{
		cout<<(char)196;
		da++;
	}
	//garis berakhir disini 
	endl(cout);
	
	for(int a=0; a<10; a++)
	{ endl(cout);
	cout<<x[a]<<setw(sizeof(x[a]))<<(char)179;
	for(int b=0; b<10; b++)
	{
		cout<<setw(6)<<x[a]*y[b];
	}
	endl(cout);
	}
	endl(cout);
	
	
	system ("pause");
}	
