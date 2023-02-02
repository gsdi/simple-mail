#ifndef SMTPEXPORTS_H
#define SMTPEXPORTS_H

#include <QtCore/QtGlobal>

#ifdef SMTP_STATIC_DEFINE
#define SMTP_EXPORT
#define SMTP_NO_EXPORT
#else
#ifndef SMTP_EXPORT
#if defined(SimpleMail2Qt6_EXPORTS) || defined(SimpleMail2Qt5_EXPORTS)
#define SMTP_EXPORT Q_DECL_EXPORT
#else
#define SMTP_EXPORT Q_DECL_IMPORT
#endif
#endif

#ifndef SMTP_NO_EXPORT
#define SMTP_NO_EXPORT
#endif
#endif
#endif  // SMTPEXPORTS_H
