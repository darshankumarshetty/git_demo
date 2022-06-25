#include "BaseModel.h"

BaseModel::BaseModel()
{
    cout<< " BaseModel constructor "<<endl;
    m_baseVendor = new VendorBase;
}

BaseModel::~BaseModel()
{
    cout<< " BaseModel destructor "<<endl;

}

const string &BaseModel::getChassisNo()
{
    return chassisNo;
}

void BaseModel::setChassisNo(const string &newChassisNo)
{
    chassisNo = newChassisNo;
}

bool BaseModel::receiveData()
{
    cout<< " BaseModel receiveData "<<endl;

    return true;
}
