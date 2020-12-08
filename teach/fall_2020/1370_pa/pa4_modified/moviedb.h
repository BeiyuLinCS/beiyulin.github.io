#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "actor.h"

class MovieDB
{
public:
	int actorCt;
	MovieDB();

	// add the specified actor name to the db and return the index they were added at
	// if the db is already at max capacity, return -1
	int AddActor(string name);

	// add the specified movie title to the specified actor in the db
	// if the actor is not already in the db, add him or her
	// if the db is already at max capacity, return false, otherwise true
	bool AddRole(string actor_name, string movie_title);

	// return true if the specified actor is in the db
	bool ActorInDb(string actor_name);
	// return true if the specified actor is in the db and has the specified movie title
	//  in his or her movie list
	bool ActorInMovie(string actor_name, string movie_title);

	// print all the actors and their movie titles in the db, one per line, in the format:
	// name: title1, title2, title3, ... titlen
	void PrintAll();

private:
	static const int MAX_ACTORS = 100;

	Actor actors[MAX_ACTORS];
	// int actorCt;

	// find the specified actor in the db and return their index
	// return -1 if the actor is not in the db
	int findActor(string actor_name);
};

MovieDB::MovieDB()
{
	actorCt = 0;
}

int MovieDB::AddActor(string name)
{
	cout << "**************** inside of addactor ****************" << endl;
	int i = findActor(name);
	if (i != -1) {
		return i;
	}

	// not already there, need to add
	if (actorCt < MAX_ACTORS) {
		actors[actorCt].SetName(name);
		// cout << "actor name" << name << endl;
		actorCt++;
		return actorCt - 1;
	}

	// failed to add (already full)
	return -1;
}

bool
MovieDB::AddRole(string actor_name, string movie_title)
{
	// note that addactor will find or add new as necessary
	int i = AddActor(actor_name);

	if (i == -1) {
		// actor isn't there, try to add to end of list
		if (AddActor(actor_name)) {
			// added, set i to the newly added actor
			i = actorCt - 1;
		}
		else {
			// failed to add, done here
			return false;
		}
	}

	// i is the index of the correct actor at this point
	return actors[i].AddMovie(movie_title);
	// return true;
}

bool
MovieDB::ActorInMovie(string actor_name, string movie_title)
{
	int i = findActor(actor_name);
	if (i == -1) {
		// no such actor
		return false;
	}

	return actors[i].InMovie(movie_title);
	// reture true;
}

bool
MovieDB::ActorInDb(string actor_name)
{
	return findActor(actor_name) != -1;
}

int
MovieDB::findActor(string actor_name)
{
	for (int i = 0; i<actorCt; i++) {
		
		if (actors[i].GetName() == actor_name) {
			return i;
		}
	
	}
	
	return -1;
}

void
MovieDB::PrintAll()
{
	for (int i = 0; i<actorCt; i++) {
		cout << actors[i].GetName() << ": ";
		cout << actors[i].GetMovieList() << endl;
	}
}