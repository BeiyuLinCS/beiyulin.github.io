#include "moviedb.h"


int
MovieDB::AddActor(string name)
{
	int i = findActor(name);
	if (i != -1) {
		return i;
	}

	// not already there, need to add
	if (actorCt < MAX_ACTORS) {
		actors[actorCt].SetName(name);
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