#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2018 // UTC year
#define YOTTA_BUILD_MONTH 11 // UTC month 1-12
#define YOTTA_BUILD_DAY 6 // UTC day 1-31
#define YOTTA_BUILD_HOUR 22 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 37 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 21 // UTC second 0-61
#define YOTTA_BUILD_UUID 0f4db560-b456-4d08-8737-8aaedd2ee465 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID 13426012b5a314367c9592ae5b3d70ca4023a524 // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION 1342601 // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
