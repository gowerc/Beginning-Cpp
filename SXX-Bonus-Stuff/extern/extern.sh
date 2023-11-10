

## Single call to g++ to compile both files then link

mkdir -p SXX-Bonus-Stuff/bin

g++ \
    -fdiagnostics-color=always \
    -std=c++17 \
    -Wall \
    SXX-Bonus-Stuff/extern_1.cpp \
    SXX-Bonus-Stuff/extern_2.cpp \
    -o SXX-Bonus-Stuff/bin/extern

SXX-Bonus-Stuff/bin/extern




## Separate calls to g++ (e.g. manually compile the "library" and then compile and link the main program)

g++ \
    -fdiagnostics-color=always \
    -std=c++17 \
    -Wall \
    SXX-Bonus-Stuff/extern_2.cpp \
    -o SXX-Bonus-Stuff/bin/extern_2 \
    -c

g++ \
    -fdiagnostics-color=always \
    -std=c++17 \
    -Wall \
    SXX-Bonus-Stuff/extern_1.cpp \
    SXX-Bonus-Stuff/bin/extern_2 \
    -o SXX-Bonus-Stuff/bin/extern

SXX-Bonus-Stuff/bin/extern



