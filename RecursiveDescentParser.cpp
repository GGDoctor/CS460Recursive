/**
 * @file RecursiveDescentParser.cpp
 * @brief Implementation file for the RecursiveDescentParser class
 * @authors Jacob Franco, Zach Gassner, Haley Joerger, Adam Lyday
 */

#include "RecursiveDescentParser.hpp"

/**
 * @brief Returns string version of token type
 * @param token - A Token object
 * @returns A string of the token type instead of 0, 1, 2, ...
 */
auto toTokenType(Token token) {
    switch (token.type) {
        case IDENTIFIER:
            return "IDENTIFIER";

        case INTEGER:
            return "INTEGER";

        case STRING:
            return "STRING";

        case LEFT_PARENTHESIS:
            return "LEFT_PARENTHESIS";

        case RIGHT_PARENTHESIS:
            return "RIGHT_PARENTHESIS";

        case LEFT_BRACKET:
            return "LEFT_BRACKET";

        case RIGHT_BRACKET:
            return "RIGHT_BRACKET";

        case LEFT_BRACE:
            return "LEFT_BRACE";

        case RIGHT_BRACE:
            return "RIGHT_BRACE";

        case DOUBLE_QUOTE:
            return "DOUBLE_QUOTE";

        case SINGLE_QUOTE:
            return "SINGLE_QUOTE";

        case SEMICOLON:
            return "SEMICOLON";

        case COMMA:
            return "COMMA";

        case ASSIGNMENT:
            return "ASSIGNMENT";

        case PLUS:
            return "PLUS";

        case MINUS:
            return "MINUS";

        case DIVIDE:
            return "DIVIDE";

        case ASTERISK:
            return "ASTERISK";

        case MODULO:
            return "MODULO";

        case CARAT:
            return "CARAT";

        case LT:
            return "LT";

        case GT:
            return "GT";

        case LT_EQUAL:
            return "LT_EQUAL";

        case GT_EQUAL:
            return "GT_EQUAL";
    
        case BOOLEAN_AND_OPERATOR:
            return "BOOLEAN_AND_OPERATOR";

        case BOOLEAN_OR_OPERATOR:
            return "BOOLEAN_OR_OPERATOR";

        case BOOLEAN_NOT_OPERATOR:
            return "BOOLEAN_NOT_OPERATOR";

        case BOOLEAN_EQUAL:
            return "BOOLEAN_EQUAL";

        case BOOLEAN_NOT_EQUAL:
            return "BOOLEAN_NOT_EQUAL";

        case BOOLEAN_TRUE:
            return "BOOLEAN_TRUE";

        case BOOLEAN_FALSE:
            return "BOOLEAN_FALSE";

    }
}

/**
 * @brief Constructor
 * @param tokens - A vector of tokens from a C-style program 
 */
RecursiveDescentParser::RecursiveDescentParser(const vector<Token>& tokens) {
    for (const auto& token : tokens) {
        cout << toTokenType(token) << ": " << token.character << '\n';
    }
}