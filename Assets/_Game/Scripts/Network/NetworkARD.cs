using UnityEngine;
using _Game.Scripts.Services;
/*
	Documentation: https://mirror-networking.gitbook.io/docs/components/network-manager
	API Reference: https://mirror-networking.com/docs/api/Mirror.NetworkManager.html
*/
namespace Mirror
{
	
// Custom NetworkManager that simply assigns the correct racket positions when
// spawning players. The built in RoundRobin spawn method wouldn't work after
// someone reconnects (both players would be on the same side).
    [AddComponentMenu("")]
    public class NetworkARD : NetworkManager
    {
		
        public Transform MainSpawn;
        public Transform DebilSpawn;
		

        public override void OnServerAddPlayer(NetworkConnectionToClient conn)
        {
            // add player at correct spawn position
			
            Transform start = numPlayers == 0 ? MainSpawn : DebilSpawn;
            GameObject player = Instantiate(playerPrefab, start.position, start.rotation);
            player.GetComponent<Bastille>().playerNumber = (numPlayers == 0 ? 0 : 1);
            NetworkServer.AddPlayerForConnection(conn, player);
        }

        public override void OnServerDisconnect(NetworkConnectionToClient conn)
        {
			
            // call base functionality (actually destroys the player)
            base.OnServerDisconnect(conn);
        }
		
    }
}