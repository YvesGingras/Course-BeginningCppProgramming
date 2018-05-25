//
// Created by Yves Gingras on 18-05-24.
//

#ifndef CHALLANGES_INSUFFICENTFUNDSEXCEPTION_H
#define CHALLANGES_INSUFFICENTFUNDSEXCEPTION_H

//#include <exception>

class InsufficientFundsException : public std::exception
{

public:
    InsufficientFundsException() = default;
    ~InsufficientFundsException() = default;

    const char* what() const noexcept override {
        return "Insufficient funds to complete withdraw operation.";
    };
};


#endif //CHALLANGES_INSUFFICENTFUNDSEXCEPTION_H
