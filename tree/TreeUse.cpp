#include <bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeInputLevelWise() {
	int rootData;
	cout << "Enter root data: " << endl;
	cin >> rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);

	queue<TreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size() != 0) {
		TreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter no. of children of " << front->data << endl;
		int numChild;
		cin >> numChild;

		for(int i=1;i<=numChild;i++) {
			int childData;
			cout << "Enter " << i << "th child of " << front->data << endl;
			cin >> childData;
			TreeNode<int>* child = new TreeNode<int>(childData);
			front->children.push_back(child);
			pendingNodes.push(child);
		}
	}

	return root;
}

TreeNode<int>* takeInput() {
	int rootData;
	cout << "Enter data:" << endl;
	cin >> rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);

	int n;
	cout << "Enter no. of children of " << rootData << endl;
	cin >> n;

	for(int i=0;i<n; i++) {
		TreeNode<int>* child = takeInput();
		root->children.push_back(child);
	}

	return root;
}

void printTree(TreeNode<int>* root) {

	if(root == NULL) {
		return;
	}

	queue<TreeNode<int>*> pendingNodes;
	pendingNodes.push(root);

	while(pendingNodes.size() != 0){
		TreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout << front->data << ":";
		for(int i=0;i<front->children.size();i++) {
			pendingNodes.push(front->children[i]);
			cout << front->children[i]->data << ",";
		}
		cout << endl;
	}
}

int countNodes(TreeNode<int>* root) {
	if(root == NULL) return 0;
	int ans = 1;
	for(int i=0;i<root->children.size();i++) {
		ans += countNodes(root->children[i]);
	}
	return ans;
}

int treeSum(TreeNode<int>* root) {
	int ans = root->data;
	for(int i=0;i<root->children.size();i++) {
		ans += treeSum(root->children[i]);
	}
	return ans;
}

int maxNode(TreeNode<int>* root) {
	int mx = root->data;
	for(int i=0;i<root->children.size();i++) {
		return max(mx, root->children[i]->data);
	}
	return mx;
}

// int treeHeight(TreeNode<int>* root) {

// }

int main(){

	TreeNode<int>* root = takeInputLevelWise();
	printTree(root);
	cout << "No of nodes: " << countNodes(root) << endl;
	cout << "Sum of nodes: " << treeSum(root) << endl;
	cout << "Max node value: " << maxNode(root) << endl;
	

	return 0;
}
