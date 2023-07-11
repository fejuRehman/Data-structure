// INSERT AT BEGINNING AND END OF OF LINKED LIST  
#include <bits/stdc++.h>                           
using namespace std;
class node
{
public:
    int data;
    node *next;
    node() : next(0) {}
    node(int data) : data(data), next(0) {}
};

void insert_node(node *&head, node *&tail)
{
    int d;
    cin >> d;
    node *temp = new node(d);
    temp->next = head;
    head = temp;
    if (!tail)
    {
        tail = head;
    }
}
void delete_beginning(node* &head, node* &tail)
{
    if (head == NULL)
    {
        cout << "NO ELEMENT IS PRESENT" << endl;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = tail = 0;
    }
    else
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
}
void delete_end(node *&head, node *&tail)
{
    if (head == NULL)
    {
        cout << "NO ELEMENT IS PRESENT" << endl;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = tail = 0;
    }
    else
    {
        node *t = head;
        while (t->next != tail)
        {
            t = t->next;
        }
        delete tail;
        tail = t;
        tail->next = NULL;
    }
}
void print_all(node *head)
{
    while (head!=NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}

int main()
{
    node *head = 0, *tail = 0;    
    for (int i = 0; i < 5; i++)
    {
        insert_node(head, tail);
    }
    delete_beginning(head,tail);
    delete_end(head,tail);
    print_all(head);
    return 0;
}