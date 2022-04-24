#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <sstream>
#include <iomanip>
#include <vector>
#include <list>
#include <fstream>
#include <cctype>

using namespace std;

class Community {
public:
	string placeName, placeType, populationDensity;
	char noisyPlace;

	Community() {
		placeName = "...", placeType = "...", populationDensity = "...";
		noisyPlace = '.';
	}

	Community(string place, string ptype,string pDensity, char noisy): placeName(place), placeType(ptype), populationDensity(pDensity),
		noisyPlace(noisy){}

	string getPlaceName() { return placeName; }

	string getPlaceType() { 
		return placeType; };

	string getPopulationDensity() { return populationDensity; };

	char getNoisyPlace() { return noisyPlace; };
};

class Family {
public:
	int numkids, familySize;
	char married, kids;
	char famGatherings;

	Family() {
		int numkids = 0, familySize = 1;
		char married = 'n', kids = 'n';
		char famGatherings = 'n';
	}

	Family(int nkids, int famsize, bool maried, bool kids, char famGather ) : numkids(nkids), familySize(famsize), 
		married(maried), kids(kids), famGatherings(famGather) {}

	int getnumkids() { return numkids; };

	int getfamilySize() { return familySize; };

	char getMarried() { return married; };

	char getkids() { return kids; };

	char getfamGatheerings() { return famGatherings; };

};

class PersonalityType {
public:
	string type, neighborPreference;

	PersonalityType() {
		type = "introvert", neighborPreference = "noisy neigbours";
	}

	PersonalityType(string typ, string neighbor) : type(typ), neighborPreference(neighbor) {}

	string getType() { return type; }

	string getPreference(string ) { return neighborPreference; }
};

class Person: public Community, public Family {
public:
	PersonalityType pT; //object composition
	bool goingOut, party;
	char friends;
	Person() {
		goingOut = false;
		party = false;
		friends = 'n';
	}

	Person(bool out, bool part, char friends): goingOut(out), party(part), friends(friends) {}

	bool getParty() { return party; };
	bool getGoing() { return goingOut; }
	char getFriends() { return friends; }
};

struct Aprt {
	char name[100], address[100], description[300];
};

// phooenix is a very quite place
void Phoenix() {
	char ch;
Person point;
	cout << "Welcome to our community!" << endl;
	cout << "We will need to know a few facts about  you so that we can assign you a section where you will have neighbors that are compatible with you" << endl;
	cout << "how do you describe your personality?(introvert or extrovert)" << endl;
	cin >> point.pT.type;// composed object
	cout << "We always strive to ensure that our clients get to have neighbors who are compatible to them so as to ensure a safe and a peaceful living environment " << endl;
	
	//cout << "what is your ideal type of a neighbor(quiet or outgoing " << endl;
	//cin.ignore(ch);
	cin >>point.pT.neighborPreference;
	cout << "how big is your family" << endl;
	cin >> point.familySize;
	
	cout << "do you regularly host family gathering meetings(y/n)" << endl;
	cin >> point.famGatherings;
	  

	cout << "Do you like to host parties?(0 for no, and 1 for yes)" << endl;
	cin >> point.party;
	bool part = point.getParty();
	cout << "are you the outgoing type of a person(0 for no, and 1 for yes)" << endl;
	cin >> point.goingOut;
	bool out = point.getGoing();
	cout << "do you like to have friends come over for a sleep over?" << endl;
	cin >> point.friends;
	char res = point.getFriends();
	if ((part && out) && (res == 'y' || res =='Y')){
		cout << "We are able to offer you a place in the East Wing of the building.Additional information will be sent to you so you can select the floor and the apartment unit you want" << endl; 
	}
	else if ((!part && out) && (res =='y' || res =='Y')){
		cout << "We are able to offer you a place in the North Wing of the building.Additional information will be sent to you so you can select the floor and the apartment unit you want" << endl; 
	}
	else if ((!part && !out) && (res =='y' || res =='Y')){
		cout << "We are able to offer you a place in the South Wing of the building.Additional information will be sent to you so you can select the floor and the apartment unit you want" << endl;
	}
	else {
		cout << "The West Wing is the best place for you.Additional information will be sent to you so you can select the floor and the apartment unit you want" << endl;
	}
	
}
// salador is a noisy place
void Salador() {
Person point;
	cout << "Welcome to our community!" << endl;
	cout << "We will need to know a few facts about  you so that we can assign you a section where you will have neighbors that are compatible with you" << endl;
	cout << "how do you describe your personality?(introvert or extrovert)" << endl;
	cin >> point.pT.type; // composed object
	cout << "We always strive to ensure that our clients get to have neighbors who are compatible to them so as to ensure a safe and a peaceful living environment " << endl;
	
	cout << "what is your ideal type of a neighbor" << endl;
	getline(cin, point.pT.neighborPreference);
	cout << "how big is your family" << endl;
	cin >> point.familySize;
	
	cout << "do you regularly host family gathering meetings(y/n)" << endl;
	cin >> point.famGatherings;
	  

	cout << "Do you like to host parties?(0 for no, and 1 for yes)" << endl;
	cin >> point.party;
	bool part = point.getParty();
	cout << "are you the outgoing type of a person(0 for no, and 1 for yes)" << endl;
	cin >> point.goingOut;
	bool out = point.getGoing();
	cout << "do you like to have friends come over for a sleepover?" << endl;
	cin >> point.friends;
	char res = point.getFriends();
	if ((part && out) && (res == 'y' || res =='Y')){
		cout << "We are able to offer you a place in the Blue Section of the building.Additional information will be sent to you so you can select the floor and the apartment unit you want" << endl; 
	}
	else if ((!part && out) && (res =='y' || res =='Y')){
		cout << "We are able to offer you a place in the Red Section of the building.Additional information will be sent to you so you can select the floor and the apartment unit you want" << endl; 
	}
	else if ((!part && !out) && (res =='y' || res =='Y')){
		cout << "We are able to offer you a place in the Yellow Section of the building.Additional information will be sent to you so you can select the floor and the apartment unit you want" << endl;
	}
	else {
		cout << "The Green Section is the best place for you.Additional information will be sent to you so you can select the floor and the apartment unit you want" << endl;
	}
}
//regex is inbetween
void Regex() {
	Person point;
	cout << "Welcome to our community!" << endl;
	cout << "We will need to know a few facts about  you so that we can assign you a section where you will have neighbors that are compatible with you" << endl;
	cout << "how do you describe your personality?(introvert or extrovert)" << endl;
	cin >> point.pT.type; // composed object
	cout << "We always strive to ensure that our clients get to have neighbors who are compatible to them so as to ensure a safe and a peaceful living environment " << endl;
	
	cout << "what is your ideal type of a neighbor" << endl;
	getline(cin, point.pT.neighborPreference);
	cout << "how big is your family" << endl;
	cin >> point.familySize;
	
	cout << "do you regularly host family gathering meetings(y/n)" << endl;
	cin >> point.famGatherings;
	  

	cout << "Do you like to host parties?(0 for no, and 1 for yes)" << endl;
	cin >> point.party;
	bool part = point.getParty();
	cout << "are you the outgoing type of a person(0 for no, and 1 for yes)" << endl;
	cin >> point.goingOut;
	bool out = point.getGoing();
	cout << "do you like to have friends come over for a sleep over?(y/n)" << endl;
	cin >> point.friends;
	char res = point.getFriends();
	if ((part && out) && (res == 'y' || res =='Y')){
		cout << "We are able to offer you a place in the Dracula Section of the building.Additional information will be sent to you so you can select the floor and the apartment unit you want" << endl; 
	}
	else if ((!part && out) && (res =='y' || res =='Y')){
		cout << "We are able to offer you a place in the Pomite Section of the building.Additional information will be sent to you so you can select the floor and the apartment unit you want" << endl; 
	}
	else if ((!part && !out) && (res =='y' || res =='Y')){
		cout << "We are able to offer you a place in the Grenada Section of the building.Additional information will be sent to you so you can select the floor and the apartment unit you want" << endl;
	}
	else {
		cout << "The Duiye Section is the best place for you.Additional information will be sent to you so you can select the floor and the apartment unit you want" << endl;
	}
}// with kids

