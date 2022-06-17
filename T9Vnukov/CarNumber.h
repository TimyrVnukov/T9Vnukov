#pragma once
#include <iostream>
#include "string"
using namespace std;
class CarNumber
{
	string fullNumber;
public:
	static int number;
	static char letters[2];
	CarNumber() {
		if (number < 9999) {
			number++;
		}
		else {
			number = 0;
			if ((int)letters[1] <= 132) {
				letters[1] = (char)((int)letters[1] + 1);
			}
			else {
				letters[1] = 'A';
				letters[0] = (char)((int)letters[0] + 1);
			}
		}
		fullNumber = to_string(number) + letters[0] + letters[1];
	};
	~CarNumber() {};
	void showInfo() {
		cout << this->fullNumber << endl;
	};

	string get_fullNumber()const& {
		return this->fullNumber;
	}
};
