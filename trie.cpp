#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define char_int(c) ((int)c - (int)'A')

#define SIZE (26)

#define M 3
#define N 3

struct TrieNode
{
    TrieNode *Child[SIZE];

    bool leaf;
};

TrieNode *getNode()
{
    TrieNode * newNode = new TrieNode;
    newNode->leaf = false;
    for(int i = 0;i<SIZE;i++){
        newNode -> Child[i] = NULL;
    return newNode;
    }
};

