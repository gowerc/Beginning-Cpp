
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {

    cout << "\n\n========  Arrays =====\n\n";
    int int_array[4]{1, 2, 3, 4};
    
    // Printing an array will by default print the memory address number
    cout << int_array << endl;
    
    // Print second element of array
    cout << int_array[2] << endl;
    

    cout << "\n\n========  Multi dimensional array =====\n\n";
    int multi_array[2][3]{{1, 2, 3}, {4, 5, 6}};
    // This gives compiler warning because its out of bounds
    // but arrays are a constant block of memory so its actually going into the next "row"
    // cout << multi_array[0][3] << "\n"; 
    cout << multi_array[1][0] << "\n";  // Should be identical


    cout << "\n\n========  Vectors =====\n\n";
    vector<int> test_scores {4, 6};
    cout << test_scores[1] << endl;
    cout << test_scores.at(1) << endl;  // Method for getting element (will throw exception for out of bounds)

    test_scores.at(1) = 1 ;         // Change a value
    test_scores.push_back(80) ;     // Add new value to end of vector
    test_scores.push_back(90) ;
    cout << test_scores[2] << endl; // Display new value (still continuous in memory)


    // Vector sizes
    //   - Vectors by default consume more space than they need to give room
    //     for user to add more elements on here despite only have 4 elemnts
    //     the vector is taking up 6 elements worth of memory space
    cout << "\nSizes of vectors = \n    "
        << test_scores.size() << "\n    "  // Number of elements in array
         << sizeof(test_scores) << "\n";   // Amount of bytes consumed by array

    // Assiging a variable to a vector copies the value not the reference
    cout << "\n Reference checking ---\n";
    int myint{1};
    vector<int> refcheck(4, 1);
    refcheck.push_back(myint);
    refcheck.at(4) += 1;
    myint += 100;
    cout << refcheck.at(4); // Will return 2 because its done 1+1
    cout << "\n";
    cout << myint << "\n"; // Will return 101 because its done 1+100




    cout << "\n\n========  Mutli Dimensional Vectors =====\n\n";

    vector<vector<int>> movie_ratings
    {
        {1, 2},
        {3, 4}
    };

    cout << movie_ratings[0][0] << "\n";
    cout << movie_ratings.at(0).at(1) << "\n";



    cout << "\n\n========  Mutli Dimensional Vector Referencing =====\n\n";

    vector<vector<int>> vov;
    vector<int> v1 {3,5};
    vector<int> v2 {9, 7};

    vov.push_back(v1);
    vov.push_back(v2);

    v1.at(0) = 999;

    cout << "Size of 2d vector = " << vov.size() << "\n";  // 2 because it has 2 elements which just happen to be vectors
    cout << "Vector of vectors = " << vov.at(0).at(0) << "\n";
    cout << "Original vector = " << v1.at(0) << "\n";

    cout << "\n\n"
        << endl;
}
