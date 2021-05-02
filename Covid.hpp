/*
//Created by Marcus Gerard Riccio
+covid(string person, int age, string region, bool covidstatus) : parameterized constructor, takes patient's name, age, area, and COVID-19 status.
+display() : void //show the entire data
+isInfected() : Boolean //to check if a person has the virus.
+getCount() : integer //know how many total persons are covid-positive.
+getAge() : integer //show age of person
+getStatus() : bool //shows COVID-19 status of patient
+getRegion() : string //show location of person
+setPerson(string person) : void //sets the person's name
+setAge(int age) : void //sets person's age
+setInfected(bool covidstatus); void //sets person's covid status to positive
+setNegative(string person); void //sets person's covid status to negative
+
*/

#ifndef Covid_hpp
#define Covid_hpp

#include <iostream>
#include <string>

using namespace std;

class covid	{
    private:
		string person_;
		int age_;
		string region_;
		int count_ = 0;
		bool covidstatus_ = false;
	public:
		covid();
		/* Parameterized constructor
		@param person the person's unique id
		@param age the person's age
		@param region the person's location
		@param covidstatus is the person covid positive or negative?
		*/
		covid(string person, int age, string region, bool covidstatus);

		//add
		//@param person the person's unique id
		//checks if person is in database,
		//true: found in data
		//bool add(string person);

		//display
		//prints all corr data
		void display();

		//isInfected
		//checks if person is covid positive
		//True: has covid
		bool isInfected();
		
		//getPerson
		//returns name of person
		string getPerson();

		//setPerson
		//sets person name
		void setPerson(string person);

		//setInfected
		//sets covid positive status
		//adds to count
		void setInfected(bool covidstatus);

		//setNegative
		//sets covid negative status
		//removes from count
		void setNegative(bool covidstatus);

		//getCount
		//returns count of total positive patients
		int getCount();

		//setAge
		//sets person's age in data
		void setAge(int age);

		//int getAge()
		//@param person the person's unique id
		//returns int age_ of person
		int getAge();
		
		//bool getStatus()
		//@param person the person's covidstatus_
		//returns bool covid_status of person
		bool getStatus();

		void setRegion(string region);
		//string getRegion()
		//@param person the person's unique id
		//returns region_ of person
        string getRegion();

		//bool remove
		//@param person the person's unique id
		//checks if person is in database,
		//true: removed from database
		//false: not removed
        //bool remove(string person);

	

}; 

#endif//end covid.h