#ifndef __BA_ALGO_H__
#define __BA_ALGO_H__

#include <vector>
#include <math.h>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <climits>
#include "parameter.h"
#include "solution.h"
#include "population.h"
#include "problem.h"

class ba_algo {

public:

    Population candidateSol;
        
private:

    Parameter parameter;
    
    Problem func;
    
    int itr;
    
    //solution
    //vector<Solution> candidateSol;
    //vector<Solution> tmpSol;

    
public:

    ba_algo();
    ba_algo(Parameter);
    ~ba_algo();

    void initial();
    void candidate(double);

private:

    void setBF();

};

#endif
