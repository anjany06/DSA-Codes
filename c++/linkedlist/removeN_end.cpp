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
  int getSize()
  {
    Node *temp = head;
    int size = 0;
    while (temp != NULL)
    {
      temp = temp->next;
      size++;
    }
    return size;
  }
  void removeNfromEnd(int n)
  {
    Node *prev = head;
    int size = getSize();

    for (int i = 1; i < (size - n); i++)
    {
      prev = prev->next;
    }
    cout << endl
         << "Deleted Node : " << prev->next->data << endl;
    prev->next = prev->next->next;
  }
};
int main()
{
  List LL;
  LL.push_back(1);
  LL.push_back(2);
  LL.push_back(3);
  LL.push_back(4);
  LL.push_back(5);
  LL.push_back(6);

  LL.print_list();
  LL.removeNfromEnd(3);
  cout << endl;
  LL.print_list();

  return 0;
}
