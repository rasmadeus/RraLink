#ifndef INTEGRATOR_P_H
#define INTEGRATOR_P_H

#include "Link_p.h"

namespace rraLink
{

class IntegratorPrivate: public LinkPrivate
{
public:
    IntegratorPrivate();
    void reset();
    double getTrapezArea(double basis) const;
    double summ;
    double basis;
};

}

#endif // INTEGRATOR_P_H
