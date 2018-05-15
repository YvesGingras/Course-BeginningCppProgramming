//
// Created by Yves Gingras on 18-05-14.
// Used for the 'Interface demo'.
//

#ifndef CHALLANGES_IPRINTABLE_H
#define CHALLANGES_IPRINTABLE_H
#include <ostream>

class IPrintable {
    friend std::ostream& operator<<(std::ostream& ostream, const IPrintable& rhs);

public:
    virtual void print(std::ostream& ostream) const = 0;
};
#endif //CHALLANGES_IPRINTABLE_H
