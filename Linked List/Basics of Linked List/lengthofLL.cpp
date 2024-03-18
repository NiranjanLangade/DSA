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

int lengthofLL(Node * head){
    Node *temp = head;
    int cnt = 0;
    while(temp){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int main(){
    vector<int>arr = {10,11,12,13};
    Node *head = arr2LL(arr);
    int length = lengthofLL(head);
    cout<<length<<endl;
    
}