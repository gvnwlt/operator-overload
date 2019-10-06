#pragma once
#include <string>
#include <iostream>

class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;

	friend bool operator<(int i, Person const& p); // better first choice to use a public function instead of this if possible

public:
	Person(std::string first, std::string last, int arbitrary);
	//Person()=default;
	Person();
	~Person();
	std::string getName() const;
	int GetNumber() const { return arbitrarynumber; }
	void SetNumber(int number) { arbitrarynumber = number; }
	bool operator<(Person const& p) const;
	bool operator<(int i) const;

};
bool operator<(int i, Person const& p);