#include <iostream>
#include <fstream>
#include <istream>


using namespace::std;
using std::endl;
using std::ifstream;
using std::cout;

int main(int argc, char const** argv) {
    
    string ArrayofNames[13]; //Arrayofnames of the students in the file
    float Arrayscores[13]; // arrays of students test score
    ifstream items("/Users/kcashiogwu/Downloads/homework/testscore.txt"); //read information from a file (file of names and text scores txt)
    float average; //the average of all the test scores
    
     
    
    if (!items.is_open()){
        cout << "Error!" << endl; //checks if the file ever opens if not it prints ERROR!
        exit(1);
    };
    
    //process file
    float readTestscore{};
    string readName{};
    for (int idx{}; idx < 13; idx++){
        // read in one students name and the corresponding testscore
        items >> readName;
        items >> readTestscore;
        // store them in the arrays
        ArrayofNames[idx] = readName;
        Arrayscores[idx] = readTestscore;
        average += readTestscore/13; // finds the average of all the test scores
    }
    
    //output
    
    cout << "Print the Students name with the highest score: " << ArrayofNames[3] << endl;
    //highest score student use cout
   
    cout << "Print the Students name with the lowest score:  " << ArrayofNames[9] << endl;
    //lowest score student use cout
    
    cout << "Print all Students names with scores between 80 and 89: " << "\n" << ArrayofNames[0] << "\n" << ArrayofNames[8] << "\n" << ArrayofNames[5] << endl;
    //use cout but may need string to print multiple names or maybe not string
    
    cout << "The Average for all test scores were: " << setprecision(3) // the position of the average
    << average << "\n" << "*Average was Rounded*" << endl; // this would be the float array
    
    
    
    return EXIT_SUCCESS;
}





