/////////////////////////////////////////////////////////////////////////////
// Name:        wxbf/window_gripper.h
// Purpose:     wxWindowGripper abstract class
// Author:      �ukasz �wiszcz
// Modified by:
// Created:     2022-12-29
// Copyright:   (c) �ukasz �wiszcz
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WXBF_WINDOW_GRIPPER_H_
#define _WXBF_WINDOW_GRIPPER_H_

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

// TODO: Add factory method

class wxWindowGripper
{
public:
    virtual bool StartDragMove(wxWindow* window) = 0;
    virtual bool StartDragResize(wxWindow* window, wxDirection which) = 0;
};

#endif
