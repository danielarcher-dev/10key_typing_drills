#include <iostream>
#include <fstream>
using namespace std;

char	set[][3]={49,52,55,50,53,56,51,54,57,49,50,51,52,53,54,55,56,57,
		49,53,51,51,53,57,57,53,55,55,53,49,
		52,56,54,56,54,50,54,50,52,50,52,56,
		55,52,53,55,56,53,49,52,53,49,50,53,
		51,50,53,51,54,53,57,54,53,57,56,53,
		56,53,52,56,55,52,52,49,50,52,53,50,
		50,51,54,50,53,54,54,57,56,54,53,56,
		55,56,50,57,54,52,51,50,56,49,52,54,
		57,56,50,55,52,54,49,50,56,51,54,52,
		56,55,49,56,57,51,54,57,55,54,51,49,
		50,51,57,50,49,55,52,49,51,52,55,57,
		55,53,50,56,52,49,49,53,56,50,52,55,
		55,53,54,52,56,57,57,52,53,54,55,56,
		57,53,50,56,54,51,50,54,57,51,53,56,
		54,50,49,51,53,52,52,50,51,49,53,54,
		49,50,57,55,56,51,57,56,49,51,50,55,
		55,52,51,57,54,49,51,54,55,49,52,57,
		49,54,55,55,50,57,57,52,51,51,56,49,
		49,54,56,55,50,54,57,52,50,51,52,56,
		49,51,57,49,55,57,55,57,51,55,49,51,
		49,53,57,55,53,51 };
int	i(0);
int	j(0);
int	k(0);
int	subset(0);
int	times(0); // times to repeat sets
int	startTime(0);
int	finishTime(0);
int	totalTime(0);

	char	AC[]={48,49,50,51,52,53,54,55,56,57,61,32, 42,43,45,47,46,44}; // available chars
	char	IC[20];	// input collection

	char	test4='n';
	char	test01='y';
	char	test02='y';
	char	test03='y';
	char	test5='y';

void loadData()
{
	srand (time(NULL)); // initialize random seed

// test
// test(col,row);
return;
}
void test(char col[3][3], char row[3][3])
{
for (i=0;i<3;i++)
{ for (j=0;j<3;j++)
{	cout << "col[" << i << "][" << j << "] = " << col[i][j] << "   ";
	cout << "row[" << i << "][" << j << "] = " << row[i][j] << endl; } }
return;
}
