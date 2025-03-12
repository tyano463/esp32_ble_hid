#ifndef __DLOG_H__
#define __DLOG_H__

#define OK 0
#define NG -1
#define ERR_RETn(c)            \
    do                         \
    {                          \
        if (c)                 \
            goto error_return; \
    } while (0)

#endif