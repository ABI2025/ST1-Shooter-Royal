#include "Pistole.h"

Pistole::Pistole()
{
	damag = 5;
	kritchance = 0;
	kritdamage = 0;
	attackspeed = 1;
	reloadtimer = 3;
	magazinsize = 30;
}

Pistole::~Pistole()
{
}

void Pistole::schuss()
{

}

void Pistole::kritschuss()
{
	
}

void Pistole::reload()
{

}

void Pistole::setdamage(int damag)
{
	this->damag = damag;
}

void Pistole::setkritchance(int kritchance)
{
	this->kritchance = kritchance;
}

void Pistole::setkritdamage(int kritdamage)
{
	this->kritdamage = kritdamage;
}

void Pistole::setattackspeed(int attackspeed)
{
	this->attackspeed = attackspeed;
}

void Pistole::setreloadtimer(int reloadtimer)
{
	this->reloadtimer = reloadtimer;
}

void Pistole::setmagazinsize(int magazinsize)
{
	this->magazinsize = magazinsize;
}

int Pistole::getdamage()
{
	return damag;
}

int Pistole::getkritchance()
{
	return kritchance;
}

int Pistole::getkritdamage()
{
	return kritdamage;
}

int Pistole::getattackspeed()
{
	return attackspeed;
}

int Pistole::getreloadtimer()
{
	return reloadtimer;
}

int Pistole::getmagazinsize()
{
	return magazinsize;
}
