/**
 * @file LCRSBinaryTree.cpp
 * @brief Implementation file for the LCRSBinaryTree class
 * @authors Jacob Franco, Zach Gassner, Haley Joerger, Adam Lyday
 */

#include "LCRSBinaryTree.hpp"

/**
 * @brief Stores tokens into a LCRS Binary Tree
 * @param token - A Token object
 * @returns A string of the token type instead of 0, 1, 2, ...
 */


LCRSBinaryTree::LCRSBinaryTree(Token p){
    Node *root = new Node(p);

}

void LCRSBinaryTree::AddSibling(Node *root, Token p){
    if( root->next == nullptr){
        root->next->val = p;
    }

    AddSibling(root->next, p);

}

void LCRSBinaryTree::AddChild(Node *root, Token p){
    if( root->child == nullptr){
        root->child->val = p;
    }

    AddChild(root->child, p);

}

void LCRSBinaryTree::PrintTree(Node *root){

}