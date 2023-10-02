#include <iostream>

class TollBooth
{
private:
    unsigned int totalCars;
    double totalCash;

public:
    TollBooth() : totalCars(0), totalCash(0.0) {}

    void payingCar()
    {
        totalCars++;
        totalCash += 0.50;
    }

    void nopayCar()
    {
        totalCars++;
    }

    void printOnConsole()
    {
        std::cout << "Total cars passed: " << totalCars << std::endl;
        std::cout << "Total cash collected: $" << totalCash << std::endl;
        std::cout << "Number of paying cars: " << totalCars - 1 << std::endl;
        std::cout << "Number of non-paying cars: 1" << std::endl;
    }

    void setCounts(unsigned int cars, double cash)
    {
        totalCars = cars;
        totalCash = cash;
    }
};

int main()
{
    TollBooth booth;

    int payingCarCount, nopayCarCount;

    std::cout << "Enter the number of paying cars: ";
    std::cin >> payingCarCount;

    std::cout << "Enter the number of non-paying cars: ";
    std::cin >> nopayCarCount;
    booth.setCounts(payingCarCount + nopayCarCount, payingCarCount * 0.50);
    booth.printOnConsole();

    return 0;
}