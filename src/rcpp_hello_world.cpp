
#include <Rcpp.h>

using namespace Rcpp;

// [[Rcpp::export]]
void debugEncodedRString(SEXP str)
{
	if(!Rf_isString(str))
		Rcout << "debugEncodedRString got something that is not a string..." << std::endl;
	else
	{
		std::stringstream s;
		
		for(size_t i=0; i<Rf_length(str); i++)
		{
			SEXP			el		= STRING_ELT(str, i);
			const char *	cstr	= CHAR(el); 

			s << "String#" << i << "\tis: '" << cstr << "' and encoding: '" << Rf_getCharCE(el) << "' while bytes:\t'";
			
			for(size_t ii=0; ii<strlen(cstr); ii++)
			{
				char buf[4];
				
				snprintf(buf, 4, "%02x", (unsigned char)cstr[ii]);
				s << buf;
			}
			
			s << "'\n";
		}
		
		Rcout << s.str() << std::endl;
	}
}