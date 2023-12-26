#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;
double sum(vector<double> operands) {
    double result = 0;
    for (double operand : operands) {
        result += operand;
    }
    return result;
}
double raznost(vector<double> operands) {
    double result = operands[0];
    for (int i = 1; i < operands.size(); i++) {
        result -= operands[i];
    }
    return result;
}
double umnozhenie(vector<double> operands) {
    double result = 1;
    for (double operand : operands) {
        result *= operand;
    }
    return result;
}
double delenie(vector<double> operands) {
    double result = operands[0];
    for (int i = 1; i < operands.size(); i++) {
        result /= operands[i];
    }
    return result;
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        cout << "Использование: " << argv[0] << " -o операция операнды..." << endl;
        return 1;
    }

    string operation = argv[2];
    vector<double> operands;
    for (int i = 3; i < argc; i++) {
        operands.push_back(atof(argv[i]));
    }
  
    double result;
    if (operation == "summa") {
        result = sum(operands);
    } else if (operation == "raznost") {
        result = raznost(operands);
    } else if (operation == "umnozhenie") {
        result = umnozhenie(operands);
    } else if (operation == "delenie") {
        result = delenie(operands);
    } else {
        cout << "Ошибка: неверная операция" << endl;
        return 1;
    }
    cout << "Результат: " << result << endl;

    return 0;
}
