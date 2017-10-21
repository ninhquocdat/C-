#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
class Lophoclaptrinh {
private:
	string name;
public:

	void setName(string name1) {
		name = name1;
	}
	//constructer
	Lophoclaptrinh() {
		name = "ham khoi tao khong tham so";
	}
	Lophoclaptrinh(string s) {
		cout<<s<<"\n";
	}
		string getName() {
			return name;
		}
		void LophoclaptrinhCPlusPlus() {
			cout << "Wellcome to C++";
		}
};
int main() {
	Lophoclaptrinh lophoclaptrinh;
	cout << lophoclaptrinh.getName() << endl;
	Lophoclaptrinh lophoclaptrinh2("Ham khoi tao co tham so");
	lophoclaptrinh.setName("Ham seter and geter");
	cout<<lophoclaptrinh.getName()<<endl;
	lophoclaptrinh.LophoclaptrinhCPlusPlus();
	_getch();
	return 0;
}

