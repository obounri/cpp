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

bool    ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
    if (this->canExec(executor)) {
        std::ofstream file(this->getTarget() + "_shrubbery");
        if (file.is_open()) {
            file << "            .        +          .      .          ." << std::endl;
            file << "     .            _        .                    ." << std::endl;
            file << "  ,              /;-._,-.____        ,-----.__" << std::endl;
            file << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._," << std::endl;
            file << "  `                 \\   _|`\"=:_::.`.);  \\ __/ /" << std::endl;
            file << "                      ,    `./  \\:. `.   )==-'  ." << std::endl;
            file << "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           ." << std::endl;
            file << ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o" << std::endl;
            file << "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     ." << std::endl;
            file << "  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7" << std::endl;
            file << "   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/" << std::endl;
            file << "              \\:  `  X` _| _,\\/'   .-'" << std::endl;
            file << ".               \":._:`\\____  /:'  /      .           ." << std::endl;
            file << "                    \\::.  :\\/:'  /              +" << std::endl;
            file << "   .                 `.:.  /:'  }      ." << std::endl;
            file << "           .           ):_(:;   \\           ." << std::endl;
            file << "                      /:. _/ ,  |" << std::endl;
            file << "                   . (|::.     ,`                  ." << std::endl;
            file << "     .                |::.    {\\" << std::endl;
            file << "                      |::.\\  \\ `." << std::endl;
            file << "                      |:::(\\    |" << std::endl;
            file << "              O       |:::/{ }  |                  (o" << std::endl;
            file << "               )  ___/#\\::`/ (O \"==._____   O, (O  /`" << std::endl;
            file << "          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~" << std::endl;
            file << "      ~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~\\|/~~" << std::endl;
            file.close();
            std::cout << (this->getTarget() + "_shrubbery") << " created successfully" << std::endl;
        }
        else {
            std::cout << "Could not create file " << (this->getTarget() + "_shrubbery") << std::endl;
            return false;
        }
        return true;
    }
    return false;
}
