#include<bits/stdc++.h>
using namespace std;



struct Node
{
    int data;
    Node*next;
    Node(int data):data(data),next(nullptr){};
};

void length(Node*head)
{
    int count=0;
    Node*temp=head;
    while(temp)
    {
        count++;
        temp=temp->next;
    }
    cout<<count;
}

int length2(Node*p)
{
    int count=0;
    return length2(p->next)+1;
}





int main()
{
    Node*head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);

    
    length(head);
    cout<<length2(head);
    
}