#include <phpcpp.h>

extern "C" {
    
    PHPCPP_EXPORT void *get_module() 
    {
        // static(!) Php::Extension object that should stay in memory
        // for the entire duration of the process (that's why it's static)
        static Php::Extension extension("primenum", "1.0");
        
        
        // return the extension
        return extension;
    }
}
