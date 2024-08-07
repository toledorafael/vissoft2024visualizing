/**
 * @file GraphApp.h
 * 
 * @author Rafael Toledo
 * @date 2021-10-01
 * 
 * @brief Class that manages the GraphApp and handles the commands 
 */

#ifndef GRAPH_APP_GRAPHAPP_H
#define GRAPH_APP_GRAPHAPP_H

#define DEBUG 0

#define INT_MAX 2147483647

#include "Node.h"
#include "Edge.h"
#include <string>
#include <vector>
#include <map>
#include <list>

extern bool kWeighted;
extern bool kDirected;
extern bool kUndirected;
extern bool kSearch;
extern bool kBFS;
extern bool kDFS;
extern bool kCycle;
extern bool kConnectedComps;
extern bool kStronglyConnectedComps;
extern bool kPrim;
extern bool kKruskal;
extern bool kShortestPath;

class GraphApp {
    public:
	/**	Constructors/Destructors */
	GraphApp(std::string configFile, std::string graphFilename);
	~GraphApp();

	/** Driver Methods */
	void handleCommands();
    
	/**Private Variables */
    std::vector<Node*> nodes;
    std::map<int,std::vector<Edge*>> edges;
    private:

	std::vector<std::string> activeCommands;

    // /** Private Graph Algorithms*/
	bool isCyclic();
	bool DFS(int nodeID, int parent, std::string command);
    void BFS(int nodeID, std::string command);
	void connectedComponents();
	void MSTPrim();

	/** Edit Graph Methods*/
	void addNode(std::string nodeName);
	void addEdge(std::string startNode, std::string endNode, int weight);
	void addEdge(std::string startNode, std::string endNode);
	void updateNodeName(std::string nodeName, std::string newName);
	void updateEdgeWeight(std::string startNode, std::string endNode, int newWeight);

	/** Helper Methods and Variables */
    std::map<int, bool> visited;
	std::map<int, bool> recurStack;
	std::vector<int> ancestors;
	int parentNodeID;
	void loadConfig (std::string filename);
	void loadGraph (std::string filename);
	void setupMenu();
	int printHeader();
	void clearVisited();
	bool checkNode(std::string nodeName);

    /** Debugging methods */
    void printNeighbors();
    void printEdges();

	/** Command Constants */
    const std::string HELP = "help";
    const std::string CYCLE = "cycle checking";
    const std::string CC = "connected components";
    const std::string SCC = "strongly connected components";
    const std::string PRIM = "prim";
    const std::string KRUSKAL = "kruskal";
    const std::string SHORTESTPATH = "shortest path";
	const std::string ADDNODE = "add node";
	const std::string ADDEDGE = "add edge";
	const std::string UPDATENODE = "update node";
	const std::string UPDATEEDGE = "update edge";
	const std::string PRINTGRAPH = "print graph";
	
	
    const std::string EXIT = "quit";

};

#endif //GRAPH_APP_GRAPHAPP_H