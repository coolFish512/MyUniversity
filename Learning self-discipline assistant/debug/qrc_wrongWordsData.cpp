/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.13.2
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // F:/Qt_work/nuo_learn_tool/wrongBook.txt
  0x0,0x0,0x0,0x9,
  0x5b,
  0x62,0x65,0x67,0x69,0x6e,0x5d,0xd,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // book1
  0x0,0x5,
  0x0,0x69,0x65,0xe1,
  0x0,0x62,
  0x0,0x6f,0x0,0x6f,0x0,0x6b,0x0,0x31,
    // wrongBook.txt
  0x0,0xd,
  0xb,0x72,0xcd,0x34,
  0x0,0x77,
  0x0,0x72,0x0,0x6f,0x0,0x6e,0x0,0x67,0x0,0x42,0x0,0x6f,0x0,0x6f,0x0,0x6b,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/book1
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/book1/wrongBook.txt
  0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x8d,0x22,0x7,0xf0,0xe,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_wrongWordsData)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_wrongWordsData)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_wrongWordsData)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_wrongWordsData)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_wrongWordsData)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_wrongWordsData)(); }
   } dummy;
}
