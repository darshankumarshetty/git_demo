#include "TopModel.h"

TopModel::TopModel()
{
    cout<< " TopModel constructor "<<endl;
    m_vendorTop = nullptr;
    init();
}

TopModel::~TopModel()
{
    cout<< " TopModel destructor "<<endl;
    if(m_vendorTop!=nullptr){
        delete m_vendorTop;
    }
}

bool TopModel::init()
{
    cout<< " TopModel receiveData "<<endl;
    if(m_vendorTop == nullptr){
        m_vendorTop = new VendorTop;
    }
    m_vendorTop->callDisplay();
    return true;

}
