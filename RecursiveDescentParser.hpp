/**
 * @file RecursiveDescentParser.hpp
 * @brief Defines the RecursiveDescentParser class
 * @authors Jacob Franco, Zach Gassner, Haley Joerger, Adam Lyday 
 */

#ifndef RECURSIVE_DESCENT_PARSER_HPP
#define RECURSIVE_DESCENT_PARSER_HPP

#include "IgnoreComments.hpp"
#include "Tokenization.hpp"
#include <iostream>
#include <vector>

using namespace std;

/**
 * @class RecursiveDescentParser
 * @brief 
 */
class RecursiveDescentParser {
public:
    /**
     * @brief Constructor
     * @param tokens - A vector of tokens from a C-style program 
     */
    RecursiveDescentParser(const vector<Token>& tokens);

private:

};

#endif