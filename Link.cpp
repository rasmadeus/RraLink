#include "Link.h"

using namespace rraLink;

#include "Link_p.h"
LinkPrivate::LinkPrivate():
    step(0.001),
    caption("Link")
{
}

LinkPrivate::~LinkPrivate()
{
}

Link::Link():
    d_ptr(new LinkPrivate())
{
}

Link::Link(LinkPrivate* d_ptr):
    d_ptr(d_ptr)
{
}

Link::~Link()
{
    delete d_ptr;
}

void Link::setStep(double step)
{
    if(!step){
        return;
    }
    D(Link)
    d->step = step;
}

double Link::dt() const
{
    const D(Link)
    return d->step;
}

std::string Link::getCaption() const
{
    const D(Link)
    return d->caption;
}

void Link::setCaption(std::string caption)
{
    D(Link)
    d->caption = caption;
}
