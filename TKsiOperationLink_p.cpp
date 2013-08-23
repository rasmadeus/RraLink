#include "TKsiOperationLink_p.h"

using namespace rraLink;

TKsiOperationLinkPrivate::TKsiOperationLinkPrivate()
{
    caption = "TKsiOperation";
}

double TKsiOperationLinkPrivate::kFirstDerivative() const
{
    return 2 * ksi * T;
}

double TKsiOperationLinkPrivate::kSecondDerivative() const
{
    return T * T;
}
