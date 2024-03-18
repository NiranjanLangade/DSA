#include<bits/stdc++.h>
using namespace std;

struct Node {
    public: 
    int data;
    Node* next;

    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }

};

Node* arr2LL(vector<int>arr){
    Node * head = new Node(arr[0]);
    Node *temp = head;
    for(int i=1;i<arr.size();i++){
        Node *curr = new Node(arr[i]);
        temp->next = curr;
        temp = curr;
    }
    return head;
}

bool search(Node *head,int target){
    Node *temp = head;
    int cnt = 0;
    while(temp){
        if(temp->data==target) return true;
        temp = temp->next;
    }
    return false;
}

int main(){
    vector<int>arr = {10,11,12,13};
    Node *head = arr2LL(arr);
    cout<<search(head,14)<<endl;
    
}