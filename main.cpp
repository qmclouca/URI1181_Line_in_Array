#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float M[12][12], sum = 0, mean = 0, result = 0;
    int line = 0, Op=0;
    string Operation;
    std::cin >> line >> Operation;
    if (Operation == "S"){
        Op = 1;
    }
    if (Operation == "M"){
        Op = 2;
    }
    for (int x = 0; x < 12;x++){
        for (int y = 0;y<12;y++){
            std::cin >> M[x][y];
        }
    }
    switch (Op){
        case 1:
            for (int x=0; x<12;x++){
                sum = sum + M[line][x];
            }
            result = sum;
            break;
        case 2:
            for (int x=0; x<12;x++){
                sum = sum + M[line][x];
            }
            mean = sum/12;
            result = mean;
            break;
    }
    std::cout << setprecision(1) << fixed << result << std::endl;
    return 0;
}

