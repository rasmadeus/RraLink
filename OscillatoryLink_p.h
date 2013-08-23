#ifndef OSCILLATORYLINK_P_H
#define OSCILLATORYLINK_P_H

#include "TwoLink_p.h"

namespace rraLink
{

class OscillatoryLinkPrivate: public TwoLinkPrivate
{
public:
    OscillatoryLinkPrivate();
    double dy;
    double out;
    double getInToSecondIntegrator(double in) const;
};

}

#endif // OSCILLATORYLINK_P_H
