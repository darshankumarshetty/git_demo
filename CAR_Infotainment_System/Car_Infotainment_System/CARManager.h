#ifndef CARMANAGER_H
#define CARMANAGER_H
#include "CommonUtils.h"
#include "CarVarients/BaseModel.h"
#include "CarVarients/MidModel.h"
#include "CarVarients/TopModel.h"
#include "CarVarients/Car.h"
#include "list"
class CARManager
{
public:
    CARManager();
    ~CARManager();

    bool init();
    bool print();

private:
    BaseModel *m_baseModel;
    MidModel *m_midModel;
    TopModel *m_topModel;

    int base,mid,top;

    list<Car*> *m_carList;
    list<Car*>::iterator it;
};

#endif // CARMANAGER_H
