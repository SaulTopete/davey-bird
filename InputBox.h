//
// Created by Saul Topete on 12/10/21.
//

#ifndef CS8FINALPROJECT_INPUTBOX_H
#define CS8FINALPROJECT_INPUTBOX_H
#include "Item.h"

class InputBox : public Item{
public:
    InputBox();
    const Item &getInputBox() const;
    void setInputBox(const Item &inputBox);
private:
    Item inputBox;
};
#endif //CS8FINALPROJECT_INPUTBOX_H
