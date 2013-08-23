#include "TwoLink.h"

using namespace rraLink;

#include "TwoLink_p.h"
TwoLinkPrivate::TwoLinkPrivate()
{
    firstLink = secondLink = 0;
    caption = "TwoLinkPrivate";
}

TwoLinkPrivate::~TwoLinkPrivate()
{
    if(firstLink){
        delete firstLink;
    }
    if(secondLink){
        delete secondLink;
    }
}

void TwoLinkPrivate::reset()
{
    if(firstLink){
        firstLink->reset();
    }
    if(secondLink){
        secondLink->reset();
    }
}

void TwoLinkPrivate::setStep(double step)
{
    this->step = step;
    if(firstLink){
        firstLink->setStep(step);
    }
    if(secondLink){
        secondLink->setStep(step);
    }
}

double TwoLinkPrivate::out(Link *link, double in)
{
    return link ? link->out(in) : in;
}

double TwoLinkPrivate::outFirstLink(double in)
{
    return out(firstLink, in);
}

double TwoLinkPrivate::outSecondLink(double in)
{
    return out(secondLink, in);
}

TwoLink::TwoLink():
    TKsiLink(new TwoLinkPrivate())
{
    D(TwoLink)
    d->caption = "TwoLink";
}

TwoLink::TwoLink(TwoLinkPrivate* d_ptr):
    TKsiLink(d_ptr)
{
}

void TwoLink::reset()
{
    D(TwoLink)
    d->reset();
}

void TwoLink::setStep(double step)
{
    D(TwoLink)
    d->setStep(step);
}
