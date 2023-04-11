/*
	Apophysis plugin
	NAME:			Plugin name
	DESCRIPTION:	Plugin description
	AUTHOR:			Plugin author
	LICENSE: https://www.gnu.org/licenses/gpl-3.0.en.html
*/
//TODO: Fill the plugin information above

//Uncomment the line below if your plugin has no variables
//#define APO_NOVARIABLES 

#ifndef APO_NOVARIABLES
//Define this structure before including plugin.h
typedef struct
{
	//TODO: Declare variables 
	//Use the conventional pluginname_varname format
	double pluginname_v1;
} Variables;
#endif

#include "plugin.h"

#include <complex> //Use complex type (C++ headers supported!)
typedef std::complex<double> cp_t; 
//TODO: include additional headers (optional)

//TODO: Set the name of this plugin
APO_PLUGIN("pluginname");

#ifndef APO_NOVARIABLES
//TODO: Define the Variables with default value
APO_VARIABLES(
	VAR_REAL(pluginname_v1, 0.0)
);
#endif

int PluginVarPrepare(Variation* vp)
{
	//TODO: Prepare plugin variables (optional)

	//Always return TRUE.
	return TRUE;
}

int PluginVarCalc(Variation* vp)
{

	//TODO: Add transform logic
	//Use plugin variables like this: VAR(pluginname_v1)
	
	FPx += VVAR * FTx;
	FPy += VVAR * FTy;
	//Add 3D compatibility
	FPz += VVAR * FTz;

	//TODO: Enable Direct Color (optional)
	//TC = fmod( TC, 1.0);//always do fmod before assigning

	return TRUE;
}
