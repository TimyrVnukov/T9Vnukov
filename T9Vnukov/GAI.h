#pragma once
#include "CarNumber.h"
class GAI
{
	CarNumber** arr;
	int index;
public:
	GAI() {
		this->arr = NULL;
		this->index = 0;
	};
	~GAI() {
		if (index > 0) {
			for (int i = 0; i < this->index; i++) {
				delete arr[i];
			}
			delete[] arr;
		}
	};
	int getIndex()const& { return this->index; };
	void addItem(CarNumber* obj) {
		CarNumber** tmp = new CarNumber * [++index];
		for (int i = 0; i < index - 1; i++) {
			tmp[i] = arr[i];
		}
		if (arr != NULL) {
			delete[]arr;
		}
		tmp[index - 1] = obj;
		arr = tmp;
	};


	void deleteItem(int n) {
		if (this->index > 1) {
			CarNumber** tmp = new CarNumber * [--this->index];
			for (int i = 0; i < n; i++) {
				tmp[i] = arr[i];
			}
			cout << endl;
			for (int i = n; i < index; i++) {
				tmp[i] = arr[i + 1];
			}
			arr = tmp;
			for (int i = 0; i < index; i++) {
				arr[i] = tmp[i];
			}
		}
	};

	CarNumber* operator[](int n) {
		if (n >= 0 && n < index) {
			return this->arr[n];
		}
		else {
			throw "Out of range";
		}
	};

	void showInfo() {
		for (int i = 0; i < index; i++) {
			arr[i]->showInfo();
		}
	}
};

