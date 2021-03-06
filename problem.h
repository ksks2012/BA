#ifndef __PLOBLEM_H__
#define __PLOBLEM_H__

#include <vector>
#include <math.h>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <climits>
#include "parameter.h"
#include "solution.h"

class Problem {

public:

    int dimension;
            
    // function lowerlimut upperlimut dimension
    vector <double> LL;
    vector <double> UL;

private:

    int funcNum;
    
public:

    Problem();
    Problem(int);

    void calFitness(Solution &);

private:

};

#endif
