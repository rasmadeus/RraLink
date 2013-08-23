#include "TLink.h"

using namespace rraLink;

#include "TLink_p.h"
TLink::TLink():
    Link(new TLinkPrivate())
{    
    setCaption("TLink");
}

TLink::TLink(TLinkPrivate* d_ptr):
    Link(d_ptr)
{
}

double TLink::getT() const
{
    const D(TLink)
    return d->T;
}

void TLink::setT(double T)
{
    if(!T){
        return;
    }
    D(TLink)
    d->T = T;
}
