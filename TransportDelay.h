#ifndef TRANSPORTDELAY_H
#define TRANSPORTDELAY_H

#include "TLink.h"

namespace rraLink
{

class TransportDelayPrivate;

class TransportDelay : public TLink
{
public:
    TransportDelay();
    double out(double in);
    void reset();
protected:
    TransportDelay(TransportDelayPrivate* d_ptr);
    DECLARE_PRIVATE(TransportDelay)
};

}

#endif // TRANSPORTDELAY_H
