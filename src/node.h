#ifndef NODE_H
#define NODE_H

#include <iostream>

using std::cout;
using std::endl;

template <typename T>
class Node {
 private:
  int key_ = 0;
  T data_ = 0;
  Node* next_ = nullptr;

 public:
  Node(T data = T()) : data_(data) {}

  void set_next(Node* ptr) { next_ = ptr; }

  void set_data(T data) { data_ = data; }

  Node* next() const { return next_; }

  T data() const { return data_; }

  int key() const { return key_; }

  void display() {
    cout << "Key: " << key_ << endl;
    cout << "Data: " << data_ << endl;
    cout << "Next: " << next_ << endl;
  }
};

#endif
