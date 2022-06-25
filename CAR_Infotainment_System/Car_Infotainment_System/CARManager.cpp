#include "CARManager.h"

CARManager::CARManager()
{
    cout<< " CARManager constructor "<<endl;
    init();
}

CARManager::~CARManager()
{
    cout<< " CARManager destructor "<<endl;
    
}

bool CARManager::init()
{
    cout<< " CARManager init "<<endl;
    cout<<" How many cars do you want ?"<<endl;;
    cout<<" 1.Base varient ";
    cin>>base;
    cout<<" 2.Mid varient ";
    cin>>mid;
    cout<<" 3.Top varient ";
    cin>>top;

    m_carList = new list<Car*>;
    for(int i=0;i<base;i++){
        m_baseModel = new BaseModel;
        m_baseModel->setChassisNo("BASEMODEL"+to_string(i));
        m_carList->push_back(m_baseModel);

    }
    for(int i=0;i<mid;i++){
        m_midModel = new MidModel;
        m_midModel->setChassisNo("MIDMODEL"+to_string(i));
        m_carList->push_back(m_midModel);
    }
    for(int i=0;i<top;i++){
        m_topModel = new TopModel;
        m_topModel->setChassisNo("TOPMODEL"+to_string(i));
        m_carList->push_back(m_topModel);
    }
    return true;
}

bool CARManager::print()
{
    cout<< " CARManager print "<<endl;
    it = m_carList->begin();
    while (it!=m_carList->end()) {
        cout<<(*it)<<endl;
    }

    return true;
}
