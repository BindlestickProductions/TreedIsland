start %~dp0..\Bin64vc140.Dedicated\TreedIslandLauncher_Server.exe +gm_net_simulator oLatMin:60 oLatMax:150 +gm_disconnectDetection 0 +map tutorial +mphost
sleep 5
start %~dp0..\Bin64vc140\TreedIslandLauncher.exe +mpjoin +windowxy 50 50
sleep 2
start %~dp0..\Bin64vc140\TreedIslandLauncher.exe +mpjoin +windowxy 500 500





