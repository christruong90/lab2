#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>


int main() {
    int rand();
    unsigned seed = time(0);
    srand( unsigned(time(NULL)));
    int count = 0;
    int randomLastInt = (rand() % 512) + 512;
    double ranDouble =3.14159;
    double rand_double(double low, double high);

//    std::cout << randomLastInt << std::endl;


    while (count < (randomLastInt + 1)) {
        std::cout << count << " " << std::setprecision(5) << rand_double(50, 90) << std::endl;
        count++;
    }

//    std::cout << "hello" << std::endl;
//    std::cout << std::setprecision(5) << rand_double(50, 90) << std::endl;
//    std::cout << std::setprecision(5) << ranDouble << std::endl;

    std::cout << "Hello, World! I have modified the output printed to the screen!" << std::endl;
    return 0;
}

double rand_double( double low, double high ) {
    return ( ( double )rand() * ( high - low ) ) / ( double )RAND_MAX + low;
}

