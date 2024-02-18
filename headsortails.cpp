// Unis Super Cool Coin Flipper

#include <iostream>
using namespace std;

int main() {
	srand(time(0));
	string input = "";
	int max = 1;
	int min = 0;
	int coin = (rand() % (max - min + 1))+min;
	cout << "Enter Prediction: ";
	cin >> input;
	if (coin == 1)
	{
		cout << "      _______ " << endl;
		cout << "   /===  *  ===\\" << endl;
		cout << " /= *   +*+   * =\\"<< endl;
		cout << "| *     ===     * |"<<endl;
		cout << "|*      |=|      *|"<<endl;
		cout << "| *      +      * |"<<endl;
		cout << " \\= * LATVIJA * =/"<<endl;
		cout << "   \\===  *  ===/"<<endl;
		cout << "      -------"<<endl;
		cout << "Heads"<<endl;
	}
	else
	{
		cout << "      _______"<< endl;
		cout << "   /===-----===\\"<< endl;
		cout << " /= /-  /||  -\\ =\\"<<endl;
		cout << "|  /   /+||    \\  |"<<endl;
		cout << "| O      ||     O |"<<endl;
		cout << "|        ||       |"<<endl;
		cout << " \\=   SANTIMS   =/"<<endl;
		cout << "   \\===     ===/"<<endl;
		cout << "      -------"<<endl;
		cout << "Tails" <<endl;
	}
	
	return 0;
}
