#include "ba_algo.h"
#include <algorithm>    // std::sort

const int randRange = 0;

ba_algo::ba_algo() {

    

}

ba_algo::ba_algo(Parameter parameter) {

    srand(time(NULL));

    this->parameter = parameter;
       
    candidateSol = Population(parameter, parameter.POPULATION);
    
}

ba_algo::~ba_algo() {

}


void ba_algo::initial() {

    setBF();
    
    candidateSol.initial(func);    
        
}

void ba_algo::candidate(double itr) {
        
    this->itr = itr;
    
    
}

//~~~~~~~~~~~~~~~~~~~

/**
  * set benchmark function
  */ 
void ba_algo::setBF() {

    //cout << "function " << parameter.FUNC_NUM << endl;
    
    func = Problem(parameter.FUNC_NUM);

}
