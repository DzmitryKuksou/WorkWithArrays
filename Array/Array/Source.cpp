#include<iostream>
#include "Array.h"

using namespace std;

int main()
{
	Array ar(12);
	ar.RandArray();
	cout << ar.FindMax() << endl;
	cout << ar.FindMin() << endl;
	cout << ar.BinSearch(49);
	return 0;
}