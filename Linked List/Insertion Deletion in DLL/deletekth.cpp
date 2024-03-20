#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* front;
    Node* back;

    Node(int data1, Node* front1, Node* back1) {
        data = data1;
        front = front1;
        back = back1;
    }

    Node(int data1) {
        data = data1;
        front = nullptr;
        back = nullptr;
    }
};

Node* arr2DLL(vector<int> arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* newNode = new Node(arr[i], nullptr, prev);
        prev->front = newNode;
        prev = newNode;
    }
    return head;
}

void deletekth(Node* head, int k) {
    int cnt = 0;
    Node* temp = head;
    while (temp) {
        ++cnt;
        if (cnt == k)
            break;
        temp = temp->front;
    }
    if (temp == nullptr) {
        cout << "Invalid k value" << endl;
        return;
    }
    Node* prev = temp->back;
    Node* next = temp->front;
    if (prev)
        prev->front = next;
    if (next)
        next->back = prev;
    temp->front = nullptr;
    temp->back = nullptr;
    delete temp;
}

void printDLL(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->front;
    }
}

int main() {
    vector<int> arr = {10, 11, 12};
    Node* head = arr2DLL(arr);
    deletekth(head, 1); // Delete node at position 1 (0-indexed)
    printDLL(head);
    return 0;
}
