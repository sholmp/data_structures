#ifndef NODE_H
#define NODE_H

struct Node{

    Node(Node* l, Node* r, int sum): left(l), right(r), sum(sum)
    {}

    int sum;
    Node* left;
    Node* right;

};

#endif