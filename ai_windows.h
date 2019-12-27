#ifndef AI_WINDOWS_H
#define AI_WINDOWS_H

#include "ai.h"

class ai_windows:public AI
{
public:
    ai_windows();
    ~ai_windows() override;
    virtual void Initialise() override;
      virtual void calculateRoot() override;
};

#endif // AI_WINDOWS_H
