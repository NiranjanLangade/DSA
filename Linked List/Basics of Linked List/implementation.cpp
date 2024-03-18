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

};

int main(){
    int arr[] = {10,11,12,13};
    Node *y = new Node(arr[0],nullptr);
    cout<<y<<endl;
}