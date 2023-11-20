





# One short compile and link all at once
g++ -std=c++17 file1.cpp file2.cpp main.cpp -o bin/main
./bin/main


# Manually perform each individual step (equivalent to above)
g++ -std=c++17 -c file1.cpp  -o bin/file1.o
g++ -std=c++17 -c file2.cpp  -o bin/file2.o
g++ -std=c++17 -c main.cpp  -o bin/main.o
g++ bin/file1.o bin/file2.o bin/main.o -o bin/main
./bin/main


