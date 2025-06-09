#include <iostream>
using namespace std;
#ifndef STRING_H
#define STRING_H
class String
{
	char* data;
	int size;
	int getLength(const char* str)const;
	void stringCopy(char* dest, const char* src)const;
	bool isSameString(const char*, const char*)const;
	bool isValidIndex(const int index)const;
	bool isWideSpaceCharacter(char ch)const;
	void concatenate(char* dest, const char* src)const;
	int getPositionOfDecimalPoint()const;
	float getDecimalPart()const;
public:
	String();
    String(const char c);
	String(String&& r);
	String(const char* str);
	String(const String&);
	void input();
	void reverse();
	void shrink();
	void trimLeft();
	int getLength()const;
	int getSize()const;
	void display()const;
	int find(const String subStr, const int start = 0)const;
	void insert(const int index, const String& subStr);
	String right(const int count);
	String left(const int count);
	void remove(const int index, const int count = 1);
	void setNumber(const long long int num);
	int replace(const String& old, const String& newSubStr);
	void reSize(const int);
	void makeLower();
	int compare(const String& s2)const;
	String concatenate(const String& s2)const;
	char& at(const int index);
	long long int convertToInteger()const;
	float convertToFloat()const;
	void concatEqual(const String& s2);
	const char& at(const int index)const;
	int operator==(const String& s2)const;
	char& operator [](const int index);
	const char& operator[](const int index)const;
	void makeUpper();
	void operator+=(const String& s2);
	String& operator=(String&& s);
	String operator+(const String & s2)const;
	String& operator=(const long long int index);
	String& operator=(const double num);
	String& operator=(const String& s2);
	void trim();
	void trimRight();
	bool isEmpty()const;
	~String();
	bool operator!()const;
	explicit operator long long int()const;
	explicit operator double()const;
	explicit operator bool()const;
	String operator()(const String& delim);
	void removeInstances(int noOfStances, ...);
};
istream& operator>>(istream& x, String& ref);
ostream& operator<<(ostream& s, const String& ref);
#endif