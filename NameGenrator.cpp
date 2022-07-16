#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>   
#include <cstdlib>        /* time */

using namespace std;

int main() {

	vector<string> Fnames;
	vector<string> Lnames;

	Fnames.insert(Fnames.end(), "Liam");
	Fnames.insert(Fnames.end(), "Noah");
	Fnames.insert(Fnames.end(), "Oliver");
	Fnames.insert(Fnames.end(), "William");
	Fnames.insert(Fnames.end(), "Elijah");
	Fnames.insert(Fnames.end(), "James");
	Fnames.insert(Fnames.end(), "Benjamin");
	Fnames.insert(Fnames.end(), "Lucas");
	Fnames.insert(Fnames.end(), "Mason");
	Fnames.insert(Fnames.end(), "Ethan");
	Fnames.insert(Fnames.end(), "Alexander");
	Fnames.insert(Fnames.end(), "Henry");
	Fnames.insert(Fnames.end(), "Jacob");
	Fnames.insert(Fnames.end(), "Michael");
	Fnames.insert(Fnames.end(), "Daniel");
	Fnames.insert(Fnames.end(), "Logan");
	Fnames.insert(Fnames.end(), "Jackson");
	Fnames.insert(Fnames.end(), "Sebastian");
	Fnames.insert(Fnames.end(), "Aiden");
	Fnames.insert(Fnames.end(), "Owen");
	Fnames.insert(Fnames.end(), "Samuel");
	Fnames.insert(Fnames.end(), "Matthew");
	Fnames.insert(Fnames.end(), "Joseph");
	Fnames.insert(Fnames.end(), "Levi");
	Fnames.insert(Fnames.end(), "David");
	Fnames.insert(Fnames.end(), "John");
	Fnames.insert(Fnames.end(), "Wyatt");
	Fnames.insert(Fnames.end(), "Carter");
	Fnames.insert(Fnames.end(), "Julian");
	Fnames.insert(Fnames.end(), "Luke");
	Fnames.insert(Fnames.end(), "Grayson");
	Fnames.insert(Fnames.end(), "Isaac");
	Fnames.insert(Fnames.end(), "Jayen");
	Fnames.insert(Fnames.end(), "Theodore");
	Fnames.insert(Fnames.end(), "Gabriel");
	Fnames.insert(Fnames.end(), "Anthony");
	Fnames.insert(Fnames.end(), "Dylan");
	Fnames.insert(Fnames.end(), "Leo");
	Fnames.insert(Fnames.end(), "Lincoln");
	Fnames.insert(Fnames.end(), "Jaxon");
	Fnames.insert(Fnames.end(), "Asher");
	Fnames.insert(Fnames.end(), "Christopher");
	Fnames.insert(Fnames.end(), "Josiah");
	Fnames.insert(Fnames.end(), "Andrew");
	Fnames.insert(Fnames.end(), "Thomas");
	Fnames.insert(Fnames.end(), "Joshua");
	Fnames.insert(Fnames.end(), "Ezra");
	Fnames.insert(Fnames.end(), "Hudson");
	Fnames.insert(Fnames.end(), "Ronald");
	Fnames.insert(Fnames.end(), "Donald");
	Fnames.insert(Fnames.end(), "Carli");



	Lnames.insert(Lnames.end(), "Bo");
	Lnames.insert(Lnames.end(), "Jones");
	Lnames.insert(Lnames.end(), "Phillips");
	Lnames.insert(Lnames.end(), "Braxton");
	Lnames.insert(Lnames.end(), "Smith");
	Lnames.insert(Lnames.end(), "Pedro");
	Lnames.insert(Lnames.end(), "Shmift");
	Lnames.insert(Lnames.end(), "Lex");
	Lnames.insert(Lnames.end(), "Ronoldo");
	Lnames.insert(Lnames.end(), "Perry");
	Lnames.insert(Lnames.end(), "Swab");
	Lnames.insert(Lnames.end(), "Silver");
	Lnames.insert(Lnames.end(), "Stein");
	Lnames.insert(Lnames.end(), "Weinstein");
	Lnames.insert(Lnames.end(), "Buttler");
	Lnames.insert(Lnames.end(), "Trump");
	Lnames.insert(Lnames.end(), "Biden");
	Lnames.insert(Lnames.end(), "Clinten");
	Lnames.insert(Lnames.end(), "Harlow");
	Lnames.insert(Lnames.end(), "Herold");
	Lnames.insert(Lnames.end(), "Klein");
	Lnames.insert(Lnames.end(), "Jackson");
	Lnames.insert(Lnames.end(), "Piper");
	Lnames.insert(Lnames.end(), "Cromwell");
	Lnames.insert(Lnames.end(), "Bogan");
	Lnames.insert(Lnames.end(), "McDonald");
	Lnames.insert(Lnames.end(), "Bragg");
	Lnames.insert(Lnames.end(), "Stein");
	Lnames.insert(Lnames.end(), "Kirkland");
	Lnames.insert(Lnames.end(), "Hellmann");
	Lnames.insert(Lnames.end(), "Pettis");
	Lnames.insert(Lnames.end(), "Richards");
	Lnames.insert(Lnames.end(), "Lopez");
	Lnames.insert(Lnames.end(), "Rockwell");
	Lnames.insert(Lnames.end(), "McDoodyHead");
	Lnames.insert(Lnames.end(), "Parker");
	Lnames.insert(Lnames.end(), "Banner");
	Lnames.insert(Lnames.end(), "Manning");
	Lnames.insert(Lnames.end(), "Clefton");
	Lnames.insert(Lnames.end(), "Tubman");
	Lnames.insert(Lnames.end(), "Sparks");
	Lnames.insert(Lnames.end(), "Carolson");
	Lnames.insert(Lnames.end(), "Robertson");
	Lnames.insert(Lnames.end(), "Spellman");
	Lnames.insert(Lnames.end(), "Sullivan");
	Lnames.insert(Lnames.end(), "Wazowski");
	Lnames.insert(Lnames.end(), "Hitler");
	Lnames.insert(Lnames.end(), "Dees");
	Lnames.insert(Lnames.end(), "Hill");
	Lnames.insert(Lnames.end(), "Sanchez");
	Lnames.insert(Lnames.end(), "Peobody");
	
	string yes;
	cout << "Do you want to add any names before you start? (yes/no)";
	cin >> yes;
	if (yes == "yes") {
		int many;
		cout << "how many? (a number)";
		cin >>many;

		for (int i = 0; i < many; i++) {
			string fn;
			string ln;

			cout << "what is the first name?" << endl;
			cin >>fn;
			Fnames.insert(Fnames.end(), fn);

			cout << "What is the last name?" << endl;
			cin >> ln;
			Lnames.insert(Lnames.end(), ln);


		}

	}
	if (yes != "yes" & yes != "no") {
		cout << "sorry that was not a correct response...I ";
	}

	int min = 0;
	int Max = Fnames.size();
	int outPut1;
	int outPut;
	int input;
	srand(time(NULL)); //generates random seed val
	while (true) {
		cout << endl<<endl<< "Okay Trevor!" << endl << endl << "How many character names to you want to generate? (type 0 to exit the program)" << endl;
	cin >> input;
	cout << endl << endl;
	if (input == 0) {
		return false;
	}
	
		for (int i = 0; i < input; i++) {
			//prints number between user input, inclusive
			outPut1 = rand() % ((min - Max) + 1);
			cout << Fnames[outPut1] << " ";
			//prints number between user input, inclusive
			outPut = rand() % ((min - Max) + 1);
			cout << Lnames[outPut] << " " << endl<<endl;

		}//end for 
	}

	
}