#include "parameter.h"
#include "ba_algo.h"

int main(int argc, char** argv) {

    const int RUN_TIME = atoi(argv[1]);

    const int ITERATION = atoi(argv[2]);

    Parameter parameter;
    
    parameter.setITERATION(atoi(argv[2]));
    
    parameter.setPopultion(atoi(argv[3]));
    
    parameter.setFuncNum(atoi(argv[4]));

    int run = 0;

    while(run < RUN_TIME) {
    
        int itr = 0;
        
        ba_algo ba(parameter);
        
        //ba.setBF();
        
        ba.initial();
    
        while(itr < ITERATION) {
                              
            ba.candidate(itr);
                
            ++itr;
        
            cout << setprecision(16) << itr << " " << ba.candidateSol.bestSol.fitness << endl;
        
        }

        cout << setprecision(16) << ba.candidateSol.bestSol.fitness << endl;
        ba.candidateSol.bestSol.printData();
    
        ++run;
    
    }
    
}
