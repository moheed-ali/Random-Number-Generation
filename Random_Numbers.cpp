#include <iostream>
#include <vector>
#include <random>

//Function to generate Random values b/w points 
std::vector<int> generate_values(/*double p1, double p2,*/ int n) { 
    std::vector<int> values;                                // Vector to store values in order to get proportion
    std::random_device rd;                                  // rd class to gernrate random values
    std::mt19937 gen(rd());                                 //  mt19937 generator for high quality values  
    
    //---------------------------------------- 
    //Use the Distribution According to the Requirements        
    //std::uniform_real_distribution<> dis(7.0, 9.0);           // real Distribution Type
    //std::uniform_int_distribution<> dis(70, 90);              // int Distribution Type
    std::normal_distribution<double> dis(10,2);               // Normal
    //std::exponential_distribution<double> dis(128);           // Expotential
    //std::bernoulli_distribution dis(0.5);                       // Bernoulli 
    //For Loop yo do iterations n
    for (int i = 0; i < n; i++) {                           
        double rand = dis(gen);                             // Double variable to store a random value
        //int rand = dis(gen);                             // int variable to store a random value (only for uni_int)

        std::cout << rand ;
        std::cout << "\n" ; 

        /*   For Task 1 With PMF Range
        //-------------------------------------------------------------------------------
        if (rand <= p1) {                                   // Comparing the rand value with p1
            values.push_back(1);                            // Adding 1 to aur vector with case p1
        } else {
            values.push_back(2);                            // Adding 2 to aur vector with case p2
        }
        //-------------------------------------------------------------------------------
        */
    }
    return values;                                          //  Returning Vector also for Task 1 
}

/* Function to calculate proportion For Task 1 with PMF Range
double calculate_proportion(const std::vector<int>& values, int target_value) {
    int count = 0;
    for (int value : values) {
        if (value == target_value) {                        // comparing the vector values
            count++;
        }
    }
    //computing proportion
    double proportion = static_cast<double>(count) / values.size(); 
    return proportion;
}
*/

int main() {   
    int n = 10;                                                // number of iteration = 10                                   
    std::vector<int> values = generate_values(n);

    /*  Task 1 With PMF Range
    //PMF Range
    double p1 = 1.0 / 3.0;
    double p2 = 2.0 / 3.0;     
    This Portion is to calculate the Proportion      
    int n = 100;                                                // number of iteration = 100
    std::vector<int> values = generate_values(p1, p2, n);
    double proportion = calculate_proportion(values, 1);        // Passing 1 because we consider "1" for p1
    std::cout << "For n = " << n << ", proportion of values equal to P1: " << proportion <<"%"<< std::endl;
    std::cout << "For n = " << n << ", proportion of values equal to P2: " << (1 - proportion) <<"%"<< std::endl;

    n = 1000;                                                   // number of iteration = 1000
    values = generate_values(p1, p2, n);
    proportion = calculate_proportion(values, 1);               // Passing 1 because we consider "1" for p1
    std::cout << "For n = " << n << ", proportion of values equal to P1: " << proportion <<"%"<< std::endl;
    std::cout << "For n = " << n << ", proportion of values equal to P2: " << (1 - proportion) <<"%"<< std::endl;

    n = 10000;                                                  // number of iteration = 10,000        
    values = generate_values(p1, p2, n);
    proportion = calculate_proportion(values, 1);               // Passing 1 because we consider "1" for p1
    std::cout << "For n = " << n << ", proportion of values equal to P1: " << proportion <<"%"<< std::endl;
    std::cout << "For n = " << n << ", proportion of values equal to P2: " << (1 - proportion) <<"%"<< std::endl;
    */ 
    
    return 0;
}