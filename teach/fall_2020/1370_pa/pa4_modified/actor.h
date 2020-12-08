#pragma once
#include <iostream>
#include <string>
using namespace std;


class Actor
{
public:
	string actor_name;
	string movie_list[1000];
	int movie_count;

	void SetName(string name);
	bool AddMovie(string movie_title);
	bool InMovie(string movie_title);
	string GetName();
	string GetMovieList();

};

void Actor::SetName(string name){
	actor_name = name;
	movie_count = 0;
}

bool Actor::AddMovie(string movie_title){
	// inmovie_list.append;
	if (movie_count < 1000){
		movie_list[movie_count] = movie_title;
		movie_count += 1;
		return true;
	}else{return false;}
}


bool Actor::InMovie(string movie_title){
	
	for (int k=0;k<= movie_count;k++){
		if (movie_list[k] == movie_title){
			return true;
		}
	}
	
	return false;
}


string Actor::GetName(){
	return actor_name;

}

string Actor::GetMovieList(){
	for (int h=0;h<=movie_count;h++){
		return movie_list[h];
	}
	return "";
}


