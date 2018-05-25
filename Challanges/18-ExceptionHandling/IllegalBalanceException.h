//
// Created by Yves Gingras on 18-05-24.
//

#ifndef CHALLANGES_ILLEGALBALANCEEXCEPTION_H
#define CHALLANGES_ILLEGALBALANCEEXCEPTION_H

class IllegalBalanceException : public std::exception {
public:
    IllegalBalanceException() = default;
    virtual ~IllegalBalanceException() = default;

    const char* what() const noexcept override {
        return "Illegal balance exception";
    };
};

#endif //CHALLANGES_ILLEGALBALANCEEXCEPTION_H
