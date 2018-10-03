#include "problem.h"

Problem::Problem() {

}

Problem::Problem(int funcNum) {

    this->funcNum = funcNum;
    
    switch(funcNum) {
    
        case 0:
        
            dimension = 10;
            LL = vector<double>(dimension, -10);
            UL = vector<double>(dimension, 10);

            break;
            
        case 1:
            dimension = 5;
            LL = vector<double>(dimension, -5.12);
            UL = vector<double>(dimension, 5.12);
            
            break;
        case 2:
            dimension = 30;
            LL = vector<double>(dimension, -100);
            UL = vector<double>(dimension, 100);
            
            break;
            
        case 16:
            dimension = 30;
            LL = vector<double>(dimension, -30);
            UL = vector<double>(dimension, 30);
            
            break;
        case 22:
            dimension = 30;
            LL = vector<double>(dimension, -5.12);
            UL = vector<double>(dimension, 5.12);
            
            break;
        case 23:
            dimension = 10;
            LL = vector<double>(dimension, -500);
            UL = vector<double>(dimension, 500);
            
            break;
        case 28:
            dimension = 2;
            LL = vector<double>(dimension, -5);
            UL = vector<double>(dimension, 5);
            
            break;
        case 41:
            dimension = 5;
            LL = vector<double>(dimension, -600);
            UL = vector<double>(dimension, 600);
            
            break;
        case 101:
            dimension = 20;
            LL = vector<double>(dimension, -100);
            UL = vector<double>(dimension, 100);
            
            break;            
        debault:
            cout << "unknown function" << endl;
            break;
    }

}

void Problem::calFitness(Solution &solution) {

    solution.fitness = 0;
    
    switch(funcNum) {
        
        case 0:
            
            //solution.fitness += 25;
            
            for(int i = 0; i < dimension; ++i)
                solution.fitness += solution.location[i] * solution.location[i];
            
            //solution.fitness = abs(solution.fitness);
            break;
            
        case 1:
            
            solution.fitness += 25;
            
            for(int i = 0; i < dimension; ++i)
                solution.fitness += ceil(solution.location[i]);
            
            //solution.fitness = abs(solution.fitness);
            break;
        case 2:
            
            //solution.fitness += 25;
            
            for(int i = 0; i < dimension; ++i)
                solution.fitness += pow(floor(solution.location[i] + 0.5), 2);
            
            solution.fitness = abs(solution.fitness);
            break;
        case 16:         
            
            for(int i = 0; i < dimension - 1; ++i)
                solution.fitness += 100 * pow(solution.location[i + 1] - pow(solution.location[i], 2), 2) + pow(solution.location[i] - 1, 2);
            
            break;
        case 22:
            solution.fitness += 10 * dimension;
            
            for(int i = 0; i < dimension; ++i)
                solution.fitness +=  pow(solution.location[i], 2) - 10 * cos(2 * M_PI * solution.location[i]);// + 10;
            
            break;
        case 23:
            solution.fitness += 418.9829 * dimension;
            
            for(int i = 0; i < dimension; ++i)
                solution.fitness -= (solution.location[i] * sin(pow(abs(solution.location[i]), 0.5)));
            
            break;
            
        case 28:
         
            solution.fitness = 4 * pow(solution.location[0], 2) - 2.1 * pow(solution.location[0], 4) + (1.0 / 3.0) * pow(solution.location[0], 6) + solution.location[0] * solution.location[1] - 4 * pow(solution.location[1], 2) + 4 * pow(solution.location[1], 4);
            
            //solution.fitness = abs(1.03163 + solution.fitness);
            break;
        case 41:
        {
            solution.fitness += 1;
            
            double sum = 0;
            
            for(int i = 1; i < dimension + 1; ++i)
                sum += pow(solution.location[i - 1], 2);
        
            sum = sum / 4000;
        
            double product = 1;
            
            for(int i = 1; i < dimension + 1; ++i)
                product *= cos(solution.location[i - 1] / pow(i, 0.5));
        
            solution.fitness += sum - product;

            break;
        }
        case 101:
         
            solution.fitness += 0;
            
            for(int i = 0; i < dimension; ++i)
                solution.fitness += pow(solution.location[i], 2) ;
            
            //solution.fitness = abs(1.03163 + solution.fitness);
            break;
        default:
            cout << "unknown function" << endl;
            break;
    }

}


