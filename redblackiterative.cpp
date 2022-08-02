// project3redblacktree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <map>
using namespace std;
struct personNode
{
	int id;
	int age;
	int income;
	string state;
	string hispanic;
	bool red; //true = red, false = black
	personNode* left;
	personNode* right;
	personNode* parent;

	personNode()
	{
		id = 0;
		age = 0;
		income = 0;
		state = "";
		red = 0;
		hispanic = "";
		left = nullptr;
		right = nullptr;
		parent = nullptr;
	}

	personNode(int& id, int& age, int& income, string& state, string hispanic)
	{
		this->id = id;
		this->age = age;
		this->income = income;
		this->state = state;
		this->hispanic = hispanic;
		red = 1;
		left = nullptr;
		right = nullptr;
	}
};
class RedBlackTree
{
	personNode* head = nullptr;

	personNode* rightRotate(personNode* root)
	{
		personNode* grandchild = root->left->right;
		personNode* newParent = root->left;
		newParent->right = root;
		root->left = grandchild;
		return newParent;
	}
	personNode* leftRotate(personNode* root)
	{
		personNode* grandchild = root->right->left;
		personNode* newParent = root->right;
		newParent->left = root;
		if (root->parent != nullptr)
		{
			root->parent->right = newParent;
		}
		root->right = grandchild;
		newParent->parent = newParent->left->parent;
		newParent->left->parent = newParent;
		return newParent;
	}
	void setHead(personNode* head)
	{
		this->head = head;
		head->red = 0;
		//head->parent = nullptr;
	}
	void recursiveID(personNode* root, string state, map<int, int>& ids)
	{
		if (root == nullptr)
		{
			cout << "";
		}
		else
		{
			recursiveID(root->left, state, ids);
			if (root->state.compare(state) == 0)
			{
				ids[root->id] += 1;
			}
			recursiveID(root->right, state, ids);
		}
	}
	void recursiveAges(personNode* root, string state, map<int, int>& ages)
	{
		if (root == nullptr)
		{
			cout << "";
		}
		else
		{
			recursiveAges(root->left, state, ages);
			if (root->state.compare(state) == 0)
			{
				ages[root->age] += 1;
			}
			recursiveAges(root->right, state, ages);
		}
	}
	void recursiveIncome(personNode* root, string state, map<int, int>& income)
	{
		if (root == nullptr)
		{
			cout << "";
		}
		else
		{
			recursiveIncome(root->left, state, income);
			if (root->state.compare(state) == 0)
			{
				income[root->income] += 1;
			}
			recursiveIncome(root->right, state, income);
		}
	}
	void recursiveEthnicity(personNode* root, string state, map<string, int>& ethnicity)
	{
		if (root == nullptr)
		{
			cout << "";
		}
		else
		{
			recursiveEthnicity(root->left, state, ethnicity);
			if (root->state.compare(state) == 0)
			{
				ethnicity[root->hispanic] += 1;
			}
			recursiveEthnicity(root->right, state, ethnicity);
		}
	}

public:

	void sortTable(string state, int order, int info)
	{

		if (info == 1) //sort by id
		{
			map<int, int> ids;
			recursiveID(head, state, ids);
			if (order == 1)
			{
				map<int, int>::iterator iter;
				for (iter = ids.begin(); iter != ids.end(); iter++) {
					cout << iter->first << ": " << iter->second << endl;
				}
			}
			else
			{
				map<int, int>::reverse_iterator iter;
				for (iter = ids.rbegin(); iter != ids.rend(); iter++) {
					cout << iter->first << ": " << iter->second << endl;
				}
			}

		}
		else if (info == 2) //sort by age
		{
			map<int, int> ages;
			recursiveAges(head, state, ages);
			if (order == 1)
			{
				map<int, int>::iterator iter;
				for (iter = ages.begin(); iter != ages.end(); iter++) {
					cout << iter->first << ": " << iter->second << endl;
				}
			}
			else
			{
				map<int, int>::reverse_iterator iter;
				for (iter = ages.rbegin(); iter != ages.rend(); iter++) {
					cout << iter->first << ": " << iter->second << endl;
				}
			}
		}
		else if (info == 3) //sort by income
		{
			map<int, int> income;
			recursiveIncome(head, state, income);
			if (order == 1)
			{
				map<int, int>::iterator iter;
				for (iter = income.begin(); iter != income.end(); iter++) {
					cout << iter->first << ": " << iter->second << endl;
				}
			}
			else
			{
				map<int, int>::reverse_iterator iter;
				for (iter = income.rbegin(); iter != income.rend(); iter++) {
					cout << iter->first << ": " << iter->second << endl;
				}
			}
		}
		else //sort by if hispanic
		{
			map<string, int> ethnicity;
			recursiveEthnicity(head, state, ethnicity);
			if (order == 1)
			{
				map<string, int>::iterator iter;
				for (iter = ethnicity.begin(); iter != ethnicity.end(); iter++) {
					cout << iter->first << ": " << iter->second << endl;
				}
			}
			else
			{
				map<string, int>::reverse_iterator iter;
				for (iter = ethnicity.rbegin(); iter != ethnicity.rend(); iter++) {
					cout << iter->first << ": " << iter->second << endl;
				}
			}
		}




	}
	personNode* getHead()
	{
		return head;
	}
	void insert(personNode* root, int id, int age, int income, string state, string hispanic)
	{
		personNode * person = new personNode(id, age, income, state, hispanic);
		person->red = 1;
		if (root == NULL)
		{
			person->red = 0;
			setHead(person);
			person->parent = nullptr;
		}
		else
		{
			 personNode* p = root;
			 personNode* helper = p;
			
			while (p != nullptr)
			{
				helper = p;
				if (p->id < id)
				{
					p = p->right;
				}
				else
				{
					p = p->left;
				}
				
			}
			person->parent = helper;
			if (person->id < helper->id)
			{
				helper->left = person;
			}
			else
			{
				helper->right = person;
			}
			
			rotate(person);
		}
	}

	void rotate(personNode* &root)
	{
			while(root->parent != nullptr)
			{
				if (root->red && root->parent->red)
				{
					if (root->parent->parent->id < root->parent->id) //parent is right child of grandparent
					{
						if (root->parent->parent->left == nullptr) //uncle is null
						{
							if (root->id > root->parent->id) // K is right child of P
							{
								//fix lol
								root = leftRotate(root->parent->parent);
								root->left->red = 1;
								root->red = 0;
								if (root->parent == nullptr)
								{
									setHead(root);
								}
							}
						}
						else if (!root->parent->parent->left->red)
						{
							if (root->id > root->parent->id) // K is right child of P
							{
								root = leftRotate(root->parent->parent);
								root->left->red = 1;
								root->red = 0;
								if (root->parent == nullptr)
								{
									setHead(root);
								}
							}
						}
						else //uncle is red
						{
							root->parent->red = 0;
							root->parent->parent->left->red = 0;
							if (root->parent->parent->parent != nullptr)
							{
								root->parent->parent->red = 1;
							}
						}
					}
				}
				root = root->parent;
				if (root == nullptr)
				{
					break;
				}
					
			}
		}
	};

int main()
{
	RedBlackTree tree;
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
	tree.sortTable("Florida", 2, 4);

}
