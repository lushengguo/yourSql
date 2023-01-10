#pragma once

template <typename Node> class BpTree {
public:
  Node *Search();
  void Insert(Node &node);
  void Erase(Node &node);
};