#include <iostream>
#include "CARManager.h"
using namespace std;

int main()
{
    CARManager *cmr = new CARManager;
    cmr->print();

    delete cmr;
    return 0;
}
