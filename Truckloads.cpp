#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize)
{
    // if(numCrates < 2 || numCrates > 10000)
    // {
    //     return 0;
    // }
    // if(loadSize < 1 || loadSize > (numCrates - 1))
    // {
    //     return 0;
    // }

    if(numCrates > loadSize)
    {
        if (numCrates%2 == 0)
        {
            return numTrucks((numCrates/2), loadSize) + numTrucks((numCrates/2), loadSize);
        }else {
            return numTrucks((numCrates/2)+1, loadSize) + numTrucks((numCrates/2), loadSize);
        }
    }

    return 1;
};