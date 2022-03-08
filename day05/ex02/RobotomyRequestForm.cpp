#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ):
Form(target + "_RRForm", 72, 45),
_target(target)
{
    std::cout << "RobotomyRequestForm default constructor called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor called." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &rrForm) {
    std::cout << "RobotomyRequestForm copy assignment operator called." << std::endl;
    if (this == &rrForm)
        return *this;
    this->setTarget(rrForm.getTarget());
    this->setIsSigned(rrForm.getIsSigned());
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rrForm):
Form(rrForm.getName(), rrForm.getRG_Sign(), rrForm.getRG_Exec()),
_target(rrForm.getTarget())
{
    std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
}

std::string RobotomyRequestForm::getTarget() const {
    return this->_target;
}

void        RobotomyRequestForm::setTarget( std::string target ) {
    this->_target = target;
}

bool    RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
    std::cout << this->getName() << std::endl;
    (void)executor;
    return true;
}