/**
 * @file Edge.h
 * 
 * @author Rafael Toledo
 * @date 2021-10-01
 * 
 * @brief Defines the class Edge and its attributes and methods
 */

#include "Edge.h"
#include <string>
#include <iostream>

using namespace std;

/** Static variables */
int Edge::edgeCount = 0;

/**
 * @brief Construct a new Edge:: Edge object
 * 
 * @param startNodeID 
 * @param endNodeID 
 * @param weight 
 */
Edge::Edge(int startNodeID, int endNodeID, int weight) : startNodeID{startNodeID}, endNodeID{endNodeID}, weight{weight} {
	edgeID = edgeCount;

    edgeCount++;
}

/**
 * @brief Destroy the Edge:: Edge object
 * 
 */
Edge::~Edge (){

}

int Edge::getNext(int currentNodeID){
	if (startNodeID != currentNodeID) {
		return startNodeID;
	} else if (endNodeID != currentNodeID) {
		return endNodeID;
	}
}