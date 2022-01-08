//
// Created by Saul Topete on 12/10/21.
//

#include "InputBox.h"

const Item &InputBox::getInputBox() const {
    return inputBox;
}

void InputBox::setInputBox(const Item &inputBox) {
    InputBox::inputBox = inputBox;
}

InputBox::InputBox() {}