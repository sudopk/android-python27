/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:19 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgraphicslinearlayout.sip"
#include <qgraphicslinearlayout.h>
#line 39 "sipQtGuiQGraphicsLinearLayout.cpp"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgraphicslayoutitem.sip"
#include <qgraphicslayoutitem.h>
#line 43 "sipQtGuiQGraphicsLinearLayout.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 46 "sipQtGuiQGraphicsLinearLayout.cpp"
#line 98 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qsize.sip"
#include <qsize.h>
#line 49 "sipQtGuiQGraphicsLinearLayout.cpp"
#line 158 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 52 "sipQtGuiQGraphicsLinearLayout.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 55 "sipQtGuiQGraphicsLinearLayout.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 58 "sipQtGuiQGraphicsLinearLayout.cpp"
#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgraphicsitem.sip"
#include <qgraphicsitem.h>
#line 61 "sipQtGuiQGraphicsLinearLayout.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 64 "sipQtGuiQGraphicsLinearLayout.cpp"


class sipQGraphicsLinearLayout : public QGraphicsLinearLayout
{
public:
    sipQGraphicsLinearLayout(QGraphicsLayoutItem *);
    sipQGraphicsLinearLayout(Qt::Orientation,QGraphicsLayoutItem *);
    virtual ~sipQGraphicsLinearLayout();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    void sipProtect_setGraphicsItem(QGraphicsItem *);
    void sipProtect_setOwnedByLayout(bool);
    void sipProtect_addChildLayoutItem(QGraphicsLayoutItem *);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void removeAt(int);
    void setGeometry(const QRectF&);
    int count() const;
    QGraphicsLayoutItem * itemAt(int) const;
    void invalidate();
    QSizeF sizeHint(Qt::SizeHint,const QSizeF&) const;
    void getContentsMargins(qreal *,qreal *,qreal *,qreal *) const;
    void widgetEvent(QEvent *);
    void updateGeometry();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGraphicsLinearLayout(const sipQGraphicsLinearLayout &);
    sipQGraphicsLinearLayout &operator = (const sipQGraphicsLinearLayout &);

    char sipPyMethods[9];
};

sipQGraphicsLinearLayout::sipQGraphicsLinearLayout(QGraphicsLayoutItem *a0): QGraphicsLinearLayout(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGraphicsLinearLayout::sipQGraphicsLinearLayout(Qt::Orientation a0,QGraphicsLayoutItem *a1): QGraphicsLinearLayout(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGraphicsLinearLayout::~sipQGraphicsLinearLayout()
{
    sipCommonDtor(sipPySelf);
}

void sipQGraphicsLinearLayout::removeAt(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_removeAt);

    if (!meth)
    {
        QGraphicsLinearLayout::removeAt(a0);
        return;
    }

    typedef void (*sipVH_QtCore_4)(sip_gilstate_t,PyObject *,int);

    ((sipVH_QtCore_4)(sipModuleAPI_QtGui_QtCore->em_virthandlers[4]))(sipGILState,meth,a0);
}

void sipQGraphicsLinearLayout::setGeometry(const QRectF& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_setGeometry);

    if (!meth)
    {
        QGraphicsLinearLayout::setGeometry(a0);
        return;
    }

    extern void sipVH_QtGui_137(sip_gilstate_t,PyObject *,const QRectF&);

    sipVH_QtGui_137(sipGILState,meth,a0);
}

int sipQGraphicsLinearLayout::count() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_count);

    if (!meth)
        return QGraphicsLinearLayout::count();

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtGui_QtCore->em_virthandlers[6]))(sipGILState,meth);
}

QGraphicsLayoutItem * sipQGraphicsLinearLayout::itemAt(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_itemAt);

    if (!meth)
        return QGraphicsLinearLayout::itemAt(a0);

    extern QGraphicsLayoutItem * sipVH_QtGui_204(sip_gilstate_t,PyObject *,int);

    return sipVH_QtGui_204(sipGILState,meth,a0);
}

void sipQGraphicsLinearLayout::invalidate()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_invalidate);

    if (!meth)
    {
        QGraphicsLinearLayout::invalidate();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t,PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtGui_QtCore->em_virthandlers[11]))(sipGILState,meth);
}

QSizeF sipQGraphicsLinearLayout::sizeHint(Qt::SizeHint a0,const QSizeF& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,NULL,sipName_sizeHint);

    if (!meth)
        return QGraphicsLinearLayout::sizeHint(a0,a1);

    extern QSizeF sipVH_QtGui_192(sip_gilstate_t,PyObject *,Qt::SizeHint,const QSizeF&);

    return sipVH_QtGui_192(sipGILState,meth,a0,a1);
}

void sipQGraphicsLinearLayout::getContentsMargins(qreal *a0,qreal *a1,qreal *a2,qreal *a3) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,NULL,sipName_getContentsMargins);

    if (!meth)
    {
        QGraphicsLayout::getContentsMargins(a0,a1,a2,a3);
        return;
    }

    extern void sipVH_QtGui_197(sip_gilstate_t,PyObject *,qreal *,qreal *,qreal *,qreal *);

    sipVH_QtGui_197(sipGILState,meth,a0,a1,a2,a3);
}

