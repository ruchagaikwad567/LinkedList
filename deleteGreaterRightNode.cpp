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

Node *compute(Node *head)
    {
        Node*temp=head;
        if(!head || !head->next)
        {
            return head;
        }
        
        while(temp->next!=NULL)
        {
            if(temp->next->data>temp->data)
            {
                temp->data=temp->next->data;
                temp->next=temp->next->next;
                temp=head;
            }
            else
            {
                temp=temp->next;
            }
        }
        return head;
        // your code goes here
    }

  int main()
  {
    int k;
    cin>>k;
    Node*head=NULL;
    Node*temp=head;
    for(int i=0;i<k;i++)
    {
        int data;
        cin>>data;
        if(head==NULL)
        {
            head=temp=new Node(data);

        }
        else
        {
            temp->next=new Node(data);
            temp=temp->next;
        }
    }
    Node*res=compute(head);
    printLL(head);
  } 
