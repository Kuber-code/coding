#include <iostream>
#include <vector>
#include <algorithm>

void printIntegersSequence(char sequenceName, std::vector<int>& sequence)
{
    std::cout << sequenceName << " = ";
    for (auto idx = sequence.begin(); idx != sequence.end(); idx++)
        std::cout << *idx << ", ";
	//for_each(sequence.begin(), sequence.end(), [](int v) {std::cout << v << ", ";}); // drugi sposob na wyswietlenie vectora
    std::cout << std::endl;
}

bool isPrimeNumber(int number)
{
    bool isPrime = true;    if (number < 2)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= number / 2; i++)
        {
           if (number % i == 0)
           {
              isPrime = false;
              break;
           }
        }
    }
    return isPrime;
}

int main()
{
    std::vector<int> a {2, 3, 9, 2, 5, 1, 3, 7, 10};
    std::vector<int> b {2, 1, 3, 4, 3, 10, 6, 6, 1, 7, 10, 10, 10};

    std::sort(b.begin(), b.end());
    //b.erase(unique(b.begin(), b.end()), b.end()); // wywala powtórzenia

    printIntegersSequence('A', a);
    printIntegersSequence('B', b);


    //Version 2
    std::vector<int> c;
    for (auto aidx = a.begin(); aidx != a.end(); aidx++)
    {   
	
        int occurrences = 0;
        for (auto bidx = b.begin(); bidx != b.end(); bidx++)
        {
            if (*aidx == *bidx)
                occurrences++;
        }
        if (!(occurrences && isPrimeNumber(occurrences)))
            c.push_back(*aidx);
    }
	
    //Lambda Version - jako ciekawostka w jednej linijce :)
    //std::vector<int> c(a);
    //c.erase(remove_if(c.begin(), c.end(),
    //            [&](int cv) {
    //                return binary_search(b.begin(), b.end(), cv) && isPrimeNumber(std::count_if(b.begin(), b.end(), [&cv](int bv) {
    //                      return bv == cv;
    //                    }));
    //            }), c.end());
	
    printIntegersSequence('C', c);

    return 0;
}