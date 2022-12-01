#include <bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node* next;
};

void printdata(Node* x)
{
    while(x != NULL)
    {
        cout << x->data << endl;
        x = x->next;
    }
}

int main()
{
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    one = new Node();
    two = new Node();
    three = new Node();

    one ->data = 1;
    one ->next = two;

    two ->data = 2;
    two->next = three;

    three ->data = 3;
    three ->next = NULL;

    printdata(one);

}