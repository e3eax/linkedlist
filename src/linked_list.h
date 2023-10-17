#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <functional>
#include <vector>

#include "node.h"

using std::cout;
using std::endl;
using std::function;
using std::invalid_argument;
using std::string;
using std::vector;

template <typename T>
class LinkedList {
 private:
  Node<T>* head_ = nullptr;
  Node<T>* tail_ = nullptr;

  void append(Node<T>* p_node) {
    if (tail_ != nullptr) {
      tail_->set_next(p_node);
      tail_ = tail_->next();
    } else {
      head_ = p_node;
      tail_ = head_;
    }
  }

 public:
  LinkedList(vector<T> v = {}, Node<T>* n = nullptr) : head_(n) {
    if (v.size()) {
      for (int i = 0; i < v.size(); i++) {
        Node<T>* p_node = new Node<T>(v.at(i));
        this->append(p_node);
      }
    }
  }

  void set_head(Node<T>* n) { head_ = n; }

  void append(T data) {
    Node<T>* p_node = new Node<T>(data);

    if (tail_ != nullptr) {
      tail_->set_next(p_node);
      tail_ = tail_->next();
    } else {
      head_ = p_node;
      tail_ = head_;
    }
  }

  void traverse(const function<void(T data)>& callback) {
    if (!callback) {
      throw invalid_argument(
          "callback function is not valid or was not provided");
    }

    Node<T>* p_node = head_;

    while (p_node) {
      callback(p_node->data());
      p_node = p_node->next();
    }
  }

  void print_all() {
    Node<T>* p_node = head_;

    while (p_node) {
      cout << p_node->data() << endl;
      cout << p_node->next() << endl;
      p_node = p_node->next();
    }
  }
};

#endif
