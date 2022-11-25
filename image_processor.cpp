#include "image_processor.h"

ImageProcessor::ImageProcessor(QObject */*parent*/)
{

}

ImageProcessor::~ImageProcessor()
{

}

QImage *ImageProcessor::image() const
{
    return _image.get();
}

void ImageProcessor::setImage(QImage *image)
{
}

bool ImageProcessor::loadImage(QString name)
{

}

void ImageProcessor::process()
{

}
