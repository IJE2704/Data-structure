#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void push(node **start, int data)
{
    node *n = new node();
    n->data = data;
    n->next = *start;
    if (*start != NULL)
    {
        node *tmp = *start;
        while (tmp->next != *start)
        {
            tmp = tmp->next;
        }
        tmp->next = n;
    }
    else
    {
        n->next = n;
        *start = n;
    }
}

void insertbegin(node **start, int data)
{
    node *n = new node();
    n->data = data;
    n->next = *start;
    if (*start != NULL)
    {
        node *tmp = *start;
        while (tmp->next != *start)
        {
            tmp = tmp->next;
        }
        tmp->next = n;
        *start = n;
    }
    else
    {
        n->next = n;
        *start = n;
    }
}
void insertend(node **start, int data)
{
    node *n = new node();
    n->data = data;
    n->next = *start;
    if (*start != NULL)
    {
        node *tmp = *start;
        while (tmp->next != *start)
        {
            tmp = tmp->next;
        }
        tmp->next = n;
    }
    else
    {
        n->next = n;
        *start = n;
    }
}
void insertmid(node **start, int data, int item)
{
    node *n = new node();
    n->data = data;
    n->next = NULL;
    if (*start != NULL)
    {
        node *tmp = *start;
        node *ptr = NULL;
        while (tmp->next != *start)//traverse full
        {
            if (tmp->data == item)
            {
                // tmp = ptr;
                ptr = tmp;
                tmp = tmp->next;
                break;
            }
            else
            {
                tmp = tmp->next;
            }
        }
        ptr->next = n;
        n->next = tmp;
    }
    else
    {
        n->next = n;
        *start = n;
    }
}
void print(node* start)
{
     node* tmp = start;
     if(start != NULL)
     {
        do
        {
            cout << tmp->data << endl;
            tmp = tmp->next;
        } while (tmp!=start);
        
     }
}
int main()
{
    node *start = NULL;

    push(&start, 10);
    push(&start, 20);
    push(&start, 30);

    cout << "print list is : " << endl;
    print(start);
    insertbegin(&start,40);
    insertend(&start,50);
    insertmid(&start,70,20);
    cout << "print list is : " << endl;
    print(start);
}