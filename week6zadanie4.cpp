#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
ofstream file;
int min;
int max;
int elem;
int a = 0;
const unsigned int n = 30;
int arr[n];
std::cout << " Enter [min; max] " << endl;
std::cin >> min ;
std::cin >> max ;
elem = max;

    for(unsigned int i=0; i<n; i++){
       arr[i] = rand() % (max-min+1)+min;
       std::cout << i << " : " << arr[i] << ", " << std::endl;
       if (i%2 == 0 && arr[i]<elem) {
                elem = arr[i];
                a=i;
       }

    }
std::cout << "Elements: [ " << a << " ] = " << elem << endl;

return 0;
}
