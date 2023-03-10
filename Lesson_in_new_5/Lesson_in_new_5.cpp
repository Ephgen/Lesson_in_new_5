
#include <iostream>
#include <Windows.h>

using namespace std;

template <typename T>
void display(string p, T& value) {
	cout << p;
	cin >> value;
	while (cin.fail()) {
		cin.clear(); // восстанавливает поток ввода после ошибки
		cin.ignore(32767, '\n');  // очищает буфер ввода

		cout << p;
		cin >> value;
	}
	cout << value;
}

template <class T>
class Demo {
	T _a;
	T _b;
public:
	Demo() {}
	Demo(T a, T b) {
		_a = a;
		_b = b;
	}

	void Add() {
		cout << _a << " " << _b << endl;

	}
};

int main()
{
	/*int number;
	display("Enter number: ", number);*/
	Demo <int> d{ 3,5 };
	d.Add();

	Demo<int*> d2{ new int[3]{1,2,3}, new int[3]{1,2,3} };
	d2.Add();
}


