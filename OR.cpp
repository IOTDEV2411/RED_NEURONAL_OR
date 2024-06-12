#include "perceptron.h"
#include <iostream>

int main()
{
    srand(time(NULL));
    rand();
    perceptron p(2);
    std::vector<double> init_w;
    init_w.push_back(10);
    init_w.push_back(10);
    init_w.push_back(-5);

    p.set_weigths(init_w);
    std::vector<double> combination_01;
    combination_01.push_back(0);
    combination_01.push_back(0);
    std::cout << "La salida de la compuerta OR simulada con entrada 0,0 es: " << p.core(combination_01) << std::endl;
    std::vector<double> combination_02;
    combination_02.push_back(0);
    combination_02.push_back(1);
    std::cout << "La salida de la compuerta OR simulada con entrada 0,1 es: " << p.core(combination_02) << std::endl;
    std::vector<double> combination_03;
    combination_03.push_back(1);
    combination_03.push_back(0);
    std::cout << "La salida de la compuerta OR simulada con entrada 1,0 es: " << p.core(combination_03) << std::endl;
    std::vector<double> combination_04;
    combination_04.push_back(1);
    combination_04.push_back(1);
    std::cout << "La salida de la compuerta OR simulada con entrada 1,1 es: " << p.core(combination_04) << std::endl;

    return 0;
};