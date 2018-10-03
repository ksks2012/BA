#include "population.h"

Population::Population() {



}

Population::Population(Parameter parameter, int solSize) {

    this->parameter = parameter;

    sol = vector<Solution> (solSize);

}

void Population::initial(Problem &func) {
        
    bestSol.setDimension(func.dimension);
    bestSol.fitness = INT_MAX;

    for(int i = 0; i < sol.size(); ++i) {
    
        sol[i].setDimension(func.dimension);
        sol[i].setRange(func.UL, func.LL);
        sol[i].initLocation();
        
        func.calFitness(sol[i]);
        
        if(bestSol.fitness > sol[i].fitness)
            bestSol = sol[i];
        
    }
    
}
