#pragma once

#include <fstream>

#include "inputElement.h"
#include "container.h"
#include "inputBird.h"
#include "inputFish.h"
#include "Head.h"
#include "inputAnimal.h"

container* input(std::ifstream& file);