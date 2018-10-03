#include "solution.h"

Solution::Solution() {


}

Solution::Solution(Parameter parameter) {

    this->parameter = parameter;

}

Solution::~Solution() {


}

void Solution::setDimension(int dimension) {
    
    location = vector<double>(dimension, 0.0);
    velocity = vector<double>(dimension, 0.0);
    frequency = vector<double>(dimension, 0.0);
    rate = vector<double>(dimension, 0.0);
    loudness = vector<double>(dimension, 0.0);

}

void Solution::setRange(vector<double> &UL, vector<double> &LL) {

    this->UL = UL;
    this->LL = LL;
    
    
    //TODO 
    this->range = UL[0] - LL[0];

}

void Solution::initLocation() {


    for(int i = 0; i < location.size(); ++i) {
    
        genLocation(i);
    
    }

}

void Solution::genLocation(int idx) {

    double r =  (double) rand() / RAND_MAX;
    
    location[idx] = r * range + LL[0];

}

void Solution::feasible() {

    for (int i = 0; i < location.size(); ++i) {
		
        if(checkLocation(i)) {
        
            location[i] = max(location[i], LL[i]);
            location[i] = min(location[i], UL[i]);  
        
        }
		
	}

}

double Solution::RAND() {

    return (double) rand() / RAND_MAX;

}

double Solution::RAND(double lowwer, double upper) {
	
	return lowwer + (upper - lowwer) * rand() / (RAND_MAX + 1.0);

}

bool Solution::checkLocation(int idx) {

    if(location[idx] > UL[idx] || location[idx] < LL[idx])
        return true;
        
    return false;

}

void Solution::printData() {

    for(int i = 0; i < location.size(); ++i) {
    
        cout << location[i] << " " ; 
    
    }
    
    cout << endl;

}

