#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Node{
    int data;
    Node *next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
struct myStack{
    Node *head;
    int size;
    myStack(){
        head=NULL;
        size=0;
    }
    void push(int x)
    {
        Node *temp=new Node(x);
        temp->next=head;
        head=temp;
    }
    int pop()
    {
        if(head==NULL)
            return -1;
        int res=head->data;
        Node *temp=head;
        head=head->next;
        delete(temp);
        return res;
    }
    int peek()
    {
        if(head==NULL)
            return -1;
        return head->data;
    }
    bool isEmpty()
    {
        return (head==NULL);
    }
    void display(){
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;

    }
};
int main()
{
    myStack s;
    s.push(10);
    s.push(50);
    s.push(100);
    s.push(150);
    s.display();
    s.pop();
    s.peek();
    s.display();
    cout<<(s.isEmpty()?"Empty":"Not Empty");
}