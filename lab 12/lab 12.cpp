#include <iostream>
using namespace std;
#include <fstream>

// structure
struct lookup {
	int ID;
	string Fname;
	string Lname;
	string Pnumber;
};

// ARRAY HOLDING DATA

lookup myArray[100];


// function to lookup by ID

void searchByID(int id) {
	for (int i = 0; i < 100; i++) {
		if (id == myArray[i].ID) {
			cout << "ID: " << myArray[i].ID << endl;
			cout << "First Name: " << myArray[i].Fname << endl;
			cout << "Last Name: " << myArray[i].Lname << endl;
			cout << "Phone Number: " << myArray[i].Pnumber << endl;
			cout << endl;
		}
	}
}

// function to lookup by first name
void searchByFname(string fname) {
	for (int i = 0; i < 100; i++) {
		if (fname == myArray[i].Fname) {
			cout << "ID: " << myArray[i].ID << endl;
			cout << "First Name: " << myArray[i].Fname << endl;
			cout << "Last Name: " << myArray[i].Lname << endl;
			cout << "Phone Number: " << myArray[i].Pnumber << endl;
			cout << endl;
		}
	}
}
 // // function to lookup by last name
void searchByLname(string lname) {
	for (int i = 0; i < 100; i++) {
		if (lname == myArray[i].Lname) {
			cout << "ID: " << myArray[i].ID << endl;
			cout << "First Name: " << myArray[i].Fname << endl;
			cout << "Last Name: " << myArray[i].Lname << endl;
			cout << "Phone Number: " << myArray[i].Pnumber << endl;
			cout << endl;
		}
	}
}

// function to lookup by phone number 
void searchByPnumber(string pnumber) {
	for (int i = 0; i < 100; i++) {
		if (pnumber == myArray[i].Pnumber) {
			cout << "ID: " << myArray[i].ID << endl;
			cout << "First Name: " << myArray[i].Fname << endl;
			cout << "Last Name: " << myArray[i].Lname << endl;
			cout << "Phone Number: " << myArray[i].Pnumber << endl;
			cout << endl;
		}
	}
}

int main() {

	
	

	fstream file;
	string filename;
	
	

	// reading from file
	filename = "Newfile.txt";

	file.open("Newfile.txt");
	for (int i = 0; i < 100; i++) {
		file >> myArray[i].ID;
		file >> myArray[i].Fname;
		file >> myArray[i].Lname;
		file >> myArray[i].Pnumber;
	}
	int option;

	// loop to keep the menu going until the user exits
	do{
	
	
		// menu for user / switch statement
		cout << " press '1' to search by ID number " << endl;
		cout << " press '2' to search by First name " << endl;
		cout << " press '3' to search by Last name " << endl;
		cout << " press '4' to search by Phone number " << endl;
		cout << " press '5' to exit " << endl;
		
		do {
			cout << "Select an Option (1-5): ";
			cin >> option;
		} while (option < 1 || option > 5);

		// switch statement , calling functions depending on what user inputs

		switch (option) {
			case 1: {
				int id;
				do {
					cout << "Enter ID (100-199): ";
					cin >> id;
				} while (id < 100 || id > 199);
				searchByID(id);
				break;
			}
			case 2: {
				string fname;
				cout << "Enter First Name: ";
				cin >> fname;
				searchByFname(fname);
				break;
			}
			case 3: {
				string lname;
				cout << "Enter Last Name: ";
				cin >> lname;
				searchByLname(lname);
				break;
			}
			case 4: {
				string pnumber;
				cout << "Enter Phone Number: ";
				cin >> pnumber;
				searchByPnumber(pnumber);
				break;
			}
		}

	} while (option != 5);

}
	 








