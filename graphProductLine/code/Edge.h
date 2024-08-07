/**
 * @file Edge.h
 * 
 * @author Rafael Toledo
 * @date 2021-10-01
 * 
 * @brief Defines the class Edge and its attributes and methods
 */

#ifndef GRAPH_APP_EDGE_H
#define GRAPH_APP_EDGE_H

#include <string>
#include <vector>

class Edge {
	public:
	/**	Constructors/Destructors */
	Edge(int startNodeID, int endNodeID, int weight);
	~Edge();


	/** Accessor methods */
	int getID(){ return edgeID; };
	int getStartNodeID(){ return startNodeID; };
	int getEndNodeID(){ return endNodeID; };
	int getWeight(){ return weight; };
	int getNext(int currentNodeID);
	
	int weight;

	private:
	int edgeID, startNodeID, endNodeID;

	static int edgeCount;
};

#endif //GRAPH_APP_EDGE_H