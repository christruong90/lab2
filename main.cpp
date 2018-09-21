#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>


int main() {
    int rand();
    unsigned seed = time(0);
    srand( unsigned(time(NULL)));
    int count = 0;
    int randomLastInt = (rand() % 512) + 512;
    double rand_double(double low, double high);
    std::ofstream myFile;
    std::ifstream openFile;
    int entryCount = 0;
    double sum = 0;
    double doubleArray[entryCount];
    std::vector<double> myVector;
    double medianIndex (std::vector<double> vector);

    myFile.open("Readings.txt");
    openFile.open("Readings.txt");
    std::string line;




//    std::cout << randomLastInt << std::endl;


    while (count < (randomLastInt + 1)) {
        double myRanNum = rand_double(50, 90);
//        std::cout << count << " " << std::fixed << std::setprecision(3) << myRanNum << std::endl;
        myFile << count << " " << std::fixed << std::setprecision(3) << myRanNum << "\n";
        myVector.push_back(myRanNum);
        sum = sum + myRanNum;
        count++;
    }

    std::sort (myVector.begin(), myVector.end());

    myFile.close();

//    std::cout << "this is the sum: " << std::fixed << std::setprecision(3) << sum << std::endl;

    while(getline(openFile,line)) {
        entryCount++;
    }


    std::cout << "There are " << entryCount <<" readings in the file" << std::endl;
    std::cout << "The average reading is " << std::fixed << std::setprecision(3) << (sum/entryCount) << std::endl;
    std::cout << "The highest reading is " << myVector[myVector.size() - 1] << std::endl;
    std::cout << "The lowest reading is " << myVector[0] << std::endl;
    std::cout << "The median is " << medianIndex(myVector) << std::endl;







//    std::cout << "hello" << std::endl;
//    std::cout << std::setprecision(5) << rand_double(50, 90) << std::endl;
//    std::cout << std::setprecision(5) << ranDouble << std::endl;

//    std::cout << "Hello, World! I have modified the output printed to the screen!" << std::endl;
    return 0;
}

double medianIndex (std::vector<double> vector) {
    int vectorSize = (vector.size());

    if (vectorSize % 2 == 1 ) {
        return vector[(vectorSize / 2)];
    } else {
        int lowerHalf = (vectorSize / 2);
        int bigHalf = (lowerHalf + 1);

        return ((vector[lowerHalf] + vector[bigHalf])/ 2);

    }
}


double rand_double( double low, double high ) {
    return ( ( double )rand() * ( high - low ) ) / ( double )RAND_MAX + low;
}

