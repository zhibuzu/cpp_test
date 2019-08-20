/****************
 *
 * iterator.cpp
 *
 *****************/
#include <iostream>

int main()
{
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            
            std::cout << "i: " << i << ", j: " << j << std::endl;
            if (j > 2) {

                break;    
            }
            
        }    
    }

    return 0;
}
