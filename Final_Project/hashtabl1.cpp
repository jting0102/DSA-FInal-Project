#include <sstream>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <math.h>
#include <map>
#include <algorithm>
using namespace std;

class person {
private:
	int ID;
	int age;
	int income;
	string hispanic;
	string state;
public:
	person();
	person(int ID_, int age_, int income_, string hispanic_, string state_);
	int getID();
	int getAge();
	int getIncome();
	string ifHispanic();
	string getState();
};

person::person()
{
	ID = 0;
	age = 0;
	income = 0;
	hispanic = "";
	state = "";
}

person::person(int ID_, int age_, int income_, string hispanic_, string state_) {
	ID = ID_;
	age = age_;
	income = income_;
	hispanic = hispanic_;
	state = state_;
}

int person::getID()
{
	return ID;
}

int person::getAge()
{
	return age;
}

int person::getIncome() {
	return income;
}

string person::ifHispanic()
{
	return hispanic;
}

string person::getState()
{
	return state;
}

class hashTable {
private:
	vector<vector<person>> table;
	vector <string> key_list;
	int count=0;

public:
	hashTable();
	void sortTable(string state_, int order, int info);
	void addingData();
	person search(int ID_);
	void insert(person insertee);
	void del();
	int getKey(string state_, int size_);
};

hashTable::hashTable() {
	table.resize(10);
}

person hashTable::search(int ID_) {
	for (int ii = 0; ii < table[ID_].size(); ii++) {
		return (table[ID_][ii]);
	}
}
void hashTable::insert(person insertee) {
	if (find(key_list.begin(), key_list.end(), insertee.getState()) == key_list.end()) {
		count++; //only add count if new state is added
		key_list.push_back(insertee.getState());
	}
	table[getKey(insertee.getState(), table.size())].push_back(insertee);
	double num = table.size();
	if (count/num > 0.75) {
		vector<vector<person>> temp(table.size()*2);
		for (int ii = 0; ii < key_list.size(); ii++) {
			temp[getKey(key_list[ii], temp.size())] = table[getKey(insertee.getState(), table.size())];
		}
		table = temp;
	}
}
void hashTable::del() {

}

void hashTable::addingData() {
	ifstream data;
	data.open("ExportCSV.csv");

	string ID, age, income, state, hispanic;
	int ID_, income_, age_;
	bool hispanic_;

	if (data.is_open()) {
		string lines;
		getline(data, lines);

		while (getline(data, lines)) {
			istringstream stream(lines);
			getline(stream, ID, ',');
			getline(stream, age, ',');
			getline(stream, income, ',');
			getline(stream, hispanic, ',');
			getline(stream, state);

			ID_ = stoi(ID);
			age_ = stoi(age);
			income_ = stoi(income);

			insert(person(ID_, age_, income_, hispanic, state));
		}
	}
}

int hashTable::getKey(string state_, int size_)
{
	int sum = 0;
	for (int ii = 0; ii < state_.length(); ii++) {
		sum += state_[ii]-31;
	}
	return sum%size_;
}

void hashTable::sortTable(string state_, int order, int info) {
	map<string, int> sorted_data;
	map<int, int> sorted_int_data;
	for (int ii = 0; ii < table[getKey(state_, table.size())].size();ii++) {
		if (table[getKey(state_, table.size())][ii].getState()==state_) {
			if (info==1) {
				sorted_int_data[(table[getKey(state_, table.size())][ii].getID())] += 1;
			} else if (info == 2) {
				sorted_int_data[(table[getKey(state_, table.size())][ii].getAge())] += 1;
			} else if (info == 3) {
				sorted_int_data[(table[getKey(state_, table.size())][ii].getIncome())] += 1;
			} else if (info == 4) {
				sorted_data[(table[getKey(state_, table.size())][ii].ifHispanic())] += 1;
			}
		}
	}
	
	if (info==4) {
		if (order == 1) {
			map<string, int>::iterator iter;
			for (iter = sorted_data.begin(); iter != sorted_data.end(); iter++) {
				cout << iter->first << ": " << iter->second << endl;
			}
		}
		else {
			map<string, int>::reverse_iterator iter;
			for (iter = sorted_data.rbegin(); iter != sorted_data.rend(); iter++) {
				cout << iter->first << ": " << iter->second << endl;
			}
		}
	}
	else {
		if (order == 1) {
			map<int, int>::iterator iter;
			for (iter = sorted_int_data.begin(); iter != sorted_int_data.end(); iter++) {
				cout << iter->first << ": " << iter->second << endl;
			}
		}
		else {
			map<int, int>::reverse_iterator iter;
			for (iter = sorted_int_data.rbegin(); iter != sorted_int_data.rend(); iter++) {
				cout << iter->first << ": " << iter->second << endl;
			}
		}
	}
}

/*
int main() {
	hashTable hash;
	hash.addingData();
	hash.sortTable("Florida",1,1);

	return 0;
}
*/
