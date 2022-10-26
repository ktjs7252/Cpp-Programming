#include <iostream>
#include <string>
#include "Lab.h"

using namespace std;


int main()
{
	Lab lab01{ "영상처리 연구실",1,10 };
	applyLab(lab01, 2);
	lab01.printLab();

	Lab lab02 = createLab();
	lab02.printLab();

	/*Student st1{ "김철수","010-1234-1234" };
	Lab lab01{ "영상처리 연구실",1,10,stl };

	Lab01.printStudent();*/




	return 0;
}
