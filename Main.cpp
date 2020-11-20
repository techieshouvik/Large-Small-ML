//CODE written by Shouvik Chatterjee
//Header Files
#include<iostream>
#include<conio.h>
using namespace std;
//Main function
int main() {
	//Heading
	cout << " ----MACHINE LEARNING :: ---- "<<endl;
	cout << "\n This Program calculates whether a number is LARGE or SMALL based on 10 datasets \n used in training - CODE by Techieshouvik\n";
	//Variables
	string a, b;
	int inp,trained_data=1,i=1,n;

	//Labels
	a = "LARGE";	//Classification Label 1
	b = "SMALL";	//Classification Label 2

	cout << "\n***--TRAINING SESSION---[10 Gen Trainer]-***"<<endl;

	//Loop 10 times
	while (i <= 10) {
		cout << "\n------------------------GEN :: " << i<<">>>>";
		//Input DATA
		cout << "\nEnter a number :: ";
		cin >> inp;
		cout << "\nIs it Large [1] / Small [0] :: ";
		cin >> n;

		//Define the Rule
		if (inp >= trained_data) {
			cout <<endl<<"AI says :: "<< a; //LARGE NUMBER
			if (n == 0) {
				trained_data++;				//Tweaking
				cout << " [Tweaked] ";
			}
		}
		else {
			cout <<endl<<"AI says :: "<< b; //SMALL NUMBER
			if (n == 1) {
				trained_data--;				//Tweaking
				cout << " [Tweaked] ";
			}
		}

		i++; //COUNTER VARIABLE INCREMENT
	}
	cout << endl << "----------------------------------------";
	cout << endl << "TRAINED DATA FINAL :: Anything above " << trained_data<<" is LARGE";
	cout << endl << "----------------------------------------";

	_getch();
}