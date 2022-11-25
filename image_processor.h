#include <QObject>
#include <QImage>

#include <memory>

class ImageProcessor : public QObject
{
    Q_OBJECT

public:
    explicit ImageProcessor(QObject *parent = nullptr);
    ~ImageProcessor();

    unsigned cellSize() const;
    void setCellSize(unsigned cellSize);
    Q_SIGNAL void sellSizeChanged(unsigned cellSize);

    QImage *image() const;
    void setImage(QImage *image);

    bool loadImage(QString name);

    void process();

private:
    std::unique_ptr<QImage> _image { nullptr };

};
