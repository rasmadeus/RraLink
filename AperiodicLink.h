#ifndef APERIODICLINK_H
#define APERIODICLINK_H

#include "TLink.h"

namespace rraLink
{

class AperiodicLinkPrivate;

class AperiodicLink : public TLink
{
public:
    AperiodicLink();
    double out(double in);
    void reset();
protected:
    AperiodicLink(AperiodicLinkPrivate* d_ptr);
    DECLARE_PRIVATE(AperiodicLink)
};

}

#endif // APERIODICLINK_H
