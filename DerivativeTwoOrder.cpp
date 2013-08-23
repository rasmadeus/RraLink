#include "DerivativeTwoOrder.h"

using namespace rraLink;

#include "TwoLink_p.h"
#include "Derivative.h"
DerivativeTwoOrder::DerivativeTwoOrder()
{
    D(TwoLink)
    d->firstLink = new Derivative();
    d->secondLink = new Derivative();
    d->caption = "DerivativeTwoOrder";
}

DerivativeTwoOrder::DerivativeTwoOrder(TwoLinkPrivate* d_ptr):
    TwoLink(d_ptr)
{
}

double DerivativeTwoOrder::out(double in)
{
    D(TwoLink)
    double dt  = d->outFirstLink(in);
    double ddt = d->outSecondLink(dt);
    return in + d->kFirstDerivative() * dt + d->kSecondDerivative() * ddt;
}
