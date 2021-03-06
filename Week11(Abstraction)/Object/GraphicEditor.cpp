#include"GraphicEditor.h"
#include"Line.h"
#include"Circle.h"
#include"Rectangle.h"

GraphicEditor::GraphicEditor() {
	this->top = 0;
}

bool GraphicEditor::run() {
	while (1) {
		switch (UI::menu()) {
		case 1:
			Insert(UI::Insert());
			break;
		case 2:
			Delete(UI::Delete());
			break;
		case 3:
			Show();
			break;
		case 4:
			return true;
		default:
			cout << "Wrong Input" << endl;
			return true;
		}
	}
}

bool GraphicEditor::Insert(int select) {
	Shape* ptr;
	switch (select){
	case 1:
		ptr = new Line(top++);
		break;
	case 2:
		ptr = new Circle(top++);
		break;
	case 3:
		ptr = new Rectangle(top++);
		break;
	default:
		return false;
	}
	if (top == 1) {
		pLast = ptr;
		pStart = ptr;
	}
	pLast->ptr = ptr;
	pLast = ptr;
	ptr->ptr = NULL;
}

bool GraphicEditor::Delete(int select) {
	Shape* ptr;
	Shape* ptr_Before=pStart;
	int i = 0;
	ptr = pStart;
	for (i = 0;i < select;i++){
		ptr_Before = ptr;
		ptr = ptr->ptr;
	}
	if (i == top) {
		pLast = ptr_Before;
	}
	ptr_Before->ptr = ptr->ptr;
	top--;
	delete ptr;
	ptr = ptr_Before->ptr;
	while (ptr->ptr != NULL) {
		ptr->reviseIndex();
		ptr = ptr->ptr;
	}
	ptr->reviseIndex();
	return true;
}

bool GraphicEditor::Show() {
	Shape* ptr;
	ptr = pStart;
	for (int i = 0;i < top;i++) {
		cout << ptr->getIndex() << ":  " << ptr->getName() << endl;
		ptr = ptr->ptr;
	}
	return true;
}