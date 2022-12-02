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

void insertbegain(node*& start, int value)
{
    node* n = new node(value);
    n->next = start;
    start = n;
}
void insertmid(node* start, int key, int value)
{
    node* n = new node(value);
    if(key == start->data)
    {
        n->next = start->next;
        start->next = n;
        return;
    }
    node* temp = start;
    while(temp->data != key)
    {
        temp = temp->next;
        if(temp == NULL)
        {
            return;
        }
    }
    n->next = temp->next;
    temp->next = n;
}

void insertend(node*& start, int value)
{
    node* n = new node(value);
       if(start == NULL)
       {
        start = n;
       }
       node* temp = start;
       while(temp->next != NULL)
       {
        temp = temp->next;
       }
       temp -> next = n;
       n->next = NULL;

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
int main()
{
    node* one = new node(1);
    node* two = new node(4);
    node* three = new node(8);
    one-> next = two;
    two-> next = three;
    cout << "before insert any value list is = ";
    print(one);
    cout << endl;
    insertbegain(one, 10);
    insertbegain(one, 9);
    cout << "after insert any value list is = ";
    print(one);
    cout << endl;
    insertmid(one, 4, 5);
    cout << " after insert at mid list is = ";
    print(one);
    cout << endl;
    insertend(one, 11);
    cout << "after insert at end of list is = ";
    print(one);
    cout << endl;
}