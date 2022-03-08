#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ):
Form(target + "_SCForm", 145, 137),
_target(target)
{
    std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &scForm) {
    std::cout << "ShrubberyCreationForm copy assignment operator called." << std::endl;
    if (this == &scForm)
        return *this;
    this->setTarget(scForm.getTarget());
    this->setIsSigned(scForm.getIsSigned());
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &scForm):
Form(scForm.getName(), scForm.getRG_Sign(), scForm.getRG_Exec()),
_target(scForm.getTarget())
{
    std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const {
    return this->_target;
}

void        ShrubberyCreationForm::setTarget( std::string target ) {
    this->_target = target;
}

void    ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
    std::cout << this->getName() << std::endl;
    (void)executor;
}