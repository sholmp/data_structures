#include <cmath>
#include "segment_tree.h"


using namespace std;

SegmentTree::SegmentTree(const std::vector<int> &input) {
  int numberOfNodes = pow(2, ceil(log2(input.size())));
  vector<Node> layer(numberOfNodes, Node(nullptr, nullptr, 0));

  for (int i = 0; i < input.size(); i++)
    layer[i] = Node(nullptr, nullptr, input[i]);

  layers_.push_back(layer);

  while (layers_.back().size() > 1) {
    layer = createUpperLayer(layers_.back());
    layers_.push_back(layer);
  }
}

vector<Node> SegmentTree::createUpperLayer(vector<Node> &lowerLayer) {
  vector<Node> upperLayer{};
  for (int i = 0; i < lowerLayer.size(); i += 2) {
    Node parent(&lowerLayer[i], &lowerLayer[i + 1],
                lowerLayer[i].sum + lowerLayer[i + 1].sum);
    upperLayer.push_back(parent);
  }

  return upperLayer;
}

ostream &operator<<(ostream &out, const SegmentTree &tree) {

  for (auto rit = tree.layers_.rbegin(); rit != tree.layers_.rend(); rit++) {
    for (const auto &n : *rit) {
      out << n.sum << ", ";
    }
    out << endl;
  }

  return out;
}
