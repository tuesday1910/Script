/*
file: fn_ring.sqf
Author: Silencedaxis(AKA Scott Lee)
Description:
Makes the wedding ring work! 
*/

//Closes the player's inventory 
closeDialog 0;


//Adds a message to the player's screen
hint "You have just gotten married! Congratulations! Here is $500 in cash!";
sleep 3;

//Adds the money!
_funds = 500;

life_cash = life_cash + _funds;