void sipQGraphicsLinearLayout::widgetEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_widgetEvent);

    if (!meth)
    {
        QGraphicsLayout::widgetEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,QEvent *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState,meth,a0);
}

void sipQGraphicsLinearLayout::updateGeometry()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_updateGeometry);

    if (!meth)
    {
        QGraphicsLayout::updateGeometry();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t,PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtGui_QtCore->em_virthandlers[11]))(sipGILState,meth);
}

void sipQGraphicsLinearLayout::sipProtect_setGraphicsItem(QGraphicsItem *a0)
{
    QGraphicsLayoutItem::setGraphicsItem(a0);
}

void sipQGraphicsLinearLayout::sipProtect_setOwnedByLayout(bool a0)
{
    QGraphicsLayoutItem::setOwnedByLayout(a0);
}

void sipQGraphicsLinearLayout::sipProtect_addChildLayoutItem(QGraphicsLayoutItem *a0)
{
    QGraphicsLayout::addChildLayoutItem(a0);
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_setGraphicsItem(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_setGraphicsItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsItem * a0;
        sipQGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, sipType_QGraphicsItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtect_setGraphicsItem(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_setGraphicsItem, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_setOwnedByLayout(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_setOwnedByLayout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        sipQGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtect_setOwnedByLayout(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_setOwnedByLayout, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_addChildLayoutItem(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_addChildLayoutItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsLayoutItem * a0;
        sipQGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ:", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, sipType_QGraphicsLayoutItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtect_addChildLayoutItem(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_addChildLayoutItem, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_setOrientation(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_setOrientation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::Orientation a0;
        QGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, sipType_Qt_Orientation, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setOrientation(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_setOrientation, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_orientation(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_orientation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp))
        {
            Qt::Orientation sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->orientation();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_Orientation);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_orientation, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_addItem(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_addItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsLayoutItem * a0;
        QGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ:", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, sipType_QGraphicsLayoutItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->addItem(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_addItem, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_addStretch(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_addStretch(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = 1;
        QGraphicsLinearLayout *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stretch,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->addStretch(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_addStretch, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_insertItem(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_insertItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QGraphicsLayoutItem * a1;
        QGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ:", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, &a0, sipType_QGraphicsLayoutItem, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->insertItem(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_insertItem, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_insertStretch(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_insertStretch(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1 = 1;
        QGraphicsLinearLayout *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_stretch,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bi|i", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->insertStretch(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_insertStretch, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_removeItem(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_removeItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsLayoutItem * a0;
        QGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ<", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, sipType_QGraphicsLayoutItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->removeItem(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_removeItem, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_removeAt(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_removeAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        QGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, &a0))
        {
#line 54 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgraphicslinearlayout.sip"
        // The ownership of any existing item must be passed back to Python.
        QGraphicsLayoutItem *itm;
        
        if (a0 < sipCpp->count())
            itm = sipCpp->itemAt(a0);
        else
            itm = 0;
        
        Py_BEGIN_ALLOW_THREADS
        sipSelfWasArg ? sipCpp->QGraphicsLinearLayout::removeAt(a0)
                      : sipCpp->removeAt(a0);
        Py_END_ALLOW_THREADS
        
        // The Qt documentation isn't quite correct as ownership isn't always passed
        // back to the caller.
        if (itm && !itm->parentLayoutItem())
        {
            PyObject *itmo = sipGetPyObject(itm, sipType_QGraphicsLayoutItem);
        
            if (itmo)
                sipTransferBack(itmo);
        }
#line 607 "sipQtGuiQGraphicsLinearLayout.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_removeAt, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_setSpacing(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_setSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSpacing(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_setSpacing, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_spacing(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_spacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->spacing();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_spacing, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_setItemSpacing(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_setItemSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        qreal a1;
        QGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bid", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setItemSpacing(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_setItemSpacing, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_itemSpacing(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_itemSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, &a0))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->itemSpacing(a0);
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_itemSpacing, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_setStretchFactor(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_setStretchFactor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsLayoutItem * a0;
        int a1;
        QGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8i", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, sipType_QGraphicsLayoutItem, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setStretchFactor(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_setStretchFactor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_stretchFactor(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_stretchFactor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsLayoutItem * a0;
        QGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, sipType_QGraphicsLayoutItem, &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->stretchFactor(a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_stretchFactor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_setAlignment(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_setAlignment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsLayoutItem * a0;
        Qt::Alignment * a1;
        int a1State = 0;
        QGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, sipType_QGraphicsLayoutItem, &a0, sipType_Qt_Alignment, &a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAlignment(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a1,sipType_Qt_Alignment,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_setAlignment, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_alignment(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_alignment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsLayoutItem * a0;
        QGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, sipType_QGraphicsLayoutItem, &a0))
        {
            Qt::Alignment *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::Alignment(sipCpp->alignment(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_Alignment,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_alignment, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_setGeometry(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_setGeometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QRectF * a0;
        QGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, sipType_QRectF, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QGraphicsLinearLayout::setGeometry(*a0) : sipCpp->setGeometry(*a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_setGeometry, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_count(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QGraphicsLinearLayout::count() : sipCpp->count());
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_count, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_itemAt(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_itemAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        QGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, &a0))
        {
            QGraphicsLayoutItem *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QGraphicsLinearLayout::itemAt(a0) : sipCpp->itemAt(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QGraphicsLayoutItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_itemAt, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_invalidate(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_invalidate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QGraphicsLinearLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QGraphicsLinearLayout::invalidate() : sipCpp->invalidate());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_invalidate, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLinearLayout_sizeHint(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLinearLayout_sizeHint(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        Qt::SizeHint a0;
        const QSizeF& a1def = QSizeF();
        const QSizeF * a1 = &a1def;
        QGraphicsLinearLayout *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_constraint,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BE|J9", &sipSelf, sipType_QGraphicsLinearLayout, &sipCpp, sipType_Qt_SizeHint, &a0, sipType_QSizeF, &a1))
        {
            QSizeF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSizeF((sipSelfWasArg ? sipCpp->QGraphicsLinearLayout::sizeHint(a0,*a1) : sipCpp->sizeHint(a0,*a1)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLinearLayout, sipName_sizeHint, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGraphicsLinearLayout(void *, const sipTypeDef *);}
static void *cast_QGraphicsLinearLayout(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGraphicsLinearLayout)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QGraphicsLayout)->ctd_cast((QGraphicsLayout *)(QGraphicsLinearLayout *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsLinearLayout(void *, int);}
static void release_QGraphicsLinearLayout(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGraphicsLinearLayout *>(sipCppV);
    else
        delete reinterpret_cast<QGraphicsLinearLayout *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGraphicsLinearLayout(sipSimpleWrapper *);}
static void dealloc_QGraphicsLinearLayout(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGraphicsLinearLayout *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsLinearLayout(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QGraphicsLinearLayout(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QGraphicsLinearLayout(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQGraphicsLinearLayout *sipCpp = 0;

    {
        QGraphicsLayoutItem * a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QGraphicsLayoutItem, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGraphicsLinearLayout(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        Qt::Orientation a0;
        QGraphicsLayoutItem * a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "E|JH", sipType_Qt_Orientation, &a0, sipType_QGraphicsLayoutItem, &a1, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGraphicsLinearLayout(a0,a1);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsLinearLayout[] = {{175, 255, 1}};


static PyMethodDef methods_QGraphicsLinearLayout[] = {
    {SIP_MLNAME_CAST(sipName_addChildLayoutItem), meth_QGraphicsLinearLayout_addChildLayoutItem, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_addItem), meth_QGraphicsLinearLayout_addItem, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_addStretch), (PyCFunction)meth_QGraphicsLinearLayout_addStretch, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_alignment), meth_QGraphicsLinearLayout_alignment, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_count), meth_QGraphicsLinearLayout_count, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_insertItem), meth_QGraphicsLinearLayout_insertItem, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_insertStretch), (PyCFunction)meth_QGraphicsLinearLayout_insertStretch, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_invalidate), meth_QGraphicsLinearLayout_invalidate, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_itemAt), meth_QGraphicsLinearLayout_itemAt, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_itemSpacing), meth_QGraphicsLinearLayout_itemSpacing, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_orientation), meth_QGraphicsLinearLayout_orientation, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeAt), meth_QGraphicsLinearLayout_removeAt, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeItem), meth_QGraphicsLinearLayout_removeItem, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setAlignment), meth_QGraphicsLinearLayout_setAlignment, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setGeometry), meth_QGraphicsLinearLayout_setGeometry, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setGraphicsItem), meth_QGraphicsLinearLayout_setGraphicsItem, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setItemSpacing), meth_QGraphicsLinearLayout_setItemSpacing, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setOrientation), meth_QGraphicsLinearLayout_setOrientation, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setOwnedByLayout), meth_QGraphicsLinearLayout_setOwnedByLayout, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setSpacing), meth_QGraphicsLinearLayout_setSpacing, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setStretchFactor), meth_QGraphicsLinearLayout_setStretchFactor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_sizeHint), (PyCFunction)meth_QGraphicsLinearLayout_sizeHint, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_spacing), meth_QGraphicsLinearLayout_spacing, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_stretchFactor), meth_QGraphicsLinearLayout_stretchFactor, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsLinearLayout = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QGraphicsLinearLayout,
        {0}
    },
    {
        sipNameNr_QGraphicsLinearLayout,
        {0, 0, 1},
        24, methods_QGraphicsLinearLayout,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QGraphicsLinearLayout,
    0,
    init_QGraphicsLinearLayout,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QGraphicsLinearLayout,
    0,
    0,
    0,
    release_QGraphicsLinearLayout,
    cast_QGraphicsLinearLayout,
    0,
    0,
    0
},
    0,
    0,
    0
};
