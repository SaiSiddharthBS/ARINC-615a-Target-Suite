
#ifndef TFTP_EXPORT_H
#define TFTP_EXPORT_H

#ifdef TFTP_STATIC_DEFINE
#  define TFTP_EXPORT
#  define TFTP_NO_EXPORT
#else
#  ifndef TFTP_EXPORT
#    ifdef tftp_EXPORTS
        /* We are building this library */
#      define TFTP_EXPORT 
#    else
        /* We are using this library */
#      define TFTP_EXPORT 
#    endif
#  endif

#  ifndef TFTP_NO_EXPORT
#    define TFTP_NO_EXPORT 
#  endif
#endif

#ifndef TFTP_DEPRECATED
#  define TFTP_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef TFTP_DEPRECATED_EXPORT
#  define TFTP_DEPRECATED_EXPORT TFTP_EXPORT TFTP_DEPRECATED
#endif

#ifndef TFTP_DEPRECATED_NO_EXPORT
#  define TFTP_DEPRECATED_NO_EXPORT TFTP_NO_EXPORT TFTP_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef TFTP_NO_DEPRECATED
#    define TFTP_NO_DEPRECATED
#  endif
#endif

#endif /* TFTP_EXPORT_H */
