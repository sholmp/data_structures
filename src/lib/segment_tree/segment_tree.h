#include <vector>
#include <ostream>
#include "node.h"

// struct Node;

class SegmentTree
{

public:
    SegmentTree(const std::vector<int>& input);

private:
    std::vector<Node> createUpperLayer(std::vector<Node>& lowerLayer);
    friend std::ostream& operator<<(std::ostream& out, const SegmentTree& tree);

private:
    std::vector<std::vector<Node>> layers_;
    std::vector<Node> nodes_;




};