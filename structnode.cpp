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
    head->data = 1;
    head->link = NULL;
    cout << head->data;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 234;
    current->link = NULL;
    cout << current->data;
    head->link = current;
    add(head, 67);

    struct node *current1 = (struct node *)malloc(sizeof(struct node));
    current1->data = 567;
    current1->link = NULL;
    cout << current1->data;
}
void add(struct node *head, int data)
{
    struct node *temp;
    temp = new node();
    temp->data = data;
    temp->link -= NULL;
    while (head = NULL)
    {
        head = head->link;
    }
}