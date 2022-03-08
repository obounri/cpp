#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ):
Form(target + "_PPForm", 25, 5),
_target(target)
{
    std::cout << "PresidentialPardonForm default constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm destructor called." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &ppForm) {
    std::cout << "PresidentialPardonForm copy assignment operator called." << std::endl;
    if (this == &ppForm)
        return *this;
    this->setTarget(ppForm.getTarget());
    this->setIsSigned(ppForm.getIsSigned());
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ppForm):
Form(ppForm.getName(), ppForm.getRG_Sign(), ppForm.getRG_Exec()),
_target(ppForm.getTarget())
{
    std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
}

std::string PresidentialPardonForm::getTarget() const {
    return this->_target;
}

void        PresidentialPardonForm::setTarget( std::string target ) {
    this->_target = target;
}

void    PresidentialPardonForm::execute( Bureaucrat const & executor ) const {
    std::cout << this->getName() << std::endl;
    (void)executor;
}
