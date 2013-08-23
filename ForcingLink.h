#ifndef FORCINGLINK_H
#define FORCINGLINK_H

#include "TLink.h"

namespace rraLink
{

class ForcingLinkPrivate;

class ForcingLink : public TLink
{
public:
    ForcingLink();
    double out(double in);
    void reset();
    void setStep(double step);
protected:
    ForcingLink(ForcingLinkPrivate* d_ptr);
    DECLARE_PRIVATE(ForcingLink)
};

}
#endif // FORCINGLINK_H
