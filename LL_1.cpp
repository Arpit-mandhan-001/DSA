#include<bits/stdc++.h>
using namespace std;


class Node {
    public: int data;
    Node* next;
    public:
     Node(int data1, Node *next1){
        data= data1;
        next= next1;
     }
     Node(int data1){
        data=data1;
        next=nullptr;
     }
};

Node* insert(Node* head, int val){
    Node* temp= new Node(val, head);
    return temp;
}

void printll(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head= head->next;
    }
}



int main(){
    vector<int> arr={2,3,4,5,9,8};
    int val= 100;

    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    head->next->next->next->next = new Node(arr[4]);
    head->next->next->next->next->next = new Node(arr[5]);


    head= insert(head, val);

    printll(head);

}