#ifndef AUDIOHARDWARE_H
#define AUDIOHARDWARE_H
#include "INeedInfotainmentData.h"
#include <vector>
#include "./AudioHardware/Speaker.h"

enum selectAudioHW{
    VBase = 1,
    VMid = 2,
    VTop = 3
};

class Woffer;
class Tweeter;
class Radio;
class AudioHardware : public INeedInfotainmentData
{
    AudioHardware();
public:
    AudioHardware(int selectVendor);

    ~AudioHardware();

    bool supplyAudioHw();

private:
    Radio *m_radio;
    Speaker *m_speaker;
    Tweeter *m_tweeter;
    Woffer *m_woffer;

    vector<Speaker*> *m_speakerVector;
    vector<Tweeter*> *m_tweeterVector;

    vector<Speaker*>::iterator it;
    vector<Tweeter*>::iterator it1;

    int m_chooseVendor;
};

#endif // AUDIOHARDWARE_H
