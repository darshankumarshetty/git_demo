#ifndef CARMANAGER_H
#define CARMANAGER_H
#include "CommonUtils.h"
#include "CarVarients/BaseModel.h"
#include "CarVarients/MidModel.h"
#include "CarVarients/TopModel.h"
#include "CarVarients/Car.h"
#include "list"
#include "algorithm"
#include "fstream"

class CARManager
{
public:
    CARManager();
    ~CARManager();

    bool init();
    bool print();
    void saveCarData(string chassisNo, string ,string color);
    void deleteCarData(string chassisNo, string ,string color);

private:
    fstream myFile;
    Car *m_baseModel;
    Car *m_midModel;
    Car *m_topModel;

    list<Car*> *m_carList;
    list<Car*>::iterator it;
    int base,mid,top;
    string Color;
    int CarNum;
};

#endif // CARMANAGER_H
