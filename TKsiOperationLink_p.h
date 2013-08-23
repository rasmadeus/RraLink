#ifndef TKSIOPERATIONLINKPRIVATE_H
#define TKSIOPERATIONLINKPRIVATE_H

#include "TKsiLink_p.h"

namespace rraLink
{

class TKsiOperationLinkPrivate : public TKsiLinkPrivate
{
public:
    TKsiOperationLinkPrivate();
    double kFirstDerivative() const;
    double kSecondDerivative() const;
};

}

#endif // TKSIOPERATIONLINKPRIVATE_H
