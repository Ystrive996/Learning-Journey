#ifndef INTEGERSET_H
#define INTEGERSET_H

class IntegerSet
{
public:
	IntegerSet(int* = nullptr);
	IntegerSet(int*, int);
	void input();
	IntegerSet unionOfSets(IntegerSet&);
	IntegerSet intersectionOfSets(IntegerSet&);
	void insertElement(int );
	void deleteElement(int);
	void printSet();
	bool isEqualTo(IntegerSet&);
	bool validEntry(int );
	private:
		int set[101];
};
#endif