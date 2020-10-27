//menghitung deret
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a=0, b, c, jumlah=0, i, n;
	cout<<"MENGHITUNG JUMLAH DERET BILANGAN\n";
	cout<<"-NAMA : DILLA SAFIRA-\n";
	cout<<"-NIM  : 20051397072-\n";
	cout<<"-KELAS : 2020B-\n ";
	cout<<"\n";
	cout<<"===================================\n";
	cout<<"masukkan bilangan awal : ";
	cin>>a;
	cout<<"masukkab beda : ";
	cin>>b;
	cout<<"masukkan bilangan akhir : ";
	cin>>n;
	cout<<"====================================\n";
	cout<<"\n";
	cout<<"deret"<<n<<":";
	cout<<a<<",";
	jumlah = jumlah+a;
	
	for(i=0; i<n-1; i++)
	
	{
		c = a+b;
		a=c;
		cout<<c<<",";
	}
	cout<<"\n";
	cout<<"jumlah"<<n<<":";
	cout<<jumlah;
	getch();
	return 0;
}
