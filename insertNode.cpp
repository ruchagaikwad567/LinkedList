#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
    node(int data):data(data),next(nullptr){};

};

void printLL(node *head)
{
    node*temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;


}

void insertAtBegin(node*& head,int data)
{
    node*t=new node(data);
    t->next=head;
    head=t;

}

void insertAtEnd(node*&head,int data)
{
    node*t=new node(data);
    
    
    node*temp=head;
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=t;
    t->next=NULL;
}

void insertInMiddle(node*&head,int data,int pos)
{
    node*temp=head;
    node*t=new node(data);
    int i=0;
    for(i=0;i<pos-1;i++)
    {
        temp=temp->next;

    }
    t->next=temp->next;
    temp->next=t;

}

int main()
{
    node*head=new node(7);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=new node(5);

    insertAtEnd(head,10);
    insertInMiddle(head,80,3);
    printLL(head);

}