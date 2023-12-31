
// self-referential structure
#include <iomanip>
class Node {
private:
  int value;
  Node *nextPtr;
  Node *pPtr; // for doubly linked list

public:
  Node(int x = 0);
  ~Node();
  Node *get_next();
  int get_data();
  void set_next(Node *t);
  void print();
  Node *get_previous();
  void set_prev();

  // for doubly linked list
  Node *get_prev();
  void set_prev(Node *t);
};

typedef Node *NodePtr; // synonym for Node*

Node::Node(int x) {
  value = x;
  nextPtr = NULL;
  pPtr = NULL;
}

Node::~Node() { cout << value << " deleted" << endl; }

NodePtr Node::get_next() { return nextPtr; }

int Node::get_data() { return value; }

void Node::set_next(NodePtr t) { this->nextPtr = t; }

void Node::set_prev(Node *t) { this->pPtr = t; }

Node *Node::get_prev() { return pPtr; }

void Node::print() { cout << setw(3) << value; }
