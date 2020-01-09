// the task
//  What happens if you draw a shape?
// window ? What happens if you draw a window ?
// on the screen ? Write two programs illustrating these effects.

#include "Simple_window.h"
#include "Graph.h"
int main()
{
	using namespace Graph_lib; // Графические средства
	Point t1{ 0 , 0 }; // Задаем левый верхний угол окна
	Simple_window win{ t1 , 1920 , 1080, "My window" }; // Простое окно

	Rectangle_BS r1{ Point{650 ,350} , 400 , 300 }; // Левый верхний угол, ширина , высота
	win.attach(r1);
	r1.set_fill_color(Color::white);
	Polygon_BS poly;
	poly.set_color(Color::black);
	poly.add(Point{ 650, 350 });
	poly.add(Point{ 1050, 350 });
	poly.add(Point{ 850, 100 });
	poly.set_fill_color(Color::black);
	win.attach(poly);

	Rectangle_BS r3{ Point{680 ,440} , 70 , 70 }; // Левый верхний угол, ширина , высота
	win.attach(r3);
	r3.set_color(Color::black);

	Rectangle_BS r4{ Point{940 ,440} , 70 , 70 }; // Левый верхний угол, ширина , высота
	win.attach(r4);
	r4.set_color(Color::black);

	Rectangle_BS r5{ Point{980, 180 } , 70 , 170 }; // Левый верхний угол, ширина , высота
	win.attach(r5);
	r5.set_color(Color::black);
	poly.set_fill_color(Color::black);
	win.wait_for_button();

};