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
		parent = nullptr;
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
		root->right = grandchild;
		return newParent;
	}
	int balanceFactor(personNode* root)
	{
		int leftHeight = LevelCount(root->left);
		int rightHeight = LevelCount(root->right);
		return (leftHeight - rightHeight);

	}
	int LevelCount(personNode* root)
	{
		if (root == NULL)
		{
			return 0;
		}
		else
		{
			int leftHeight = LevelCount(root->left) + 1;
			int rightHeight = LevelCount(root->right) + 1;
			if (leftHeight >= rightHeight)
			{
				return leftHeight;
			}
			else
			{
				return rightHeight;
			}
		}
	}

	//qualifications for the conditional statements taken from module 4 powerpoint, balanced trees. This helper function rotates the nodes of the tree when neccesary.
	personNode* rotate(personNode* root)
	{
		//if (root->parent->red) //Parent is red
		//{
		//	//check to see if uncle is red case 3.1
		//	if (root->parent->parent->id < root->parent->id) //parent is right child of grandparent
		//	{
		//		if (root->parent->parent->left->red) //uncle is red
		//		{
		//			root->parent->red = 0;
		//			root->parent->parent->left->red = 0;
		//			if (root->parent->parent->parent != nullptr)
		//			{
		//				root->parent->parent->red = 1;
		//			}

		//		}
		//		else //uncle is black or nullptr
		//		{
		//			if (root->id > root->parent->id) // K is right child of P
		//			{
		//				leftRotate(root->parent->parent);
		//			}
		//			else //K is left child of P
		//			{

		//			}
		//			//3.2.1
		//			// 
		//		}
		//	}
		//	else //parent is left child of grandparent
		//	{
		//		if (root->parent->parent->right->red) //uncle is red
		//		{
		//			root->parent->red = 0;
		//			root->parent->parent->right->red = 0;
		//			if (root->parent->parent->parent != nullptr)
		//			{
		//				root->parent->parent->red = 1;
		//			}
		//		}
		//	}
		//	//case 3.1 over, case 3.2 below

		//}
		int balanceF = balanceFactor(root);
		if (balanceF > 1)
		{
			if (balanceFactor(root->left) > 0)
			{
				root = rightRotate(root);
			}
			else
			{
				personNode* newParent = leftRotate(root->left);
				root->left = newParent;
				root = rightRotate(root);
			}
		}
		else if (balanceF < -1)
		{
			if (balanceFactor(root->right) > 0)
			{
				personNode* newParent = rightRotate(root->right);
				root->right = newParent;
				root = leftRotate(root);
			}
			else
			{
				root = leftRotate(root);
			}
		}
		return root;
	}

	void setHead(personNode* head)
	{
		this->head = head;
		head->red = 0;
		head->parent = nullptr;
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
	personNode* insert(personNode* root, int id, int age, int income, string state, string hispanic)
	{

		if (root == NULL)
		{
			if (head == NULL)
			{

				root = new personNode(id, age, income, state, hispanic);
				setHead(root);
				return root;
			}
			else
			{
				return new personNode(id, age, income, state, hispanic);

			}

		}
		else if (root->id < id)
		{
			root->right = insert(root->right, id, age, income, state, hispanic);
			root->right->parent = root;
			root = rotate(root);
		}
		else if (root->id > id)
		{
			root->left = insert(root->left, id, age, income, state, hispanic);
			root->left->parent = root;
			root = rotate(root);
		}
		if (LevelCount(root) > LevelCount(head))
		{
			head->red = 1;
			setHead(root);
		}
		return root;
	}

};

/*int main()
{
	RedBlackTree tree;
	ifstream inFile("censusdata1.csv");
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
*/
