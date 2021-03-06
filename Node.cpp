/*
 * Node.cpp
 * Node definition.
 *
 * Copyright (c) 2022, Thomas Truong.
 */

#include "Node.h"

/**
 * Constructor, creates and sets the value for the node.
 *
 * @param value - the value to set for the node.
 */ 
Node::Node(char value) : _value(value) {
}

/**
 * Operator overloading: return the value of the node.
 *
 * @param os - the reference to the output stream.
 * @param n - the Node that will have it's value concatenated with os.
 * @return std::ostream& - the reference to the modified output stream.
 */
std::ostream &operator<<(std::ostream &os, const Node &n) {
  return os << n._value;
}
