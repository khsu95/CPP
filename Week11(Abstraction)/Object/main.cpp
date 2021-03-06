#include<iostream>
#include<string>
#include"GraphicEditor.h"

int UI::select = 0;

int main() {
	GraphicEditor* GE;
	GE = new GraphicEditor;
	GE->run();
	delete GE;
	return 0;
}