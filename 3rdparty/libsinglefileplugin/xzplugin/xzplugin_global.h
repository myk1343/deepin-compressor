#ifndef XZPLUGIN_GLOBAL_H
#define XZPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(XZPLUGIN_LIBRARY)
#  define XZPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define XZPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // XZPLUGIN_GLOBAL_H