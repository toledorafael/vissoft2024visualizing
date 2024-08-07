/**
 * @file main.cc
 * 
 * @author Rafael Toledo
 * @date 2021-10-01
 * 
 * @brief Driver class that loads the feature configuration, 
 * creates the graph application and runs the commands. 
 */

#include "GraphApp.h"
#include <iostream>

using namespace std;




/**
 * Main point of entry for the
 * program. Invokes the graph
 * class.
 * @return Program return code.
 */
int main() {
    //Prepare GraphApp.
    GraphApp graphApp = GraphApp("feature.config", "graphWeighted.in");

    // //Run GraphApp.
    graphApp.handleCommands();
    
    return 0;
}