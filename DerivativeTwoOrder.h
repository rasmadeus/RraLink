#ifndef DERIVATIVETWOORDER_H
#define DERIVATIVETWOORDER_H

#include "TwoLink.h"

namespace rraLink
{

class TwoLinkPrivate;

class DerivativeTwoOrder : public TwoLink
{
public:
    DerivativeTwoOrder();
    double out(double in);
protected:
    DerivativeTwoOrder(TwoLinkPrivate* d_ptr);
    DECLARE_PRIVATE(TwoLink)
};

}

#endif // DERIVATIVETWOORDER_H
