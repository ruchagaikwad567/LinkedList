#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

//Given a singly linked list and an integer x.Delete xth node from the singly linked list.

struct Node
{
    int data;
    Node*next;
    Node(int data):data(data),next(nullptr){};
};

Node* deleteAtBegin(Node*head)
{
    if(head==NULL)
    {
        return NULL;
    }
    
    Node*temp=head;
    head=head->next;
    delete[]temp;
    
    return head;
}

Node* deleteAtEnd(Node*head)
{
    Node*prev=NULL;
    Node*temp=head;
    //int index=0;
    while(temp->next)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    delete[]temp;
}

Node* deleteInMiddle(Node*head,int x)
{
    Node*prev=NULL;
    Node*temp=head;
    int index=1;
    while(index<x)
    {
        prev=temp;
        temp=temp->next;
        index++;
    }
    prev->next=temp->next;
    delete[]temp;
    return head;
}

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



int main()
{
    Node*head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);

    //Node*ans=deleteNode(head,3);
    Node*ans=deleteAtBegin(head);
    printLL(ans);
}