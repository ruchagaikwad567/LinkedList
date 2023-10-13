#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node*next;
    Node(int data):data(data),next(nullptr){};
};

void display(Node*head)
{
    Node*temp=head;
    do
    {
        cout<<temp->data;
        temp=temp->next;
    }
    while (temp!=head);
    
    

}

void display2(Node*head)
{
    Node*temp=head;
    static int flag=0;
    if(temp!=head||flag==0)
    {
        flag=1;
        cout<<temp->data;
        display(temp->next);


    }
    flag=0;

}

int main()
{
     Node*head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);

    display2(head);


}