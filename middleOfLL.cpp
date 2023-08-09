#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node*next;
    Node(int data):data(data),next(nullptr){};
};

void printLL(Node* head)
{
    Node*temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* middle(Node* head)
{
    Node*slow=head;
    Node*fast=head;
    while(fast && fast->next)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

int main()
{
    Node*head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);

    Node*ans=middle(head);

    cout<<ans->data;
}