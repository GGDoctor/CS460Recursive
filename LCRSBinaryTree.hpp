/**
 * @file LCRSBinaryTree.hpp
 * @brief Defines the LCRSBinaryTree class
 * @authors Jacob Franco, Zach Gassner, Haley Joerger, Adam Lyday 
 */

#ifndef LCRS_BINARY_TREE_HPP
#define LCRS_BINARY_TREE_HPP

#include "IgnoreComments.hpp"
#include "Tokenization.hpp"
#include "Node.hpp"
#include <iostream>
#include <vector>

using namespace std;

/**
 * @class LCRSBinaryTree
 * @brief 
 */

class LCRSBinaryTree {
public:
    /**
     * @brief Constructor
     * @param null
     */
    LCRSBinaryTree(Token p);

    void AddSibling(Node *root, Token p);

    void AddChild(Node *root, Token p);

    void PrintTree(Node *root);

private:

};

#endif