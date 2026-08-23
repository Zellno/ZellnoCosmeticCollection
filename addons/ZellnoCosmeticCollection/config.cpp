class CfgPatches
{
    class ZellnoCosmeticCollection
    {
        units[] =
        {
            "Zellno_WojtekTShirt"
        };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Characters_Tops"
        };
    };
};

class CfgVehicles
{
    class TShirt_ColorBase;

    class Zellno_WojtekTShirt: TShirt_ColorBase
    {
        scope = 2;
        displayName = "Zellno Wojtek T-Shirt";
        descriptionShort = "A free commemorative T-shirt featuring the Zellno emblem and Wojtek.";

        hiddenSelectionsTextures[] =
        {
            "\DZ\characters\tops\data\tshirt_ground_black_co.paa",
            "\ZellnoCosmeticCollection\data\wojtek_tshirt_co.paa",
            "\ZellnoCosmeticCollection\data\wojtek_tshirt_co.paa"
        };
    };
};
