#include "BaseModel.h"
#include "Vendors/VendorBase.h"

BaseModel::BaseModel()
{
    cout<< " BaseModel constructor "<<endl;
    m_vendorBase = nullptr;
    init();
}

BaseModel::~BaseModel()
{
    cout<< " BaseModel destructor "<<endl;
    if(m_vendorBase!=nullptr){
    delete m_vendorBase;
    }
}

bool BaseModel::init()
{
    cout<< " BaseModel receiveData "<<endl;
    if(m_vendorBase == nullptr){
    m_vendorBase =  new VendorBase;
    }
    m_vendorBase->callDisplay();
    return true;
}

