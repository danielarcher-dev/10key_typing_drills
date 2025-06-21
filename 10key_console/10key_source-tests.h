#include <iostream>
#include <fstream>
using namespace std;

void pCN()
{	for(int x(0);x<10;x++)
	{	cout << x << " "; }
return;
}
void pAC(char AC[])
{	for(int x(0);x<20;x++)
	{	cout << AC[x] << " "; }
return;
}
void pTest01(char AC[])
{/*	for(int i(1);i<10;i++)
	{	cout <<	AC[i]; }
	cout << AC[0];
	cout << AC[16];
	cout << AC[0];
	for(int i(9);i>0;i--)
	{	cout <<	AC[i]; }
	cout << endl;
*/	cout << "1234567890.0987654321\n";
return;
}
void pList(char AC[])
{	pCN(); pCN(); cout << endl; pAC(AC);
return;
}
void pRand01(char AC[])
{	for (i=0;i<4;i++)
	{	for (j=0;j<3;j++)
	{	cout << rand()%10; }
		cout << AC[16]; }
		cout << AC[rand()%4+12];
		cout << endl;
return;
}
void pracSet(char set[82][3], int subset, int times)
{
	for (int x(0);x<times;x++)
	{ for (i=0;i<3;i++)
	  { for (int j=0;j<3;j++)
	    {	cout << set[subset][rand()%3];
	    }	cout << AC[16];
	  }	cout << endl;
		cin.width(BUFFER_SIZE);
		cin >> IC;
	}

return;
}
