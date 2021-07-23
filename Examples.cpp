// Examples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
using std::vector;
#include <algorithm>
using std::for_each;
#include <numeric>
using std::accumulate;
#include "Account.h"
#include "ManipulationNN.h"

int main()
{
    vector<int> numbers{ 4,5,6,9,-2,27,14,99 }; 
    vector<double> distraction{ 1.4,4.5,7.3,-9.0 };

    int total=0;
    for (unsigned int i = 0; i < numbers.size();i++ )
    {
        total += numbers[i];
    }

    total = 0;
    for(int elem:numbers)
    {
        total += elem;
    }

    total = 0;
    for_each(begin(numbers), end(numbers), [&total](int elem) {total += elem; });

    total = accumulate(begin(numbers), end(numbers),0);

    Account a{};
    ManipulationNN m{ &a };
    double money = m.confirmAssets();

    

    return 0;
}

