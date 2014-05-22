int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;

    HWND desktopHwnd = findDesktopIconWnd();
    if(desktopHwnd) SetParent(w.winId(), desktopHwnd);

    w.setAttribute(Qt::WA_TranslucentBackground, true);

    w.show();
    return a.exec();
}
