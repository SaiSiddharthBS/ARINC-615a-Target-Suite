
#ifndef ARINC_615A_EXPORT_H
#define ARINC_615A_EXPORT_H

#ifdef ARINC_615A_STATIC_DEFINE
#  define ARINC_615A_EXPORT
#  define ARINC_615A_NO_EXPORT
#else
#  ifndef ARINC_615A_EXPORT
#    ifdef arinc_615a_EXPORTS
        /* We are building this library */
#      define ARINC_615A_EXPORT 
#    else
        /* We are using this library */
#      define ARINC_615A_EXPORT 
#    endif
#  endif

#  ifndef ARINC_615A_NO_EXPORT
#    define ARINC_615A_NO_EXPORT 
#  endif
#endif

#ifndef ARINC_615A_DEPRECATED
#  define ARINC_615A_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef ARINC_615A_DEPRECATED_EXPORT
#  define ARINC_615A_DEPRECATED_EXPORT ARINC_615A_EXPORT ARINC_615A_DEPRECATED
#endif

#ifndef ARINC_615A_DEPRECATED_NO_EXPORT
#  define ARINC_615A_DEPRECATED_NO_EXPORT ARINC_615A_NO_EXPORT ARINC_615A_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef ARINC_615A_NO_DEPRECATED
#    define ARINC_615A_NO_DEPRECATED
#  endif
#endif

#endif /* ARINC_615A_EXPORT_H */
