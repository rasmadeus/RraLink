#ifndef TWOLINK_H
#define TWOLINK_H

#include "TKsiLink.h"

namespace rraLink
{

class TwoLinkPrivate;

class TwoLink : public TKsiLink
{
public:
    TwoLink();
    void reset();
    void setStep(double step);
protected:
    TwoLink(TwoLinkPrivate* d_ptr);
    DECLARE_PRIVATE(TwoLink)
};

}

#endif // TWOLINK_H
