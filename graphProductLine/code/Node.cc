/**
 * @file Node.h
 * 
 * @author Rafael Toledo
 * @date 2021-10-01
 * 
 * @brief Defines the class Node and its attributes and methods
 */

#include "Node.h"
#include <string>

using namespace std;

/** Static variables */
int Node::nodeCount = 0;

/**
 * @brief Construct a new Node:: Node object
 * 
 * @param nodeName 
 */
Node::Node(string nodeName) : name{nodeName} {
	id = nodeCount;

    nodeCount++;
}

/**
 * @brief Destroy the Node:: Node object
 * 
 */
Node::~Node (){

}

void Node::addNeighbor(int neighborID) {
	neighbors.push_back(neighborID);
}