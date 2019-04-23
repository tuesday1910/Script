class life_cur {
    idd = 4000;
    name= "life_cur";
    movingEnable = 0;
    enableSimulation = 1;
class controlsBackground {
class RscPicture_1200: Life_RscPicture
{
	    idc = 1200;
	    text = "textures\Curfew.paa";
	    x = 0.0125;
	    y = -0.18;
	    w = 0.875;
    	h = 1.32;
   };
};
class controls {
	class RscButtonMenu_2400: Life_RscButtonMenu
{
	idc = 2400;
	text = ""; //--- ToDo: Localize;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";  
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";  
            colorBackground[] = {0, 0, 0, 0};  
            colorBackground2[] = {1, 1, 1, 0};  
            color[] = {1, 1, 1, 0};  
            color2[] = {1, 1, 1, 0};  
            colorText[] = {1, 1, 1, 0};  
            colorDisabled[] = {1, 1, 1, 0};
	onButtonClick = "closeDialog 0; [1] spawn life_fnc_selectPos;";
	x = 0.55;
	y = 0.38;
	w = 0.15;
	h = 0.06;
};
class RscButtonMenu_2401: Life_RscButtonMenu
{
	idc = 2401;
	text = ""; //--- ToDo: Localize;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";  
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";  
            colorBackground[] = {0, 0, 0, 0};  
            colorBackground2[] = {1, 1, 1, 0};  
            color[] = {1, 1, 1, 0};  
            color2[] = {1, 1, 1, 0};  
            colorText[] = {1, 1, 1, 0};  
            colorDisabled[] = {1, 1, 1, 0};
	onButtonClick = "closeDialog 0; [2] spawn life_fnc_selectPos;";
	x = 0.55;
	y = 0.45;
	w = 0.15;
	h = 0.06;
};
class RscButtonMenu_2402: Life_RscButtonMenu
{
	idc = 2402;
	text = ""; //--- ToDo: Localize;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";  
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";  
            colorBackground[] = {0, 0, 0, 0};  
            colorBackground2[] = {1, 1, 1, 0};  
            color[] = {1, 1, 1, 0};  
            color2[] = {1, 1, 1, 0};  
            colorText[] = {1, 1, 1, 0};  
            colorDisabled[] = {1, 1, 1, 0};
	onButtonClick = "closeDialog 0; [3] spawn life_fnc_selectPos;";
	x = 0.55;
	y = 0.51;
	w = 0.15;
	h = 0.06;
};
class RscButtonMenu_2403: Life_RscButtonMenu
{
	idc = 2403;
	text = ""; //--- ToDo: Localize;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";  
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";  
            colorBackground[] = {0, 0, 0, 0};  
            colorBackground2[] = {1, 1, 1, 0};  
            color[] = {1, 1, 1, 0};  
            color2[] = {1, 1, 1, 0};  
            colorText[] = {1, 1, 1, 0};  
            colorDisabled[] = {1, 1, 1, 0};
	onButtonClick = "closeDialog 0; [4] spawn life_fnc_selectPos;";
	x = 0.523672;
	y = 0.550998;
	w = 0.126257;
	h = 0.050998;
};
class RscButtonMenu_2404: Life_RscButtonMenu
{
	idc = 2404;
	text = ""; //--- ToDo: Localize;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";  
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";  
            colorBackground[] = {0, 0, 0, 0};  
            colorBackground2[] = {1, 1, 1, 0};  
            color[] = {1, 1, 1, 0};  
            color2[] = {1, 1, 1, 0};  
            colorText[] = {1, 1, 1, 0};  
            colorDisabled[] = {1, 1, 1, 0};
	onButtonClick = "closeDialog 0; [5] spawn life_fnc_selectPos;";
	x = 0.55;
	y = 0.64;
	w = 0.15;
	h = 0.06;
};
class RscButtonMenu_2405: Life_RscButtonMenu
{
	idc = 2405;
	text = ""; //--- ToDo: Localize;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";  
            animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";  
            animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";  
            colorBackground[] = {0, 0, 0, 0};  
            colorBackground2[] = {1, 1, 1, 0};  
            color[] = {1, 1, 1, 0};  
            color2[] = {1, 1, 1, 0};  
            colorText[] = {1, 1, 1, 0};  
            colorDisabled[] = {1, 1, 1, 0};
	onButtonClick = "closeDialog 0; [] call life_fnc_curdis;";
	x = 0.55;
	y = 0.72;
	w = 0.15;
	h = 0.06;
};
};
};