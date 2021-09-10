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
	

	void DisplayPlaylist(){};
	void getCd();
	void setCD();
	void setPlaylist();
};