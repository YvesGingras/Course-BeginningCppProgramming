//
// Created by Yves Gingras on 18-05-15.
//

#ifndef CHALLANGES_IPRINTABLE_H
#define CHALLANGES_IPRINTABLE_H

#include <iostream>

class IPrintable
{
    friend std::ostream& operator<< (std::ostream ostream, const IPrintable& object);

public:
    virtual void Print(std::ostream& ostream) const = 0;
    virtual ~IPrintable() = default;
};


#endif //CHALLANGES_IPRINTABLE_H
