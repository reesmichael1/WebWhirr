#ifndef PARAGRAPHPAINTNODE_H
#define PARAGRAPHPAINTNODE_H

#include "paintnode.h"

class ParagraphPaintNode : public PaintNode
{
public:
    ParagraphPaintNode();
    std::string getText();
    void setText(std::string textToSet);
    virtual void paint(QPainter *qPainter, PaintArea *display);

private:
    std::string text;
};

#endif // PARAGRAPHPAINTNODE_H