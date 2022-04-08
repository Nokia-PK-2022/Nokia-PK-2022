#pragma once

#include "ConnectedState.hpp"

namespace ue
{

class ViewSmsListState : public ConnectedState
{
protected:
    void onAcceptClicked();
    void onDeclineClicked();
public:
    ViewSmsListState(Context& context);
};

}
