#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2018 // UTC year
#define YOTTA_BUILD_MONTH 11 // UTC month 1-12
#define YOTTA_BUILD_DAY 23 // UTC day 1-31
#define YOTTA_BUILD_HOUR 12 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 0 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 28 // UTC second 0-61
#define YOTTA_BUILD_UUID fcb6a376-a3ac-4ca7-8d96-691552390993 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID a9817fe0fa97819833fd48c1bcb17e552ce00930 // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION a9817fe // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
