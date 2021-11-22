//
// Created by ashle on 11/17/2021.
//
#include "SocialMediaAccount.h"

#ifndef HW4_INSTAGRAM_H
#define HW4_INSTAGRAM_H

template <class T>
class Instagram:public SocialMediaAccount<T>{
public:
    Instagram();
    Instagram(T user);
    void Like();
    void setLikeCount(int newLikeCount);
    int getLikeCount();

private:
    int likeCount;

};


#endif //HW4_INSTAGRAM_H
