#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
void pushcl(node *start, int data)
{
    node *n = new node();
    node *tmp = start;
    n->data = data;
    n->next = start;
    if (start != NULL)
    {
        while (tmp->next != start)
        {
            tmp = tmp->next;
        }
        tmp->next = n;
    }
    else
    {
        n->next = n;
    }
    start = n;
}
void print(node *start)
{
    node *tmp = start;
    if (start != NULL)
    {
        do
        {
            cout << tmp->data << endl;
            tmp = tmp->next;
        } while (tmp != start);
    }
}

int main()
{
    node *start = NULL;

    pushcl(start, 10);
    pushcl(start, 20);
    pushcl(start, 30);

    cout << "print list is : " << endl;
    print(start);
}