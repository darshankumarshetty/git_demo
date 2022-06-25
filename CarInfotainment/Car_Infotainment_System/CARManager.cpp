#include "CARManager.h"

CARManager::CARManager()
{
    cout<< " CARManager constructor "<<endl;
        init();
}

CARManager::~CARManager()
{
    cout<< " CARManager destructor "<<endl;
//    if(m_carList!=nullptr){
//    it = m_carList->begin();
//    while (it!=m_carList->end()) {
//        delete (*it);
//        it++;
//     }
//    }
    cout<<"Enter Car number to sale"<<endl;
    cin>>CarNum;
    for(auto it = m_carList->begin(); it != m_carList->end(); it++){
      if ((*it)->getCarNo() == CarNum)
      {
          m_carList->erase(it);
          delete *it;
      }
    }
    this->print();
}

bool CARManager::init()
{
    cout<< " CARManager init "<<endl;
    cout<<" Select The number of Cars"<<endl;;
    cout<<" 1.Base varient \n";
    cin>>base;
    cout<<" 2.Mid varient \n";
    cin>>mid;
    cout<<" 3.Top varient \n";
    cin>>top;

    m_carList = new list<Car*>;
    cout<<"*******************"<<endl;
    cout<<"Select the Color"<<endl;
    cin>>Color;
    for(int i=0;i<base;i++){
        m_baseModel = new BaseModel;
        m_baseModel->setCar_Color(Color);
        m_baseModel->setChassisNo("BaseMDL KA 01"+to_string(i+100));
        m_baseModel->setCarNo(i+100);
        cout<<" Base Car Color :"<<m_baseModel->getCar_Color()<<endl;
        cout<<" Car Number     :"<<m_baseModel->getChassisNo()<<endl;
        cout<<" Car Number     :"<<m_baseModel->getCarNo()<<endl;
        m_carList->push_back(m_baseModel);
    }
    cout<<"*******************"<<endl;
    cout<<"Select the Color"<<endl;
    cin>>Color;
    for(int i=0; i < mid; i++){
        m_midModel = new MidModel;
        m_midModel->setCar_Color(Color);
        m_midModel->setChassisNo("MidMDL KA 01"+to_string(i+200));
        m_midModel->setCarNo(i+200);
        cout<<" MID Car Color :"<<m_midModel->getCar_Color()<<endl;
        cout<<" Car Number    :"<<m_midModel->getChassisNo()<<endl;
        cout<<" Car Number    :"<<m_midModel->getCarNo()<<endl;
        m_carList->push_back(m_midModel);
    }
    cout<<"******************"<<endl;
    cout<<"Select the Color"<<endl;
    cin>>Color;
    for(int i=0;i<top;i++){
        m_topModel = new TopModel;
        m_topModel->setCar_Color(Color);
        m_topModel->setChassisNo("TopMDL KA 01"+to_string(i+300));
        m_topModel->setCarNo(i+300);
        cout<<" TOP Car Color :"<<m_topModel->getCar_Color()<<endl;
        cout<<" Car Number    :"<<m_topModel->getChassisNo()<<endl;
        cout<<" Car Number    :"<<m_topModel->getCarNo()<<endl;
        m_carList->push_back(m_topModel);
    }
    cout<<"********************"<<endl;
    return true;
}

bool CARManager::print()
{
    cout<< " CARManager print function Called "<<endl;
    it = m_carList->begin();
    while (it!=m_carList->end()) {
       cout<<" Cars Chessy Number:"<<(*it)->getChassisNo()<<endl;
       cout<<" Color             :"<<(*it)->getCar_Color()<<endl;
       cout<<" Car Number        :"<<(*it)->getCarNo()<<endl;
       it++;
    }
    return true;
}

void CARManager::saveCarData(string chassisNo, string, string color)
{

}

void CARManager::deleteCarData(string chassisNo, string, string color)
{

}
