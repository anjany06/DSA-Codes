#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

public:
  Node(int val)
  {
    data = val;
    next = NULL;
  }
};

class List
{
public:
  Node *head;
  Node *tail;

public:
  List()
  {
    head = NULL;
    tail = NULL;
  }

  void push_front(int val)
  {
    Node *newNode = new Node(val);

    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      newNode->next = head;
      head = newNode;
    }
  }
  void print_list()
  {
    Node *temp = head;

    while (temp != NULL)
    {
      cout << temp->data << "->";
      temp = temp->next;
    }
  }
  // brute force approach
  Node *sortColors(Node *head)
  {
    Node *temp = head;
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    while (temp != NULL)
    {
      if (temp->data == 0)
        cnt0++;
      else if (temp->data == 1)
        cnt1++;
      else
        cnt2++;
      temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
      if (cnt0)
      {
        temp->data = 0;
        cnt0--;
      }
      else if (cnt1)
      {
        temp->data = 1;
        cnt1--;
      }
      else
      {
        temp->data = 2;
        cnt2--;
      }
      temp = temp->next;
    }
    return head;
  }
};
int main()
{
  List LL = List();
  LL.push_front(0);
  LL.push_front(1);
  LL.push_front(2);
  LL.push_front(0);
  LL.push_front(1);
  LL.push_front(1);
  LL.push_front(2);
  LL.print_list();
  LL.head = LL.sortColors(LL.head);
  cout << endl;
  LL.print_list();

  return 0;
}
