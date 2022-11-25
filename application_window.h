#include <QMainWindow>

class QLabel;

class ApplicationWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ApplicationWindow(QObject *parent = nullptr);
    ~ApplicationWindow();

private:
    void getImage();

    QString _imageName;
    QLabel *_imageLabel;
};
