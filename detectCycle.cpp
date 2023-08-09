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

bool isCycle(Node* head)
{
    Node*fast=head;
    Node*slow=head;

    if(head==NULL || head->next==NULL) return 0;

    while(fast->next && fast->next->next)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    Node*head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    head->next->next->next->next->next=head->next->next;//creating a loop


    isCycle(head)==1?cout<<"YES":cout<<"NO";

    
}