#include "redblackiterative.cpp"
#include "hashtabl1.cpp"
#include <stdio.h>
#include <chrono>

using namespace std;

int main()
{
	int order, info;
	string state;
	int method = -1;
	while (method != 0){
		cout << "Exit (0) | Hash Table (1) | Red/Black Iterative (2)\nData Structure Method:";
		cin >> method;

		if (method == 0){
			break;
		}
		if (method == 1){
			hashTable hash;

			auto start1 = chrono::steady_clock::now();

			hash.addingData();

			auto end1 = chrono::steady_clock::now();
			cout << "Elapsed time to read files in nanoseconds: " << chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count() << " ns" << endl;

			cout << "US Census Data Visualizer\n";
			//cout << "List of States:\n";
			//cout << "Alabama\nAlaska\nArizona\nArkansas\nCalifornia\nColorado\nConnecticut\nDelaware\nFloridaGeorgia\nHawaii\nIdaho\nIllinois\nIndiana\nIowa\nKansas\nKentucky\nLouisiana\nMaine\nMaryland\nMassachusetts\nMichigan\nMinnesota\nMississippi\nMissouri\nMontana\nNebraska\nNevada\nNew Hampshiren\nNew Jersey\nNew Mexico\nNew York\nNorth Carolina\nNorth Dakota\nOhio\nOklahoma\nOregon\nPennsylvania\nRhode Island\nSouth Carolina\nSouth Dakota\nTennessee\nTexas\nUtahVermont\nVirginia\nWashington\nWashington DC\nWest Virginia\nWisconsin\nWyoming\n";
			cout << "Type a State: ";
			cin >> state;
			cout << "\nAscending (1) or Decending (2)? ";
			cin >> order;
			cout << "\nSort By: ID (1) | Age (2) | Income (3) | Is Hispanic (4)? ";
			cin >> info;
			cout << "\n";

			auto start2 = chrono::steady_clock::now();

			hash.sortTable(state,order,info);

			auto end2 = chrono::steady_clock::now();
			cout << "Elapsed time to sort in nanoseconds: " << chrono::duration_cast<chrono::nanoseconds>(end2 - start2).count() << " ns" << endl;

		}
		else if (method == 2){
			RedBlackTree tree;

			auto start1 = chrono::steady_clock::now();

			ifstream inFile("ExportCSV.csv");
			if (inFile.is_open())
			{
				string line;
				getline(inFile, line);
				while (getline(inFile, line))
				{
					stringstream stream(line);
					string token;
					getline(stream, token, ',');
					unsigned int id = stoi(token);
					getline(stream, token, ',');
					unsigned int age = stoi(token);
					getline(stream, token, ',');
					unsigned int income = stoi(token);
					getline(stream, token, ',');
					string hispanic = token;
					getline(stream, token, ',');
					string state = token;
					tree.insert(tree.getHead(), id, age, income, state, hispanic);
				}
				inFile.close();
			}

			auto end1 = chrono::steady_clock::now();
			cout << "Elapsed time to read files in nanoseconds:: " << chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count() << " ns" << endl;

			cout << "US Census Data Visualizer\n";
			//cout << "List of States:\n";
			//cout << "Alabama\nAlaska\nArizona\nArkansas\nCalifornia\nColorado\nConnecticut\nDelaware\nFloridaGeorgia\nHawaii\nIdaho\nIllinois\nIndiana\nIowa\nKansas\nKentucky\nLouisiana\nMaine\nMaryland\nMassachusetts\nMichigan\nMinnesota\nMississippi\nMissouri\nMontana\nNebraska\nNevada\nNew Hampshiren\nNew Jersey\nNew Mexico\nNew York\nNorth Carolina\nNorth Dakota\nOhio\nOklahoma\nOregon\nPennsylvania\nRhode Island\nSouth Carolina\nSouth Dakota\nTennessee\nTexas\nUtahVermont\nVirginia\nWashington\nWashington DC\nWest Virginia\nWisconsin\nWyoming\n";
			cout << "Type a State: ";
			cin >> state;
			cout << "\nAscending (1) or Decending (2)? ";
			cin >> order;
			cout << "\nSort By: ID (1) | Age (2) | Income (3) | Is Hispanic (4)? ";
			cin >> info;
			cout << "\n";

			auto start2 = chrono::steady_clock::now();

			tree.sortTable(state, order, info);
			
			auto end2 = chrono::steady_clock::now();
			cout << "Elapsed time to sort in nanoseconds: " << chrono::duration_cast<chrono::nanoseconds>(end2 - start2).count() << " ns" << endl;

		}
	}
}