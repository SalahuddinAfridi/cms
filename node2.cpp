#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};
void add(struct node *head, int data);
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 0;
    head->link = NULL;
    cout << head->data;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 123;
    current->link = NULL;
    cout << current->data;
    head->link = current;
    add(head, 30);

    struct node *current1 = (struct node *)malloc(sizeof(struct node));
    current1->data = 456;
    current->link = NULL;
    cout << current1->data;
    head->link = current1;

    struct node *current2 = (struct node *)malloc(sizeof(struct node));
    current2->data = 78910;
    current2->link = NULL;
    cout << current2->data;
    head->link = current2;
}
void add(struct node *head, int data)
{
    struct node *temp;
    temp = new node();
    temp->data = data;
    temp->link = NULL;
    while (head = NULL)
    {
        head = head->link;
    }
}
