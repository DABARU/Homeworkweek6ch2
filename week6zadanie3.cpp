#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    const int n=10;
    float a[n] = {10, 50, 75, 74, 78, 12, 5, 63, 55, 17};
    float sr, sum;
    int k=0, j=0;


    for(int i=0; i<n; i++)
       sum += a[i];
    sr = sum / n;

    for(int i=0; i<n; i++)
        if(a[i] < sr) k++;

    float* b = new float[k];
    for(int i=0; i<n; i++)
       if(a[i] < sr)
       {
             b[j] = a[i];
             j++;
       }
    std::cout << "Massiv a\n";
    for(int i=0; i<n; i++)
       std::cout << a[i] << " ";
     std::cout << "\n\n";

     std::cout << "srednee arifmeticheskoe = " << sr << "\n\n";

    std::cout << "massiv b\n";
    for(int i=0; i<k; i++)
       std::cout << b[i] << " ";
     std::cout << "\n";


    return 0;
}
