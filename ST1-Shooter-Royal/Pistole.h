#pragma once
class Pistole
{
private:
	int damag;
	int kritchance;
	int kritdamage;
	int attackspeed;
	int reloadtimer;
	int magazinsize;

public:
	Pistole();
	~Pistole();
	void schuss();
	void kritschuss();
	void reload();

	void setdamage(int);
	void setkritchance(int);
	void setkritdamage(int);
	void setattackspeed(int);
	void setreloadtimer(int);
	void setmagazinsize(int);

	int getdamage();
	int getkritchance();
	int getkritdamage();
	int getattackspeed();
	int getreloadtimer();
	int getmagazinsize();
};

