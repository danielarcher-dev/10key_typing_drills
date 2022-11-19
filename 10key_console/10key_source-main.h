#include <iostream>
#include <fstream>


using namespace std;

//source-init.h
void loadData();
void test(char col[3][3], char row[3][3]);
// source-tests.h
void pCN();	// print col nums
void pAC(char AC[]);	// print available chars
void pList(char AC[]); // print numbered list of AC
void pTest01(char AC[]); // prints "1234567890.0987654321"
void pRand01(char AC[]); // random pattern
void pracSet(char set[82][3], int subset, int times);
// source-timings.h
int clock(int action, int start, int finish, int totalTime);

#include "10key_source-init.h"
#include "10key_source-tests.h"
#include "10key_source-timings.h"
