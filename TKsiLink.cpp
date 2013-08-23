#include "TKsiLink.h"

using namespace rraLink;

#include "TKsiLink_p.h"
TKsiLink::TKsiLink():
    TLink(new TKsiLinkPrivate())
{
}

TKsiLink::TKsiLink(TKsiLinkPrivate* d_ptr):
    TLink(d_ptr)
{
}

double TKsiLink::getKsi() const
{
    const D(TKsiLink)
    return d->ksi;
}

void TKsiLink::setKsi(double ksi)
{
    D(TKsiLink)
    d->ksi = ksi;
}
