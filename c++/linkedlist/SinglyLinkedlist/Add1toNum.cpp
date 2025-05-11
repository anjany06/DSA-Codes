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
  Node *reverse_list(Node *head)
  {
    Node *prev = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
      Node *next = curr->next;

      curr->next = prev;
      prev = curr;
      curr = next;
    }
    head = prev;
    return head;
  }
  Node *Add1toNum(Node *head)
  {
    head = reverse_list(head);
    int carry = 1;
    Node *temp = head;
    while (temp != NULL)
    {
      temp->data += carry;
      if (temp->data < 10)
      {
        carry = 0;
        break;
            }
      else
      {
        temp->data = 0;
        carry = 1;
      }
      temp = temp->next;
    }

    if (carry == 1)
    {
      Node *newNode = new Node(1);
      head = reverse_list(head);
      newNode->next = head;
      return newNode;
    }
    head = reverse_list(head);
    return head;
  }
};
int main()
{
  List LL = List();
  LL.push_front(9);
  LL.push_front(1);
  LL.push_front(1);
  LL.print_list();
  cout << endl;
  LL.head = LL.Add1toNum(LL.head);
  LL.print_list();

  return 0;
}
