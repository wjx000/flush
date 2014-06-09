#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[]){
  QApplication::setStyle("cleanlooks");
  QApplication app(argc, argv);
  QLabel *label2 = new QLabel("!!!!!!!!!!!!!!!!!!!!!!!!!!\n22222222222222222222");
  label2->setWindowTitle("transparent title");
  label2->setWindowOpacity(0.5);
  label2->setAttribute(Qt::WA_TranslucentBackground);
  label2->move(500,400);
  label2->show();
  return app.exec();
}
