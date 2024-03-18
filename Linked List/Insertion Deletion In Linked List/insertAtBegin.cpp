#include<bits/stdc++.h>
using namespace std;

class Node{
    public : 
    int data;
    Node *next;

    Node(int data1,Node *next1){
        data =data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node * arr2LL(vector<int>arr){
    Node *head = new Node(arr[0]);
    Node *temp = head;
    for(int i=1;i<arr.size();i++){
        Node *curr = new Node(arr[i]);
        temp->next = curr;
        temp = curr;
    }

    return head;
}

void traversal(Node *head){
    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node *insertAtStart(Node *head,int val){
    Node *newNode = new Node(val);
    newNode->next = head;
    return newNode;
}

int main(){
    vector<int>arr = {10,11,12};
    Node *head = arr2LL(arr);
    Node *root = insertAtStart(head,9);
    traversal(root);
}