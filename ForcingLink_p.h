#ifndef FORCINGLINKPRIVATE_H
#define FORCINGLINKPRIVATE_H

#include "TLink_p.h"
#include "Derivative.h"

namespace rraLink
{

class ForcingLinkPrivate: public TLinkPrivate
{
public:
    ForcingLinkPrivate();
    Derivative derivative;
    double getDerivative(double in);
    void reset();
};

}

#endif // FORCINGLINKPRIVATE_H
