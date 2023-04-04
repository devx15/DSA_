#include <iostream>

#include <stdio.h>
using namespace std;

struct node
{
    int data;
    struct node *link;
} *head = NULL;

void createlink(int size)
{
    struct node *newnode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("no memory allocation ");
    }
    else
    {
        printf("enter the data of node 1: ");
        scanf("%d", &data);
        head->data = data;
        head->link = NULL;

        temp = head;

        for (int i = 2; i < size + 1; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode == NULL)
            {
                printf("no memory allocation ");
            }
            else
            {
                printf("enter the data of node %d: ", i);
                scanf("%d", &data);
                newnode->data = data;
                newnode->link = NULL;
                temp->link = newnode;
                temp = temp->link;
            }
        }
    }
}

int count(struct node *head)
{
    int l = 0;
    node *p = new node;
    p = head;
    while (p)
    {
        l++;
        p = p->link;
    }
    return l;
}

void display(struct node *p)
{
    while (p)
    {
        cout << p->data << endl;
        p = p->link;
    }
}

void recursive_display(node *p)
{
    if (p)
    {
        recursive_display(p->link);
        cout << p->data << endl;
    }
}

int sum_of_nodes(struct node *ptr)
{
    ptr = head;
    int sum = 0;
    while (ptr != NULL)
    {
        sum = sum + ptr->data;
        ptr = ptr->link;
    }
    return sum;
}

int recursive_sum(node *p)
{
    int sum = 0;
    if (p == 0)
    {
        return sum;
    }
    else
    {
        return recursive_sum(p->link) + p->data;
    }
}

int maximum_no(struct node *p)
{
    int x = INT16_MIN;
    while (p)
    {
        if (p->data > x)
        {
            x = p->data;
        }
        p = p->link;
    }

    return x;
}

int minimum_no(struct node *p)
{
    int x = INT16_MAX;
    while (p)
    {
        if (p->data < x)
        {
            x = p->data;
        }
        p = p->link;
    }

    return x;
}

struct node *search(struct node *p, int key)
{
    p = head;
    if (p == NULL)
    {
        return NULL;
    }
    if (key==p->data)
    {
        return p;
    }
   return search(p->link, key);
}
// we cannot apply binary search.

// struct node *improve_search(struct node *p, int key)
// {

// }
// we head the node to the front of the ll.so that next time it is found in single comparison.

int main()
{
    createlink(4);

    cout << minimum_no(head) << endl;
    struct node*root;
    root=search(head,8);    
    cout<<root->data<<endl;

    return 0;
}