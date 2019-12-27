#ifndef AI_H
#define AI_H


class AI
{
public:
   static AI& instance();
    //void calculateRoot();
    virtual ~AI();//distructor
    virtual void Initialise()=0;
    virtual void calculateRoot()=0;
protected: explicit AI();


};

#endif // AI_H
