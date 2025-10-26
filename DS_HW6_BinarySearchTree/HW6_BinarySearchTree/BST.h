#pragma once
using namespace System;
#include <string>
#include <vector>

struct Node {
	int data;
	Node* left;
	Node* right;
	Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BST {
private:
	Node* root;
	Node* insert(Node* node, int val);
	Node* deleteNode(Node* node, int val);
	Node* findMin(Node* node);
	bool search(Node* node, int val);
	void inorder(Node* node, String^% result);
	void preorder(Node* node, String^% result);
	void postorder(Node* node, String^% result);
	std::string DrawTree(Node* node, int depth);
	int getHeight(Node* node);
	void fillMatrix(Node* node, std::vector<std::string>& mat, int row, int col, int offset);


public:
	BST() : root(nullptr) {}
	void Insert(int val);
	void Delete(int val);
	bool Search(int val);
	String^ Inorder();
	String^ Preorder();
	String^ Postorder();
	String^ Levelorder();
	System::String^ Draw();
	// === Non-Recursive Features ===
	void InsertNonRecursive(int val);          
	String^ InorderNonRecursive();
	String^ PreorderNonRecursive();
	String^ PostorderNonRecursive(); 
};
