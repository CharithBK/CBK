#ifndef AI_LINUX_H
#define AI_LINUX_H

#include "ai.h"

class ai_linux:public AI
{
public:
    ai_linux();
    ~ai_linux() override;
    virtual void Initialise() override;
      virtual void calculateRoot() override;
};

#endif // AI_LINUX_H
