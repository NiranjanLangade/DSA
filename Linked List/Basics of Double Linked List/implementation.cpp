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

int main(){
    return 0;
}