#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
void push(node* start, int value)
{
    node* n = new node(value);
    node* temp = start;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    n->next = NULL;
    temp->next = n;
}

void print(node* start)
{
    while(start != NULL)
    {
        cout << start->data << " ";
        start = start->next;
    }
    cout << endl;
}
void deletelist(node* start, int key)
{
    node* temp = start;
    node* prev = NULL;
    if(temp!=NULL && temp->data == key)
    {
        start = temp->next;
        delete temp;
        return;
    }
    else
    {
        while(temp!= NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if(temp == NULL)
        {
            return;
        }
        prev ->next = temp->next;
        delete temp;
        return;
    }
}
int main()
{
    node* head = NULL;
    // cout << "Enter how much value you want insert in link list : ";
    // int x ;
    // cin >> x;
    // for(int i=1; i<=x; i++)
    // {
    //     int a;
    //     cout << "Enter number "<< i << " value : ";
    //     cin >> a;
    //     push(head, a); 
    // }
    // push(head, 1);
    // push(head, 2);
    // push(head, 3);
    // push(head, 4);
    // push(head, 5);
    node* one = new node(1);
    node* two = new node(4);
    node* three = new node(8);
    one-> next = two;
    two-> next = three;
    cout << "\nAFter insert our link list valu is : ";
    print(one);
    cout << "\nNow inter which value you want to delete : ";
    int b;
    cin >> b;
    deletelist(one, b);
    cout << "\nAfter value our list is : ";
    print(one);

}