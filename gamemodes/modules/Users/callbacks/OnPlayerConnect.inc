/*!
 * Users/callbacks/OnPlayerConnect.inc
 *
 * OnPlayerConnect(playerid)
 *
 > Priority: 8
 */

{
	this.PlayerUID[playerid] = INVALID_UID;
	this.PlayerNameUID[playerid] = this.FindAccountByName(Player.Info[playerid][Name]);
	
	ClassSelection.AllowSpawning(playerid, false);
}