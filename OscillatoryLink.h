#ifndef OSCILLATORYLINK_H
#define OSCILLATORYLINK_H

#include "TwoLink.h"

namespace rraLink
{

class OscillatoryLinkPrivate;

class OscillatoryLink : public TwoLink
{
public:
    OscillatoryLink();
    double out(double in);
    void reset();
protected:
    OscillatoryLink(OscillatoryLinkPrivate* d_ptr);
    DECLARE_PRIVATE(OscillatoryLink)
};

}

#endif // OSCILLATORYLINK_H
