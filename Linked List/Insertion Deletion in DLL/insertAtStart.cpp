#include<bits/stdc++.h>
using namespace std;

class Node{
    public : 
    int data;
    Node *front;
    Node *back;

    Node(int data1,Node *front1,Node *back1){
        data = data1;
        front = front1;
        back = back1;
    }

    Node(int data1){
        data = data1;
        front = nullptr;
        back = nullptr;
    }
};

Node * arr2DLL(vector<int>arr){
    Node * head = new Node(arr[0]);
    Node *prev = head;

    for(int i=1;i<arr.size();i++){
        Node *newNode = new Node(arr[i],nullptr,prev);
        prev->front = newNode;
        prev = newNode;
    }
    return head;
}

Node *insertStart(Node *head,int val){
    Node *newNode = new Node(val,head,nullptr);
    head->back = newNode;
    return newNode;
}

void printDLL(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->front;
    }
}

int main(){

    vector<int>arr = {10,11,12};
    Node* head = arr2DLL(arr);
    Node *newHead = insertStart(head,9);
    printDLL(newHead);
    return 0;
}