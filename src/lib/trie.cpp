#include <vector>
#include <iostream>
#include "trie.h"

using namespace std;

void Trie::insertString(const string& str)
{
    insertString(str, 0, make_shared<Node>(move(root)));
}
void Trie::insertString(const string& str, int idx, shared_ptr<Node> node)
{
    if(idx >= str.length()) 
    {
        node->terminal = true;
        return;
    }

    bool match = false;
    for(auto& n : node->children)
    {
        if(n->ch == str[idx])
        {
            insertString(str, ++idx, n);
            match = true;
        }
    }
    if(!match)
    {
        auto new_node = make_shared<Node>(str[idx]);
        node->children.push_back(new_node);
        nodes_counter++;
        insertString(str, ++idx, new_node);
    }
}



