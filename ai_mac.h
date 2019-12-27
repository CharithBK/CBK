#ifndef AI_MAC_H
#define AI_MAC_H

#include "ai.h"

class ai_mac:public AI
{
public:
    ai_mac();
    ~ai_mac() override;
    virtual void Initialise() override;
      virtual void calculateRoot() override;
};

#endif // AI_MAC_H
