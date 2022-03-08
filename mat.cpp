#include <iostream>
#include <string>
#include "mat.hpp"


using namespace std;
namespace ariel{
    string mat(int cols, int rows, char first, char second){
        if (cols%2 == 0){
            return "work";
        }
        return "not work";
    }
}