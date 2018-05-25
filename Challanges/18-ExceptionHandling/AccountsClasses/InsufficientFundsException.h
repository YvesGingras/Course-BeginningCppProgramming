//
// Created by Yves Gingras on 18-05-24.
//

#ifndef CHALLANGES_INSUFFICENTFUNDSEXCEPTION_H
#define CHALLANGES_INSUFFICENTFUNDSEXCEPTION_H

//#include <exception>

class InsufficientFundsException : public std::exception
{

public:
    InsufficientFundsException() noexcept = default;
    ~InsufficientFundsException() = default;

    const char* what() const noexcept override {
        return "Insufficient funds exception.";
    }
};


#endif //CHALLANGES_INSUFFICENTFUNDSEXCEPTION_H
