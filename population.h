#ifndef __POPULATION_H__
#define __POPULATION_H__

#include <vector>
#include <math.h>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <climits>
#include "parameter.h"
#include "solution.h"
#include "problem.h"

class Population {

public:
    
    Solution bestSol;
    

private:

    Parameter parameter;
    
    vector<Solution> sol;
    
public:

    Population();
    Population(Parameter, int);
    
    void initial(Problem &);


private:

};

#endif
