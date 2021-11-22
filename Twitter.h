#ifndef Twitter_h
#define Twitter_h

#include"SocialMediaAccount.h"
template<class T>
class Twitter:public SocialMediaAccount<T>{

public:
    Twitter();
    Twitter(T user);
    void RT();
    void setRT(int newRTCount);
    int getRT();
private:
    int retweetCount;

};

#endif

