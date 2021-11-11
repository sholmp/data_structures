#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

#include "segment_tree.h"



using namespace std;

int main() {


    vector<int> seed = {5,6,2,3,4,7,8,9,10,11,12};

    SegmentTree tree(seed);

    cout << tree;

  return 0;
}