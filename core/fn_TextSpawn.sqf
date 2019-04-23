/*

======================================================
Créé par : RomainALC
Description : Message de bienvenue
Fichier : fn_TextSpawn.sqf
======================================================

*/
private["_Ns","_imgW","_Mw","_Mr","_Mc","_Md","_rmc","_coul","_hour","_brj","_Sp","_Np"];
// A modifier
/*
Dans les lignes suivantes :
	<br/> permet un saut a la ligne
*/
_Ns = "Message"; //Noms du serveur
_imgW = "<img image='icons\ico_peach.paa'/>"; //Icons
_Mw = "Voici un type de message de connection <br/> Vous pouvez bien sur le changer"; //Message BLUFOR
_Mr = "Voici un type de message de connection <br/> Vous pouvez bien sur le changer"; //Message Independant
_Mc = "Voici un type de message de connection <br/> Vous pouvez bien sur le changer"; //Message Civil
_Md = "Une erreur est survenue"; //Message Erreur
_rmc = "Cordialement"; //Remerciement
_coul = "#FFFFFF"; //couleur du message en Hexadecimal (Par default Blanc)

//A ne pas modifier
_hour = floor daytime;
_brj = "";

if (_hour >= 8 and _hour <= 21) then
{
 _brj = "Bonjour "; // Le message dit bonjour lors qu'il est entre 8 et 21 ingame
} else {
 _brj = "Bonsoir "; // Le message dit bonsoir lors qu'il n'est pas entre 8 et 21 ingame
};

_Np = name player; //Cherche le nom du joueur
_Sp = side player; //Cherche le Side du joueur

/*
Dans les lignes suivantes :
	%1 correspond au nom du serveur
	%2 correspond au nom du joueur
	%3 correspond au message
	%4 correspond à l'icon
	%5 correspond au Bonjour/Bonsoir
	%6 correspond au remerciement
	%7 correspond a la couleur choisie

	<t> </t> Entour obligatoirement le message
	<br/> permet un saut a la ligne
*/
switch (_Sp) do
{
	case west:
	{
		hint parseText format ["<t color='%7' >%4 %1 %4<br/><br/>%5 %2<br/>%3<br/><br/>%6</t>", _Ns, _Np, _Mw, _imgW, _brj, _rmc, _coul]; //Message BLUFOR
	};
	case resistance:
	{
		hint parseText format ["<t color='%7' >%4 %1 %4<br/><br/>%5 %2<br/>%3<br/><br/>%6</t>", _Ns, _Np, _Mw, _imgW, _brj, _rmc, _coul]; //Message Independant
	};

	case civilian:
	{
		hint parseText format ["<t color='%7' >%4 %1 %4<br/><br/>%5 %2<br/>%3<br/><br/>%6</t>", _Ns, _Np, _Mw, _imgW, _brj, _rmc, _coul]; //Message Civil
	};

	default
	{
		hint parseText format ["<t color='%7' >%4 %1 %4<br/><br/>%3<br/><br/>%6</t>", _Ns, _Np, _Mw, _imgW, _brj, _rmc, _coul]; //Message Erreur
	};
};