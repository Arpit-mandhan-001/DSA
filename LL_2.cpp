#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *insert(Node *head, int val)
{
    Node *temp = new Node(val, head);
    return temp;
}

void printll(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *removehead(Node *head)
{

    if (head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node *removetail(Node *head)
{

    if (head == NULL || head->next == NULL)
        return NULL;

    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node *removekth(Node *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    Node *previous = NULL;

    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            previous->next = previous->next->next;
            free(temp);
            break;
        }
        previous = temp;
        temp = temp->next;
    }
    return head;
}

Node *removeele(Node *head, int ele)
{
    if (head == NULL)
        return head;
    if (ele == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node *temp = head;
    Node *previous = NULL;

    while (temp != NULL)
    {

        if (temp->data == ele)
        {
            previous->next = previous->next->next;
            free(temp);
            break;
        }
        previous = temp;
        temp = temp->next;
    }
    return head;
}

bool searchKey(Node *head, int ele)// this one is bool function to find element in LL
{
    // Code here
    if (head == nullptr)
        return false;

    if (head->data == ele)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return true;
    }

    Node *temp = head;
    Node *previous = NULL;

    while (temp != NULL)
    {

        if (temp->data == ele)
        {
            previous->next = previous->next->next;
            free(temp);
            return true;
            break;
        }
        previous = temp;
        temp = temp->next;
    }
    return false;
}

Node* inserthead(Node* head, int val){
    Node* temp= new Node(val, head);
    return temp;
}

Node* inserttail(Node*head, int val){

if(head==NULL) return new Node(val);
Node* temp=head;

while(temp->next!=NULL){
    temp= temp->next;
}
Node* newNode=new Node(val);
temp->next= newNode;
return head;
}


Node* insertkth(Node*head, int val, int k){
    if(head==NULL){
        if(k==1) return new Node(val);
        else return NULL;
    }
    if(k==1){
        Node* temp= new Node(val, head);
        return temp;
    }
    int cnt=0;
    Node* temp= head;

    while(temp!=NULL){
        cnt++;

        if(cnt==k-1){
            Node* x= new Node(val, temp->next);
            temp->next=x;
            break;
        }
       temp= temp->next;
    }
    return head;
}

Node* insertbeforeelement(Node* head, int ele, int val){
     if(head==NULL){
   return NULL;
    }

    if(head->data==ele){
        Node* temp= new Node(val, head);
        return temp;
    }
    Node* temp= head;

    while(temp->next !=NULL){
       

        if(temp->next->data==ele){
            Node* x= new Node(val, temp->next);
            temp->next=x;
            break;
        }
       temp= temp->next;
    }
    return head;
}



int main()
{
    vector<int> arr = {2, 3, 4, 5, 9, 8};
    int val = 100;
    int k = 3;
    int ele = 9;
    Node *head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    head->next->next->next->next = new Node(arr[4]);
    head->next->next->next->next->next = new Node(arr[5]);

// --->> this one is for deleting

    // head = removehead(head);
    // head = removetail(head);
    // head= removekth(head,k);
    // head= removeele(head,ele);
    // cout<< searchKey(head,ele);   --=> this one is for searching the ele is there or not

// --->> this one is for inserting one 

    // head=inserthead(head, val);
    // head=inserttail(head, val)
    // head=insertkth(head, val, k);
    // head=insertbeforeelement(head, ele, val);

    printll(head);

}