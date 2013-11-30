/*
 * ImageMain.cpp
 *
 *  Created on: Nov 18, 2013
 *      Author: Owner
 */


#include "ImageBaseClass.hpp"
#include "MRI.hpp"
#include "CT.hpp"
#include "UltraSound.hpp"




int main(void){

	CT x;

	//user does it.
	x.insertSummary();
	x.Comment();
	x.results();


	// initialize in code
	MRI y("Lenna.png",12,5,1,"1H");
	y.displayImage();




	return(0);
}
