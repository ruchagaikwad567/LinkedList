#include<bits/stdc++.h>
using namespace std;

//Given a singly linked list and an integer x.Delete xth node from the singly linked list.

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

Node*deleteNode(Node*head,int x)
{
    Node *temp=head;
    if(x==1)
    {
        temp=head;
        head=head->next;
        delete[] temp;
        return head;
    }
    Node *prev=NULL;
    int i=1;
    for(i=1;i<x;i++)
    {
        prev=temp;
        temp=temp->next;
        
    }
    
    prev->next=temp->next;
    delete[] temp;
    return head;
}

int main()
{
    Node*head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);

    Node*ans=deleteNode(head,3);
    printLL(ans);
}