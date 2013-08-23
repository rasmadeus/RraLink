#ifndef LINK_H
#define LINK_H

#include "global.h"
#include <string>

namespace rraLink
{

class LinkPrivate;

class Link
{
public:
    Link();
    virtual ~Link();
    void setStep(double step);
    double dt() const;
    virtual double out(double in) = 0;
    virtual void reset() = 0;
    std::string getCaption() const;
    void setCaption(std::string caption);
protected:
    LinkPrivate* d_ptr;
    Link(LinkPrivate* d_ptr);
    DECLARE_PRIVATE(Link)
    NO_COPY(Link)
};

}

#endif // LINK_H
