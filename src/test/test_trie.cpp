#include "trie.h"
#include <iostream>
#include <gtest/gtest.h>

using namespace std;


TEST(GoodInput, correctCounts)
{
    Trie trie;
    trie.insertString("foo");
    trie.insertString("bar");

    EXPECT_EQ(trie.nodes_counter, 6); 
}


TEST(GoodInput, correctCountsTwo)
{
    Trie trie;
    trie.insertString("mus");
    trie.insertString("musling");
    trie.insertString("goblin");
    trie.insertString("gobling");

    EXPECT_EQ(trie.nodes_counter, 14);
}

