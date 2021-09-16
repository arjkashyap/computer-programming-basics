/*
		DESIGN A JUKE BOX
	Assuming that the juke box is a simulated virtual 
	juke box, we first try to assume the core objects:
	-> Song
	-> PlayList
	-> JukeBox
	-> CD
	-> Cd Player
	-> User
*/


class JukeBox 
{
private:
	CDPlayer cdPlayer;
	ordered_set<CD> cd_collection;
	User user;
	SongSelector selector;
public: 
	void setUser(User);
	void addCD(CD);
};


class CDPlayer
{
private:
	Playlist pl;
	Bool IsRunning;
	CD cd;
public:

	// constructors:
	CDPlayer();
	CDPlayer(PlayList pl, CD cd);
	CDPlayer(CD cd);
	
	void DisplayPlaylist(){};
	void getCd();
	void setCD();
	void setPlaylist(PlayList pl);
};


class PlayList
{
private:
	queue<Song> playlist;
	int PlayListID;
	
	
public: 
	PlayList(queue<Song> playlist);
	
	
	Song getNextSong();
	void AddSong(Song song){// add this song to playlist queue}
	void RemoveSong(Song song) {}
};

class CDPlayer
{
	// artist, release, name, id ..
};

class Song 
{
	// artist, Album, . . . name, id
};


class User
{
private:
	int UserId;
	.
	.
	.
	.
	.
	
};