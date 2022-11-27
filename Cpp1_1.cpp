#include <iostream>
#include <string>
using namespace std;
int main() {
	int key = 5;
	string message = "privet ito mi";
	for (int i = 0; i <= message.length(); i += key + 1) {
		int j = i + key;
		if (j > message.length() - 1) {
			j = message.length() - 1;
		}
		//Выше мы получили значения i(начала участка строки) и j(конца участка строки)
		
		
		cout << i << " " << j << endl;
	}
	return 0;
}