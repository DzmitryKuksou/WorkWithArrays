#pragma once
#ifndef Array_h
#define Array_h

#include <stdio.h>

const int M = 256;
typedef int(*Comparer)(int, int);

class Array
{
public:
	Array(int = M);
	Array(int*, int);
	void RandArray();
	void EnterArray(int*);
	void DisplayArray();
	bool Equals(Array);
	int GetSize() const;
	void BubbleSort(Comparer);
	void QuickSort(int, int, Comparer);
	void ShakerSort(Comparer);
	void ChoiceSort(Comparer);
	void QuickSort(Comparer);
	int BinSearch(int x);
	int CompareTo(Array);
	int GetByIndex(int) const;
	void SetByIndex(int, int);
	int FindMin();
	int FindMax();
	~Array();
private:
	int* a;
	int size;
	void SetSize(int);
	int* AllocMemory(int);
	void Swap(int&, int&);
};
int AbsComparerIncrease(int, int);
int AbsComparerDecrease(int, int);
int ComparerIncrease(int, int);
int ComparerDecrease(int, int);
#endif /* Array_h */