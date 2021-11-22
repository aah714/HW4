#include"Twitter.h"
template<class T>
Twitter<T>::Twitter():SocialMediaAccount<T>(){
    retweetCount=0;
}

template<class T>
Twitter<T>::Twitter(T user):SocialMediaAccount<T>(user){
    retweetCount=0;
}

template<class T>
void Twitter<T>::setRT(int newRTCount) {
    retweetCount=newRTCount;
}

template<class T>
int Twitter<T>::getRT() {
    return retweetCount;
}

template<class T>
void Twitter<T>::RT() {
    retweetCount+=1;
}