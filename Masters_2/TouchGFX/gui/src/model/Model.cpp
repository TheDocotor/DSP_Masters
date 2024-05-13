
#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#ifndef SIMULATOR
#include "stm32f7xx_hal.h"
#endif

extern __IO uint16_t uhADCxConvertedData;

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	modelListener->UpdateGraph(uhADCxConvertedData * 3300/4096);
}
