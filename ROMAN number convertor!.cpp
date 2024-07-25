#include <iostream>

using namespace std;


int convertor(char a) {
	if (a == 'I')
		return 1;
	else if (a == 'V')
		return 5;
	else if (a == 'X')
		return 10;
	else if (a == 'L')
		return 50;
	else if (a == 'C')
		return 100;
	else if (a == 'D')
		return 500;
	else if (a == 'M')
		return 1000;
	else
		return -1; // return -1 or throw an error if the character is not a valid Roman numeral
}

int roman(string number) {
	int total = 0;

	for (int i = 0; i < number.length(); i++) {
		if (i < number.length() - 1 && convertor(number[i]) < convertor(number[i + 1])) {
			total -= convertor(number[i]);
		}
		else {
			total += convertor(number[i]);
		}
	}
	return total;
}
int main() {
	string number;
	cout << "Please write a ROMAN number : ";
	cin >> number;
	int decimal = roman(number);
	cout << "the Decimal of that is: " << decimal << endl;


}