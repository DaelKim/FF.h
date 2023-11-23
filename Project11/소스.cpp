#include <iostream>
using namespace std;
class animal {
public:
	animal() : nLegs(2) {
		std::cout << nLegs << " Animal \n";
	};
	int nLegs;
	void eat() { std::cout << " I eat \n"; }
};
using namespace std;
class bird : public animal {
public:
	bird() : nWings(2) { };
	int nWings;
	void fly() { cout << " I fly \n"; }
};
class human : public animal {
public:
	human() { nArms = 2; };
	int nArms;
	void walk() { std::cout << " I walk \n"; }
};
class fish : public animal {
public:
	fish() { nFin = 1; }
	int nFin;
	void swim() { std::cout << nLegs << " "  << nFin; }
};
int main() {
	animal a;
	fish b;
	a.eat();
	b.swim();
	return 123;
}