#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("default_targer") {
    std::cout << "ShrubberyCreationForm created with default target." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other), target(other.target) {
    std::cout << "ShrubberyCreationForm copied (target = " << target << ")" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        AForm::operator=(other); 
        this->target = other.target;
    }
    std::cout << "ShrubberyCreationForm assigned (target = " << target << ")" << std::endl;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm for target " << target << " destroyed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), target(target) {
  std::cout << "ShrubberyCreationForm created with " << target << std::endl;
}
void ShrubberyCreationForm::executeAction() const {
    std::ofstream file((target + "_shrubbery").c_str());
    if (!file)
        throw std::runtime_error("Failed to create file");
    file << "       &&& &&  & &&\n"
     << "   && &\\/&\\|& ()|/ @, &&\n"
     << "   &\\/(/&/&||/& /_/)_&/_&\n"
     << "&() &\\/&|()|/&\\/ '%\" & ()\n"
     << "&_\\/&_/&&&|& |&&/&__%_/_&\n"
     << "&&   && & &| &| /& & % ()&\n"
     << "   ()&_---()&\\&\\|&&-&&--%\n"
     << "             &&     &&\n"
     << "             ||     ||\n"
     << "             ||     ||\n"
     << "             ||     ||\n"
     << "       ______/  \\___/_____\n";

}
