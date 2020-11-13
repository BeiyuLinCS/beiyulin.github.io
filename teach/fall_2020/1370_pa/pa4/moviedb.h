#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "actor.h"

class MovieDB
{
public:
	MovieDB() { actorCt = 0; }

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
	int actorCt;

	// find the specified actor in the db and return their index
	// return -1 if the actor is not in the db
	int findActor(string actor_name);
};
