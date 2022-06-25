#include "AudioHardware.h"
#include "AudioHardware/Radio.h"
#include "AudioHardware/Speaker.h"
#include "AudioHardware/Tweeter.h"
#include "AudioHardware/Woffer.h"
AudioHardware::AudioHardware()
{
    cout<< " AudioHardware constructor "<<endl;

}

AudioHardware::AudioHardware(int selectVendor):m_chooseVendor(selectVendor)
{
    cout<< " AudioHardware parameterized constructor "<<endl;

}

AudioHardware::~AudioHardware()
{
    cout<< " AudioHardware destructor "<<endl;

    it1 = m_tweeterVector->begin();
    while (it1!=m_tweeterVector->end()) {
        cout<<"Tweeter deleted"<<endl;
        delete (*it1);
        it1++;
    }
    it = m_speakerVector->begin();
    while (it!=m_speakerVector->end()) {
        cout<<"Speaker deleted"<<endl;
        delete (*it);
        it++;
    }
    delete m_woffer;
}

bool AudioHardware::supplyAudioHw()
{
    cout<< " DisplayHardware supplyAudioHw "<<endl;
    m_speakerVector = new vector<Speaker*>;
    m_tweeterVector = new vector<Tweeter*>;
    switch (m_chooseVendor) {
    case VBase:
        for(int speaker=0;speaker<4;speaker++){
            cout<<"Speaker created in Base model"<<endl;
            m_speaker = new Speaker;
            m_speakerVector->push_back(m_speaker);
        }
        for(int tweets=0;tweets<2;tweets++){
            cout<<"Tweeter created in Base model"<<endl;
            m_tweeter = new Tweeter;
            m_tweeterVector->push_back(m_tweeter);
        }
        break;
    case VMid:
        for(int speaker=0;speaker<6;speaker++){
            cout<<"Speaker created in mid model"<<endl;
            m_speaker = new Speaker;
            m_speakerVector->push_back(m_speaker);
        }
        for(int tweets=0;tweets<4;tweets++){
            cout<<"Tweeter created in mid model"<<endl;
            m_tweeter = new Tweeter;
            m_tweeterVector->push_back(m_tweeter);
        }
        cout<<"Woofer created in Mid model"<<endl;
        m_woffer = new Woffer;
        break;
    case VTop:
        for(int speaker=0;speaker<8;speaker++){
            cout<<"Speaker created in Top model"<<endl;
            m_speaker = new Speaker;
            m_speakerVector->push_back(m_speaker);
        }
        for(int tweets=0;tweets<6;tweets++){
            cout<<"Tweeter created in top model"<<endl;
            m_tweeter = new Tweeter;
            m_tweeterVector->push_back(m_tweeter);
        }
        cout<<"Woofer created in top model"<<endl;
        m_woffer = new Woffer;
        break;
    default: cout<<" Audio hardware not available "<<endl;
    }

    return true;
}
