/////////////////////////////////////////////////////////////////////////////
// Name:        dcscreen.h
// Purpose:
// Author:      Vaclav Slavik
// Id:          $Id$
// Copyright:   (c) 2001-2002 SciTech Software, Inc. (www.scitechsoft.com)
// Licence:     wxWidgets licence
/////////////////////////////////////////////////////////////////////////////

#ifndef __WX_DCSCREEN_H__
#define __WX_DCSCREEN_H__

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "dcscreen.h"
#endif

#include "wx/dcclient.h"

//-----------------------------------------------------------------------------
// classes
//-----------------------------------------------------------------------------

class WXDLLEXPORT wxScreenDC;

//-----------------------------------------------------------------------------
// wxScreenDC
//-----------------------------------------------------------------------------

class WXDLLEXPORT wxScreenDC: public wxDC
{
public:
    wxScreenDC();
    ~wxScreenDC();

    static bool StartDrawingOnTop(wxWindow *WXUNUSED(window)) { return TRUE; }
    static bool StartDrawingOnTop(wxRect *WXUNUSED(rect) = NULL) { return TRUE; }
    static bool EndDrawingOnTop() { return TRUE; }
  
private:
    DECLARE_DYNAMIC_CLASS(wxScreenDC)
};

#endif

    // __WX_DCSCREEN_H__

