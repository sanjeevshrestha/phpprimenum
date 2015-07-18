#include <phpcpp.h>
#include <iostream>

void helloWorld (Php::Parameters &params)
{
	std::string name=params[0];
	std::cout <<"Hello "<<name<<", How are you ?" <<std::endl;

}



extern "C" {
    
    PHPCPP_EXPORT void *get_module() 
    {
        // static(!) Php::Extension object that should stay in memory
        // for the entire duration of the process (that's why it's static)
        static Php::Extension extension("primenum", "1.0");
	extension.add("helloWorld",helloWorld);        
        
        // return the extension
        return extension;
    }


}
