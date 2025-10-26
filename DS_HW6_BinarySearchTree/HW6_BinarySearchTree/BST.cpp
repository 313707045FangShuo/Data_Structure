#include "pch.h"
#include "BST.h"
#include <queue>
#include <string>
#include <sstream>
#include <vector>
#include <stack> 

Node* BST::insert(Node* node, int val) {
    if (!node) return new Node(val);
    if (val < node->data)
        node->left = insert(node->left, val);
    else if (val > node->data)
        node->right = insert(node->right, val);
    return node;
}

Node* BST::deleteNode(Node* node, int val) {
    if (!node) return nullptr;
    if (val < node->data)
        node->left = deleteNode(node->left, val);
    else if (val > node->data)
        node->right = deleteNode(node->right, val);
    else {
        if (!node->left) {
            Node* temp = node->right;
            delete node;
            return temp;
        }
        else if (!node->right) {
            Node* temp = node->left;
            delete node;
            return temp;
        }
        Node* temp = findMin(node->right);
        node->data = temp->data;
        node->right = deleteNode(node->right, temp->data);
    }
    return node;
}

Node* BST::findMin(Node* node) {
    while (node && node->left) node = node->left;
    return node;
}

bool BST::search(Node* node, int val) {
    if (!node) return false;
    if (val == node->data) return true;
    return val < node->data ? search(node->left, val) : search(node->right, val);
}

void BST::inorder(Node* node, System::String^% result) {
    if (!node) return;
    inorder(node->left, result);
    result += node->data + " ";
    inorder(node->right, result);
}

void BST::preorder(Node* node, System::String^% result) {
    if (!node) return;
    result += node->data + " ";
    preorder(node->left, result);
    preorder(node->right, result);
}

void BST::postorder(Node* node, System::String^% result) {
    if (!node) return;
    postorder(node->left, result);
    postorder(node->right, result);
    result += node->data + " ";
}

void BST::Insert(int val) { root = insert(root, val); }
void BST::Delete(int val) { root = deleteNode(root, val); }
bool BST::Search(int val) { return search(root, val); }

System::String^ BST::Inorder() {
    System::String^ res = "";
    inorder(root, res);
    return res;
}

System::String^ BST::Preorder() {
    System::String^ res = "";
    preorder(root, res);
    return res;
}

System::String^ BST::Postorder() {
    System::String^ res = "";
    postorder(root, res);
    return res;
}

System::String^ BST::Levelorder() {
    if (!root) return "";

    System::String^ result = "";
    std::queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        result += current->data + " ";

        if (current->left) q.push(current->left);
        if (current->right) q.push(current->right);
    }

    return result;
}

int BST::getHeight(Node* node) {
    if (!node) return 0;
    return 1 + std::max(getHeight(node->left), getHeight(node->right));
}

void BST::fillMatrix(Node* node, std::vector<std::string>& mat, int row, int col, int offset) {
    if (!node || row >= mat.size() || col < 0 || col >= mat[0].size()) return;

    std::string val = std::to_string(node->data);
    for (int i = 0; i < val.length() && col + i < mat[0].size(); ++i)
        mat[row][col + i] = val[i];

    if (node->left)
        fillMatrix(node->left, mat, row + 2, col - offset, offset / 2);
    if (node->right)
        fillMatrix(node->right, mat, row + 2, col + offset, offset / 2);
}

std::string BST::DrawTree(Node* node, int depth) {
    int height = getHeight(node);
    int width = (1 << height) * 2; // 畫布寬度
    std::vector<std::string> mat(height * 2, std::string(width, ' '));

    fillMatrix(node, mat, 0, width / 2, width / 4);

    std::string result;
    for (const auto& row : mat)
        result += row + "\n";
    return result;
}

System::String^ BST::Draw() {
    return gcnew System::String(DrawTree(root, 0).c_str());
}

System::String^ BST::InorderNonRecursive() {
    System::String^ result = "";
    std::stack<Node*> stk;
    Node* current = root;

    while (current || !stk.empty()) {
        while (current) {
            stk.push(current);
            current = current->left;
        }
        current = stk.top();
        stk.pop();
        result += current->data + " ";
        current = current->right;
    }
    return result;
}

System::String^ BST::PreorderNonRecursive() {
    System::String^ result = "";
    if (!root) return result;

    std::stack<Node*> stk;
    stk.push(root);

    while (!stk.empty()) {
        Node* current = stk.top();
        stk.pop();
        result += current->data + " ";

        if (current->right) stk.push(current->right);
        if (current->left) stk.push(current->left);
    }
    return result;
}

System::String^ BST::PostorderNonRecursive() {
    System::String^ result = "";
    if (!root) return result;

    std::stack<Node*> s1, s2;
    s1.push(root);

    while (!s1.empty()) {
        Node* current = s1.top(); s1.pop();
        s2.push(current);
        if (current->left) s1.push(current->left);
        if (current->right) s1.push(current->right);
    }

    while (!s2.empty()) {
        result += s2.top()->data + " ";
        s2.pop();
    }

    return result;
}

void BST::InsertNonRecursive(int val) {
    if (!root) {
        root = new Node(val);
        return;
    }

    Node* current = root;
    while (true) {
        if (val < current->data) {
            if (!current->left) {
                current->left = new Node(val);
                return;
            }
            current = current->left;
        }
        else if (val > current->data) {
            if (!current->right) {
                current->right = new Node(val);
                return;
            }
            current = current->right;
        }
        else {
            return; // 若資料已存在則不插入
        }
    }
}



