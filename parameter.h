/** @brief   parameter
 *  @file    parameter.h
 *  @author  AnHong Zheng
 *  @date    2018.10.3.
 *  @note    
 */
 
#ifndef __PARAMETER_H__
#define __PARAMETER_H__

#include <iostream>
#include <string>

#define DEBUGLOG(str)\
//cout << "[In function " << __func__ << " of " << __FILE__ << ", line: " << __LINE__ << "] " << #str << endl;
//printf("[In function %s of %s, line: %d] statement: \""#str"\"\n", __func__, __FILE__, __LINE__);

using namespace std;

const double PI = 3.14159;

/** @brief   Parameter storage
 *  @file    parameter.h
 *  @class   Parameter
 *  @note    to store the user's set
 */ 
class Parameter {

public:
    
    int ITERATION;
  
    int POPULATION;
    int FUNC_NUM;
      
public:

    Parameter();
    ~Parameter();
    
    /* setter */
    
    void setITERATION(int);
    
    void setPopultion(int);
    
    void setFuncNum(int);

};

#endif
