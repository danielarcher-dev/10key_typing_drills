#include <iostream>
#include <fstream>
using namespace std;

int clock(int action, int startTime, int finishTime, int totalTime)
{	if (action==0)
	{	startTime=time(NULL); }
	if (action==1)
	{	finishTime=time(NULL);
		totalTime=finishTime-startTime; }
return(totalTime);
}
