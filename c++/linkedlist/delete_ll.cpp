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
  ~Node()
  {
    cout << "~Node " << data << endl;
    if (next != NULL)
    {
      delete next;
      next = NULL;
    }
  }
};

class List
{
  Node *head;
  Node *tail;

public:
  List()
  {
    head = NULL;
    tail = NULL;
  }
  ~List()
  {
    cout << "\n~List\n";
    if (head != NULL)
    {
      delete head;
      head = NULL;
    }
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
  void insert_node(int val, int pos)
  {
    Node *newNode = new Node(val);

    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
      temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
  }
};

int main()
{
  List LL;
  LL.push_back(1);
  LL.push_back(2);
  LL.push_back(3);

  LL.insert_node(25, 2);
  LL.insert_node(35, 3);
  LL.print_list();

  return 0;
}
