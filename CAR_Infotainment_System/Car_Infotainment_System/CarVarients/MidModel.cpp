#include "MidModel.h"

MidModel::MidModel()
{
    cout<< " MidModel constructor "<<endl;

}

MidModel::~MidModel()
{
    cout<< " MidModel destructor "<<endl;

}

const string &MidModel::getChassisNo()
{
    return chassisNo;
}

void MidModel::setChassisNo(const string &newChassisNo)
{
    chassisNo = newChassisNo;
}
