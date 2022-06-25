#include "TopModel.h"

TopModel::TopModel()
{
    cout<< " TopModel constructor "<<endl;

}

TopModel::~TopModel()
{
    cout<< " TopModel destructor "<<endl;

}

const string &TopModel::getChassisNo()
{
    return chassisNo;
}

void TopModel::setChassisNo(const string &newChassisNo)
{
    chassisNo = newChassisNo;
}


