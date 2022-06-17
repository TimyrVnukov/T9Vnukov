#include "GAI.h"

int main() {
	GAI gai;
	gai.addItem(new CarNumber);
	gai.addItem(new CarNumber);
	gai.addItem(new CarNumber);
	gai.addItem(new CarNumber);
	gai.addItem(new CarNumber);
	gai.addItem(new CarNumber);
	gai.addItem(new CarNumber);
	gai.addItem(new CarNumber);
	gai.addItem(new CarNumber);
	gai.addItem(new CarNumber);

	string inp;
	while (true)
	{
		system("CLS");
		gai.showInfo();
		cout << "Enter number: ";
		getline(cin, inp);
		bool isFound = false;
		for (int i = 0; i < gai.getIndex(); i++) {
			if (inp == gai[i]->get_fullNumber()) {
				isFound = true;
				gai.deleteItem(i);
				cout << "You got " << inp << " number!" << endl;
				gai.addItem(new CarNumber);
			}
		}
		if (!isFound) {
			cout << "You cannot get " << inp << " number!" << endl;
		}
	}
	return 0;
}