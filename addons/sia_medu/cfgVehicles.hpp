/* MACROS DEFINITION */

#define Macro_scope scope = 2;\
					scopeCurator = 2;\
					author=$STR_RHS_AUTHOR_FULL;

#define AUTHOR_MACRO author=$STR_RHS_AUTHOR_FULL;

#define Standard_Equipment ItemMap,ItemCompass,ItemWatch,ItemRadio

#define MAG_2(a) a, a
#define MAG_3(a) a, a, a
#define MAG_4(a) a, a, a, a
#define MAG_5(a) a, a, a, a, a
#define MAG_6(a) a, a, a, a, a, a
#define MAG_7(a) a, a, a, a, a, a, a

class CfgEditorSubcategories
{
    class sia_infantry
	{
		displayName = "Infantry";
	};

	class sia_infantry_sf
	{
		displayName = "Infantry (Special Forces)";
	};

	class sia_infantry_sf2
	{
		displayName = "Infantry (Commandos)";
	};

};

class cfgVehicles {
    #include "cfgBackpacks.hpp"
	
    #include "units\infantry.hpp"
    #include "units\infantry_sf.hpp"
	#include "units\infantry_sf2.hpp"

	//#include "vehicles\cars.hpp" // Still WIP
};