/**
 * @file NODE.hpp
 * @brief Defines the Node class
 * @authors Jacob Franco, Zach Gassner, Haley Joerger, Adam Lyday 
 */

#ifndef NODE_HPP
#define NODE_HPP

#include "IgnoreComments.hpp"
#include "Tokenization.hpp"
#include <iostream>
#include <vector>

using namespace std;

/**
 * @class Node
 * @brief 
 */
class Node
{
public:
    Token val;
    Node *child;
    Node *next;
    Node(Token P)
    {
        val = P;
        child = NULL;
        next = NULL;
    }

    
};
#endif