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

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node*curr=head;
    
    while(curr->next)
    {
        
        if(curr->data==curr->next->data)
        {
            Node*temp=curr->next;
            curr->next=temp->next;
            delete temp;
            
        }
        else
        {
            curr=curr->next;
        }
        
    }
    return head;
 // your code goes here
}

int main()
{
    Node*head=new Node(1);
    head->next=new Node(3);
    head->next->next=new Node(3);
    head->next->next->next=new Node(3);
    head->next->next->next->next=new Node(5);

    Node*ans=removeDuplicates(head);

    printLL(ans);
}
