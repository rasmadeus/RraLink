#ifndef TWOLINKPRIVATE_H
#define TWOLINKPRIVATE_H

#include "Link.h"
#include "TKsiOperationLink_p.h"

namespace rraLink
{

class TwoLinkPrivate : public TKsiOperationLinkPrivate
{
public:
    TwoLinkPrivate();
    ~TwoLinkPrivate();
    Link* firstLink;
    Link* secondLink;
    void reset();
    void setStep(double step);
    double out(Link* link, double in);
    double outFirstLink(double in);
    double outSecondLink(double in);
};

}

#endif // TWOLINKPRIVATE_H
