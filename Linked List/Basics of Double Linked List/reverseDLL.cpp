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

Node *reverseDLL1(Node *head){
    if(head==nullptr || head->front==nullptr) return head;

    stack<int>st;
    Node *temp = head;
    while(temp){
        st.push(temp->data);
        temp = temp->front;
    }
    temp = head;
    while(temp){
        temp->data = st.top();
        st.pop();
        temp = temp->front;
    }
    return head;
}

Node *reverseDLL2(Node *head){
    if(head==nullptr || head->front==nullptr) return head;
    Node *temp = nullptr;
    Node *curr = head;

    while(curr){
        temp = curr->back;
        curr->back = curr->front;
        curr->front = temp;
        curr = curr->back;
    }
    return temp->back;
}

void printDLL(Node *head){
    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->front;
    }
    cout<<endl;
}

int main(){

    vector<int>arr = {10,11,12};
    Node* head = arr2DLL(arr);
    printDLL(head);
    Node *head1 = reverseDLL1(head);
    printDLL(head1);
    Node *head2 = reverseDLL2(head);
    printDLL(head2);
    return 0;
}