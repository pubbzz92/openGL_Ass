#pragma once
#include <GL\glut.h>
#include "imageloader.h"
class Textures
{

public:
	
	Textures();
	static GLuint loadTextures(Image* image);
	~Textures();
	

	
};


