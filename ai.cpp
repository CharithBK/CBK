#include "ai.h"
#include <QtGlobal>


#ifdef Q_OS_WIN
  #include "ai_windows.h"

 #elif defined(Q_OS_MAC)
    #include "ai_mac.h"
 #elif defined(Q_OS_LINUX)
    #include "ai_linux.h"
 #elif defined(Q_OS_ANDROID)
    #include "ai_android.h"
#endif

AI &AI::instance()
{
#ifdef Q_OS_WIN
    static ai_windows singleton;
 #elif defined (Q_OS_MAC)
    static ai_mac singleton;
#elif defined (Q_OS_LINUX)
   static ai_linux singleton;
#elif defined (Q_OS_ANDROID)
   static ai_android singleton;

#endif
    return singleton;
}
AI::~AI()
{

}

AI::AI()
{

}
