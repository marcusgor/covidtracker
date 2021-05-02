#include "Covid.hpp"
#include <iostream>
#include <string>

using namespace std;

covid::covid() {
	//Default Constructor
}

covid::covid(string person, int age, string region, bool covidstatus)
{
	//Parameterized Constructor, sending input to private mems
person_ = person;
age_ = age;
region_ = region;
covidstatus_ = covidstatus;
}

/**
Adds new entry to outbreak
@post if successful, adds member to the data
@return true if added, false if not
bool covid::add() {
	bool result;
	if (isInfected == true) {
		result = true;
	}
	else {
		result = false;
	}
	return result;
}
*/

/**
Displays all data
@post if successful, show all the data
@return data to user
*/
void covid::display() {
	cout << "Current Data: " << getPerson() << getAge() <<
		getRegion() << isInfected() << endl;
}
/**
Bool to test if person is infected
@post if successful, returns bool statement
@return true if has covid-19, false if not
*/
bool covid::isInfected() {
	if (covidstatus_ == true) {
		return true;
	}
	else {
		return false;
	}
}

void covid::setPerson(string person) {
	person_ = person;
}

string covid::getPerson() {
	return person_;
}

/**
* Void to set CORONA = True
* Updates person's information
* Updates Covid Positive Count
*/
void covid::setInfected(bool covidstatus) {
	covidstatus_ = true;
	count_++;
}

/**
* Void to set CORONA = False
* Updates person's covid status
* Updates Covid Positive Count
*/
void covid::setNegative(bool covidstatus) {
	covidstatus_ = false;
	count_--;
}

//Returns COVID Positive Number
//Only returns int of x covid positive patients
int covid::getCount() {
	return count_;
}

void covid::setAge(int age) {
	age_ = age;
}
/**
Age of person
@post if successful, returns age of data member
@return private member int age
@param person, data of person
*/
int covid::getAge() {
	return age_;
}

/**
COVID-19 Status of patient
@post if successful, returns bool status of COVID-19
@return priv memb bool covidstatus_
@param patient covid data
 */
bool covid::getStatus() {
    return covidstatus_;
}


void covid::setRegion(string region) {
	region_ = region;
}
/**
Location where infected person is present
@post if successful, returns location of data member
@return private member string region
@param person, data of person
*/
string covid::getRegion() {
	return region_;
}


/*
bool covid_19_outbreak::remove(person) {
bool result;
if  (isInfected == false) {
result = true;
}
return result;
}
*/

int main() {
	covid covid("TestPerson", 50, "New York", false);
	covid.isInfected();
	cout << "COVID-19 Negative/Positive (0:1): " << covid.getStatus() << endl;
	covid.setAge(65);
	covid.setPerson("Jack");
	covid.setInfected(true);
	cout << "Patient Name: " << covid.getPerson() << endl;
	cout << "COVID-19 Negative/Positive (0:1): " << covid.getStatus() << endl;
	cout << "Total COVID-19 Positivity Count: " << covid.getCount() << endl;
	cout << "Patient Age: " << covid.getAge() << endl;
	cout << "Patient Region: " << covid.getRegion() << endl;
	covid.setNegative(true);
	cout << "Patient Jack has recovered from COVID-19.\n" << "New Total COVID-19 Positivity Count: " << covid.getCount() << endl;
	

}