#ifndef TRANSPORTDELAY_P_H
#define TRANSPORTDELAY_P_H

#include "TLink_p.h"
#include <queue>

namespace rraLink
{

class TransportDelayPrivate: public TLinkPrivate
{
public:
    TransportDelayPrivate();
    std::queue<double> ins;
    double time;
    void reset();
    double out(double in);
};

}

#endif // TRANSPORTDELAY_P_H
