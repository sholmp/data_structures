#include <string>
#include <vector>
#include <memory>


class Trie
{
public:
    Trie() = default;
    void insertString(const std::string& str);
    int nodes_counter = 0;

private:
    struct Node
    {
        Node(): Node('\0'){}
        Node(char ch): ch(ch){}

        char ch;
        bool terminal = false;
        std::vector<std::shared_ptr<Node>> children;
    };
    Node root;
    void insertString(const std::string& str, int idx, std::shared_ptr<Node> node);
    
};