int main() {
	Aprt Block[3] = {
	{"Name:	Phoenix Apartments", "Address:	52 South West SaltLake Central, UT84767", "Description:	A chalk white building with seven floors. Phoenix has 26 apartments on each floor. The building is located on the Western side of the city and is about 10 miles from the CBD. The place is very quite and is ideal for those people who want to live in  quite places" },
	{"Name:	Salador Apartments", "Address:	Indn Route 42, SaltLake Central", "Description:	A black building with 15 floors and 14 apartments on each floor. It is right in the center of the city very convenient for those who whow prefer to live close to their work places. Top floors of Salador offer the best view of the city and its outskirts"},
	{"Name:	Regex Apartments", "Address:	2282 Resource Boulevard, UT", "Description:	A blue building with ten floors. It hass ten apartments per flooor and is located on the eastern side of the city center. The place is moderately quite and is close to the famous Green Valley Park"}
	
};

fstream file;
	file.open("vis.dat", ios::out | ios::binary); // writing to the data file
if (file.is_open()){
	file.write(reinterpret_cast<char*>(Block), 3 * sizeof(Aprt));
	file.close(); // pointer type cast
}
else{
	cout << "error opening the file" << endl;
}

	Aprt Block2[3];

	file.open("vis.dat", ios::in | ios::binary);// reading the data from file to console.
	if (file.is_open()){
		file.read(reinterpret_cast<char*>(Block2), 3 * sizeof(Aprt));
			file.close(); // pointer type cast
	}
	
	int *n = new int[2];
	int press;
	cout << "Welcome to BERR Residence and Housing" << endl;
	cout << "We have three residential blocks in Salt Lake Central. " << endl;
	
	cout << "Press 1 to learn more about our residential buildings and their locations and 0 to cancel " << endl;
	cin >> press;
	
	while(press < 0 || press > 1){
		cout << "invalid response" << endl;
		cout << "Press 1 to learn more about our residential buildings and their locations and 0 to cancel " << endl;
		cin >> press;
	}
	if (press == 1){
		for (Aprt &s: Block2){
			cout << s.name << endl;
			cout << s.address <<endl;
			cout<< s.description << endl;
			cout << "********************************************************************" << endl;
			cout << "********************************************************************" << endl;
			}
	}
	else if (press == 0){
		cout << "Program terminated!" << endl;
		//Sleep(5);
		exit(0);
	}
	Person point;
	int choice;
	//Community choice;
	 cout << "which apartment would you like to live in? ( 1 - Regex, 2 - Phoenix, 3 - Salador)" << endl;
	cin >> choice;
	while(choice < 0 || choice > 3){
		cout << "invalid input. Please enter 1 or 2 or 3" << endl;
		cout << "which apartment would you like to live in? ( 1 - Regex, 2 - Phoenix, 3 - Salador)" << endl;
	cin >> choice;
	}
	if (choice == 1){
		Regex();
	}
	else if (choice == 2) {
		Phoenix();
	}
	else if (choice == 3){
		Salador();
	}

	
return 0;
}