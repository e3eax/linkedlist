#ifndef NODE_H
#define NODE_H

#include <iostream>

using std::cout;
using std::endl;

template <typename T>
class Node {
 private:
  int _key = 0;
  T _data = 0;
  Node* _next = nullptr;

 public:
  Node(T data = T()) : _data(data) {}

  void set_next(Node* ptr) { _next = ptr; }

  void set_data(T data) { _data = data; }

  Node* next() const { return _next; }

  T data() const { return _data; }

  int key() const { return _key; }

  void display() {
    cout << "Key: " << _key << endl;
    cout << "Data: " << _data << endl;
    cout << "Next: " << _next << endl;
  }
};

#endif
