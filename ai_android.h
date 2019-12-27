#ifndef AI_ANDROID_H
#define AI_ANDROID_H

#include "ai.h"

class ai_android:public AI
{
public:
    ai_android();
    ~ai_android() override;
    virtual void Initialise() override;
      virtual void calculateRoot() override;
};

#endif // AI_ANDROID_H
