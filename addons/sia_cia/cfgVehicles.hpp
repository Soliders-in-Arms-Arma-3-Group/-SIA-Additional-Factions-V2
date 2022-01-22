/* MACROS DEFINITION */

#define Macro_scope scope = 2;\
					scopeCurator = 2;\
					author=McKendrick;

#define AUTHOR_MACRO author="Solders in Arms";

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
};

class cfgVehicles {
    #include "cfgBackpacks.hpp"
    #include "units\infantry.hpp"
};