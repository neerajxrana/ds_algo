#include <bits/stdc++.h>
using namespace std;
#include "Node.cpp"

Node *head = NULL;

void addNode(Node *head){
	int data;
	cin >> data;
	Node *n = new Node(data);
	if(head == NULL) head = n;
	else{
		Node *temp = head;
		while(temp->next != NULL){
			temp = temp->next;	
		}
		temp->next = n;
	}
}

void print(Node *head){
    Node *p = head;
    while(p != NULL){
       cout << p->data << "-->";
	   p = p->next;
    }
}

int main() {
	for(int i=0;i<6;i++) addNode(head);
    print(head);
    return 0;
}
