/*Demonstation of the "this" pointer usage though overloaded assignment operators
to reduce memory usage.*/
#include <iostream>
using namespace std;

class MyClass {

	int data1;
	int data2;

public:

	MyClass(int data1, int data2) {
		this->data1 = data1;
		this->data2 = data2;
	}

	//Return by value
	MyClass operator = (MyClass c) {
		this->data1 = c.data1;
		this->data2 = c.data2;
		return MyClass(100, 200);
	}

	//Return by reference. Less memory usage.
	MyClass& operator = (MyClass& c) {
		this->data1 = c.data1;
		this->data2 = c.data2;
		return *this;
	}

	void Print() {
		cout << data1 << endl;
		cout << data2 << endl;
	}

};