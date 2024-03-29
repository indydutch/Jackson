#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Passenger {
private:
	string username;
	string password;
	string FirstName;
	/*char LastName[20];
	string Birthday;
	int Phone[15];
	char Email[40];
	int CreditCard[16];
	int CCSecurityCode[4];
	string StreetAddress;
	string City;
	string State;
	string Country;
	int ZipCode[20];*/
public:
	void saveUsername(string userVal) {
		username = userVal;
	}
	void savePassword(string passVal) {
		password = passVal;
	}
	void saveFirstName(string firstNameVal) {
		FirstName = firstNameVal;
	}
	string getUsername(){
		return username;	
	}
};

int main() {
	Passenger credentials;
	string userVal;
	string passVal;
	string firstNameVal;

	cout << "Enter your username: ";
	cin >> userVal;
	credentials.saveUsername(userVal);
	cout << endl;

	cout << "Enter your password: ";
	cin >> passVal;
	credentials.savePassword(passVal);
	cout << endl;

	cout << "Enter your first name: ";
	cin >> firstNameVal;
	credentials.saveFirstName(firstNameVal);
	cout << endl;
	
	cout << "The username is " << credentials.getUsername() << endl;
	
	ofstream myfile;
	myfile.open("example.txt");
	myfile << "Username: " << credentials.getUsername() << endl;
	myfile.close();

	return 0;
}
