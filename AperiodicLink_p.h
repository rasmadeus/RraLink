#ifndef APERIODICLINKPRIVATE_H
#define APERIODICLINKPRIVATE_H

#include "TLink_p.h"
#include "Integrator.h"

namespace rraLink
{

class AperiodicLinkPrivate: public TLinkPrivate
{
public:
    AperiodicLinkPrivate();
    Integrator integrator;
    double preValue;
    void reset();
    double integrate(double in);
};

}

#endif // APERIODICLINKPRIVATE_H
