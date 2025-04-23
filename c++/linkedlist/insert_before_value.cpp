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

  void push_back(int val)
  {
    Node *newNode = new Node(val);

    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
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

  Node *insert_before_position(Node *head, int ele, int val)
  {
    if (head == NULL)
    {
      return NULL;
    }

    if (head->data == val)
    {
      Node *newHead = new Node(ele);
      newHead->next = head;
      return newHead;
    }

    Node *temp = head;
    while (temp != NULL)
    {

      if (temp->next->data == val)
      {
        Node *newNode = new Node(ele);
        newNode->next = temp->next;
        temp->next = newNode;
        break;
      }
      temp = temp->next;
    }
    return head;
  }
};
int main()
{
  List LL;
  LL.push_back(1);
  LL.push_back(2);
  LL.push_back(3);
  LL.push_back(13);

  LL.print_list();
  cout << endl;
  LL.head = LL.insert_before_position(LL.head, 2, 3);
  LL.print_list();

  return 0;
}
