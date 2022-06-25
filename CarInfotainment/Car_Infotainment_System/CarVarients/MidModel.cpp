#include "MidModel.h"

MidModel::MidModel()
{
    cout<< " MidModel constructor "<<endl;
    m_vendorMid = nullptr;
    init();
}

MidModel::~MidModel()
{
    cout<< " MidModel destructor "<<endl;
    if(m_vendorMid!=nullptr){
    delete m_vendorMid;
    }
}


bool MidModel::init()
{
    cout<< " MidModel receiveData "<<endl;
    if(m_vendorMid == nullptr){
    m_vendorMid = new VendorMid;
    }
    m_vendorMid->callDisplay();
    return true;
}
