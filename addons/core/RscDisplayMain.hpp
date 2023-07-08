// Shows a button to quickly connect to a server from main menu (only after first connecting normally)

class RscButton;
class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay {
    class controls {
        class GVAR(quickConnectToServer_main): RscButton { // port 2303
            x = "0.5 - (0.5 * 10) * (pixelW * pixelGridNoUIScale * 2)";
            y = "0.5 - (10 / 2) * (pixelH * pixelGridNoUIScale * 2) - 4 * (pixelH * pixelGridNoUIScale * 2)";
            w = "10 * (pixelW * pixelGridNoUIScale * 2)";
            h = "2 * (pixelH * pixelGridNoUIScale * 2)";
            text = "Connect to BW Server";
            tooltip = "Don't forget your beer!"; 
            colorBackground[] = {0.2,0,0,1};
            onLoad = "params ['_ctrl'];  private _passwordCache = profileNamespace getVariable ['cba_ui_ServerPasswords', [[], []]];  private _index = (_passwordCache select 0) find '104.128.50.152:2303';  if (_index isEqualTo -1) then { _ctrl ctrlShow false; };";
            onButtonClick = " private _passwordCache = profileNamespace getVariable ['cba_ui_ServerPasswords', [[], []]];  private _index = (_passwordCache select 0) find '104.128.50.152:2303';  private _password = (_passwordCache select 1) param [_index, ''];  connectToServer ['104.128.50.152', 2303, _password];";
        };
    };
};
