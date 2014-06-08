#include <QApplication>
#include <QLabel.h>
int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  QLabel *label = new QLabel("hello xdf");
  label->show();
  return app.exec();
}
