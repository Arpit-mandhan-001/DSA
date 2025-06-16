#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {

        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *convertDll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
    
}

void print(Node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}


Node* deletehead(Node* head){

    if(head==NULL || head->next==NULL)  return NULL;

    Node* prev=head;
    head= head->next;

    head->back= nullptr;
    prev->next= nullptr;

    delete prev;
    return head;
}

Node* deletetail(Node* head){

    if(head==NULL || head->next==NULL)  return NULL;

Node* temp= head;
while(temp->next!= NULL){
    temp=temp->next;
}
Node* newtail= temp->back;
newtail->next= nullptr;
temp->back=nullptr;

delete temp;
return head;
}

Node* removeKthelement(Node*head,int k){
    if(head==NULL) return NULL;

    int cnt=0;
    Node* knode= head;

    while(knode != NULL){
        cnt++;
        if(cnt==k) break;
        knode= knode->next;
    }
    Node* prev = knode->back;
    Node* front = knode->next;

    if(prev== NULL && front==NULL) return NULL;
    else if(prev==NULL) return deletehead(head);
    else if(front==NULL) return deletetail(head);
    
    prev->next=front;
    front->back=prev;

    knode->back=nullptr;
    knode->next=nullptr;
    
    delete(knode);
    return head;
}

Node* removenodeelement(Node* temp){
      
      Node* prev= temp->back;
      Node* front= temp->next;

      if(front==NULL){
        prev->next= nullptr;
        front->back= nullptr;
      }

      prev->next= front;
      front->back= prev;

      temp->next = temp->back= nullptr;
      delete temp;

}

int main()
{
    vector<int> arr = {1, 2 ,55, 3, 4};
    int k=2;
    Node *head = convertDll(arr);// convert array into doubly linked list
    // head= deletehead(head);
    // head= deletetail(head);
    // head= removeKthelement(head,k);
    removenodeelement(head->next->next);

    print(head);
    return 0;
}