#include <iostream>
#include <fstream>
using namespace std;

long clock(long action, long startTime, long finishTime, long totalTime)
{	if (action==0)
	{	startTime=(unsigned int)time(NULL); }
	if (action==1)
	{	finishTime=(unsigned int)time(NULL);
		totalTime=finishTime-startTime; }
return(totalTime);
}
