#include <iostream>
#include <conio.h>
#include "Evaporator.h"
using namespace std;

class Splash_ {
public:
	virtual void Splash() = 0;
};

class Evaporator_Splash : public Splash_ {
	void Splash() override {
		cout << "goo was splashed\nits very hot\nuh(\n";
	}
};

class User {
public:
	void Splash(Splash_* evaporator) 
	{
		evaporator->Splash();
	}
};

template<typename T>
class age_of_evaporator {
public:
	age_of_evaporator(T value) 
	{
		this->value = value;
	}

	void print_age() 
	{
		cout << "age (in months) is " << value << endl;
	}
private:
	T value;
};





int main() {
	Evaporator* evaporators[5] = { 0, 0, 0, 0, 0 };

	super_Evaporator* s_Evaporetor = 0;

	evaporators[0] = new Evaporator();

	super_Evaporator* s_Evaporator = new super_Evaporator(700);

	evaporators[1] = new Evaporator("test_evaporator", 12, 12, 12);
	s_Evaporator->Evaporator_INFO();
	*s_Evaporator = *evaporators[1];
	s_Evaporator->Evaporator_INFO();
	s_Evaporator->Evaporator_INFO(1);

	Evaporator_Splash new_Evaporator;

	User user;
	user.Splash(&new_Evaporator);

	age_of_evaporator<int> age(10);
	age.print_age();
	age_of_evaporator<string> age1("ten");
	age1.print_age();

	Evaporator* new_new_evaporator = 0;

	new_new_evaporator = new Evaporator();
	new_new_evaporator->Evaporator_INFO_1();
	new_new_evaporator = new super_Evaporator(400);
	new_new_evaporator->Evaporator_INFO_1();
}