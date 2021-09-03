#ifndef LOG_JSON_PARSER_H
#define LOG_JSON_PARSER_H

/* Generated by flatcc 0.6.1-dev FlatBuffers schema compiler for C by dvide.com */

#include "flatcc/flatcc_json_parser.h"
#include "flatcc/flatcc_prologue.h"

static const char *AzureIoTSecurity_Level_parse_json_enum(flatcc_json_parser_t *ctx, const char *buf, const char *end,
        int *value_type, uint64_t *value, int *aggregate);
static const char *AzureIoTSecurity_Record_parse_json_table(flatcc_json_parser_t *ctx, const char *buf, const char *end, flatcc_builder_ref_t *result);
static const char *AzureIoTSecurity_Log_parse_json_table(flatcc_json_parser_t *ctx, const char *buf, const char *end, flatcc_builder_ref_t *result);
static const char *log_local_json_parser_enum(flatcc_json_parser_t *ctx, const char *buf, const char *end,
int *value_type, uint64_t *value, int *aggregate);
static const char *log_local_AzureIoTSecurity_json_parser_enum(flatcc_json_parser_t *ctx, const char *buf, const char *end,
int *value_type, uint64_t *value, int *aggregate);
static const char *log_global_json_parser_enum(flatcc_json_parser_t *ctx, const char *buf, const char *end,
        int *value_type, uint64_t *value, int *aggregate);

static const char *AzureIoTSecurity_Level_parse_json_enum(flatcc_json_parser_t *ctx, const char *buf, const char *end,
        int *value_sign, uint64_t *value, int *aggregate)
{
    const char *unmatched = buf;
    const char *mark;
    uint64_t w;

    w = flatcc_json_parser_symbol_part(buf, end);
    if (w < 0x464154414c000000) { /* branch "FATAL" */
        if ((w & 0xffffffffff000000) == 0x4552524f52000000) { /* "ERROR" */
            buf = flatcc_json_parser_match_constant(ctx, (mark = buf), end, 5, aggregate);
            if (buf != mark) {
                *value = UINT64_C(2), *value_sign = 0;
            } else {
                return unmatched;
            }
        } else { /* "ERROR" */
            if ((w & 0xffffffffff000000) == 0x4445425547000000) { /* "DEBUG" */
                buf = flatcc_json_parser_match_constant(ctx, (mark = buf), end, 5, aggregate);
                if (buf != mark) {
                    *value = UINT64_C(5), *value_sign = 0;
                } else {
                    return unmatched;
                }
            } else { /* "DEBUG" */
                return unmatched;
            } /* "DEBUG" */
        } /* "ERROR" */
    } else { /* branch "FATAL" */
        if (w < 0x494e464f00000000) { /* branch "INFO" */
            if ((w & 0xffffffffff000000) == 0x464154414c000000) { /* "FATAL" */
                buf = flatcc_json_parser_match_constant(ctx, (mark = buf), end, 5, aggregate);
                if (buf != mark) {
                    *value = UINT64_C(1), *value_sign = 0;
                } else {
                    return unmatched;
                }
            } else { /* "FATAL" */
                return unmatched;
            } /* "FATAL" */
        } else { /* branch "INFO" */
            if (w < 0x4e4f545345540000) { /* branch "NOTSET" */
                if ((w & 0xffffffff00000000) == 0x494e464f00000000) { /* "INFO" */
                    buf = flatcc_json_parser_match_constant(ctx, (mark = buf), end, 4, aggregate);
                    if (buf != mark) {
                        *value = UINT64_C(4), *value_sign = 0;
                    } else {
                        return unmatched;
                    }
                } else { /* "INFO" */
                    return unmatched;
                } /* "INFO" */
            } else { /* branch "NOTSET" */
                if ((w & 0xffffffff00000000) == 0x5741524e00000000) { /* "WARN" */
                    buf = flatcc_json_parser_match_constant(ctx, (mark = buf), end, 4, aggregate);
                    if (buf != mark) {
                        *value = UINT64_C(3), *value_sign = 0;
                    } else {
                        return unmatched;
                    }
                } else { /* "WARN" */
                    if ((w & 0xffffffffffff0000) == 0x4e4f545345540000) { /* "NOTSET" */
                        buf = flatcc_json_parser_match_constant(ctx, (mark = buf), end, 6, aggregate);
                        if (buf != mark) {
                            *value = UINT64_C(0), *value_sign = 0;
                        } else {
                            return unmatched;
                        }
                    } else { /* "NOTSET" */
                        return unmatched;
                    } /* "NOTSET" */
                } /* "WARN" */
            } /* branch "NOTSET" */
        } /* branch "INFO" */
    } /* branch "FATAL" */
    return buf;
}

static const char *AzureIoTSecurity_Record_parse_json_table(flatcc_json_parser_t *ctx, const char *buf, const char *end, flatcc_builder_ref_t *result)
{
    int more;
    void *pval;
    flatcc_builder_ref_t ref, *pref;
    const char *mark;
    uint64_t w;

    *result = 0;
    if (flatcc_builder_start_table(ctx->ctx, 5)) goto failed;
    buf = flatcc_json_parser_object_start(ctx, buf, end, &more);
    while (more) {
        buf = flatcc_json_parser_symbol_start(ctx, buf, end);
        w = flatcc_json_parser_symbol_part(buf, end);
        if (w < 0x6c696e6500000000) { /* branch "line" */
            if ((w & 0xffffffffff000000) == 0x6c6576656c000000) { /* "level" */
                buf = flatcc_json_parser_match_symbol(ctx, (mark = buf), end, 5);
                if (mark != buf) {
                    int8_t val = 0;
                    static flatcc_json_parser_integral_symbol_f *symbolic_parsers[] = {
                            AzureIoTSecurity_Level_parse_json_enum,
                            log_local_AzureIoTSecurity_json_parser_enum,
                            log_global_json_parser_enum, 0 };
                    buf = flatcc_json_parser_int8(ctx, (mark = buf), end, &val);
                    if (mark == buf) {
                        buf = flatcc_json_parser_symbolic_int8(ctx, (mark = buf), end, symbolic_parsers, &val);
                        if (buf == mark || buf == end) goto failed;
                    }
                    if (val != 0 || (ctx->flags & flatcc_json_parser_f_force_add)) {
                        if (!(pval = flatcc_builder_table_add(ctx->ctx, 1, 1, 1))) goto failed;
                        flatbuffers_int8_write_to_pe(pval, val);
                    }
                } else {
                    buf = flatcc_json_parser_unmatched_symbol(ctx, buf, end);
                }
            } else { /* "level" */
                if (w == 0x66696c656e616d65) { /* "filename" */
                    buf = flatcc_json_parser_match_symbol(ctx, (mark = buf), end, 8);
                    if (mark != buf) {
                        buf = flatcc_json_parser_build_string(ctx, buf, end, &ref);
                        if (!ref || !(pref = flatcc_builder_table_add_offset(ctx->ctx, 4))) goto failed;
                        *pref = ref;
                    } else {
                        buf = flatcc_json_parser_unmatched_symbol(ctx, buf, end);
                    }
                } else { /* "filename" */
                    buf = flatcc_json_parser_unmatched_symbol(ctx, buf, end);
                } /* "filename" */
            } /* "level" */
        } else { /* branch "line" */
            if (w < 0x6d65737361676500) { /* branch "message" */
                if ((w & 0xffffffff00000000) == 0x6c696e6500000000) { /* "line" */
                    buf = flatcc_json_parser_match_symbol(ctx, (mark = buf), end, 4);
                    if (mark != buf) {
                        uint32_t val = 0;
                        static flatcc_json_parser_integral_symbol_f *symbolic_parsers[] = {
                                log_local_AzureIoTSecurity_json_parser_enum,
                                log_global_json_parser_enum, 0 };
                        buf = flatcc_json_parser_uint32(ctx, (mark = buf), end, &val);
                        if (mark == buf) {
                            buf = flatcc_json_parser_symbolic_uint32(ctx, (mark = buf), end, symbolic_parsers, &val);
                            if (buf == mark || buf == end) goto failed;
                        }
                        if (val != 0 || (ctx->flags & flatcc_json_parser_f_force_add)) {
                            if (!(pval = flatcc_builder_table_add(ctx->ctx, 3, 4, 4))) goto failed;
                            flatbuffers_uint32_write_to_pe(pval, val);
                        }
                    } else {
                        buf = flatcc_json_parser_unmatched_symbol(ctx, buf, end);
                    }
                } else { /* "line" */
                    buf = flatcc_json_parser_unmatched_symbol(ctx, buf, end);
                } /* "line" */
            } else { /* branch "message" */
                if ((w & 0xffffffffffffff00) == 0x6d65737361676500) { /* "message" */
                    buf = flatcc_json_parser_match_symbol(ctx, (mark = buf), end, 7);
                    if (mark != buf) {
                        buf = flatcc_json_parser_build_string(ctx, buf, end, &ref);
                        if (!ref || !(pref = flatcc_builder_table_add_offset(ctx->ctx, 0))) goto failed;
                        *pref = ref;
                    } else {
                        goto pfguard1;
                    }
                } else { /* "message" */
                    goto pfguard1;
                } /* "message" */
                goto endpfguard1;
pfguard1:
                if (w == 0x74696d657374616d) { /* descend "timestam" */
                    buf += 8;
                    w = flatcc_json_parser_symbol_part(buf, end);
                    if ((w & 0xff00000000000000) == 0x7000000000000000) { /* "p" */
                        buf = flatcc_json_parser_match_symbol(ctx, (mark = buf), end, 1);
                        if (mark != buf) {
                            uint64_t val = 0;
                            static flatcc_json_parser_integral_symbol_f *symbolic_parsers[] = {
                                    log_local_AzureIoTSecurity_json_parser_enum,
                                    log_global_json_parser_enum, 0 };
                            buf = flatcc_json_parser_uint64(ctx, (mark = buf), end, &val);
                            if (mark == buf) {
                                buf = flatcc_json_parser_symbolic_uint64(ctx, (mark = buf), end, symbolic_parsers, &val);
                                if (buf == mark || buf == end) goto failed;
                            }
                            if (val != 0 || (ctx->flags & flatcc_json_parser_f_force_add)) {
                                if (!(pval = flatcc_builder_table_add(ctx->ctx, 2, 8, 8))) goto failed;
                                flatbuffers_uint64_write_to_pe(pval, val);
                            }
                        } else {
                            buf = flatcc_json_parser_unmatched_symbol(ctx, buf, end);
                        }
                    } else { /* "p" */
                        buf = flatcc_json_parser_unmatched_symbol(ctx, buf, end);
                    } /* "p" */
                } else { /* descend "timestam" */
                    buf = flatcc_json_parser_unmatched_symbol(ctx, buf, end);
                } /* descend "timestam" */
endpfguard1:
                (void)0;
            } /* branch "message" */
        } /* branch "line" */
        buf = flatcc_json_parser_object_end(ctx, buf, end, &more);
    }
    if (ctx->error) goto failed;
    if (!flatcc_builder_check_required_field(ctx->ctx, 4)
        ||  !flatcc_builder_check_required_field(ctx->ctx, 0)
    ) {
        buf = flatcc_json_parser_set_error(ctx, buf, end, flatcc_json_parser_error_required);
        goto failed;
    }
    if (!(*result = flatcc_builder_end_table(ctx->ctx))) goto failed;
    return buf;
failed:
    return flatcc_json_parser_set_error(ctx, buf, end, flatcc_json_parser_error_runtime);
}

static inline int AzureIoTSecurity_Record_parse_json_as_root(flatcc_builder_t *B, flatcc_json_parser_t *ctx, const char *buf, size_t bufsiz, int flags, const char *fid)
{
    return flatcc_json_parser_table_as_root(B, ctx, buf, bufsiz, flags, fid, AzureIoTSecurity_Record_parse_json_table);
}

static const char *AzureIoTSecurity_Log_parse_json_table(flatcc_json_parser_t *ctx, const char *buf, const char *end, flatcc_builder_ref_t *result)
{
    int more;
    void *pval;
    flatcc_builder_ref_t ref, *pref;
    const char *mark;
    uint64_t w;

    *result = 0;
    if (flatcc_builder_start_table(ctx->ctx, 1)) goto failed;
    buf = flatcc_json_parser_object_start(ctx, buf, end, &more);
    while (more) {
        buf = flatcc_json_parser_symbol_start(ctx, buf, end);
        w = flatcc_json_parser_symbol_part(buf, end);
        if ((w & 0xffffffff00000000) == 0x6c6f677300000000) { /* "logs" */
            buf = flatcc_json_parser_match_symbol(ctx, (mark = buf), end, 4);
            if (mark != buf) {
                if (flatcc_builder_start_offset_vector(ctx->ctx)) goto failed;
                buf = flatcc_json_parser_array_start(ctx, buf, end, &more);
                while (more) {
                    buf = AzureIoTSecurity_Record_parse_json_table(ctx, buf, end, &ref);
                    if (!ref || !(pref = flatcc_builder_extend_offset_vector(ctx->ctx, 1))) goto failed;
                    *pref = ref;
                    buf = flatcc_json_parser_array_end(ctx, buf, end, &more);
                }
                ref = flatcc_builder_end_offset_vector(ctx->ctx);
                if (!ref || !(pref = flatcc_builder_table_add_offset(ctx->ctx, 0))) goto failed;
                *pref = ref;
            } else {
                buf = flatcc_json_parser_unmatched_symbol(ctx, buf, end);
            }
        } else { /* "logs" */
            buf = flatcc_json_parser_unmatched_symbol(ctx, buf, end);
        } /* "logs" */
        buf = flatcc_json_parser_object_end(ctx, buf, end, &more);
    }
    if (ctx->error) goto failed;
    if (!(*result = flatcc_builder_end_table(ctx->ctx))) goto failed;
    return buf;
failed:
    return flatcc_json_parser_set_error(ctx, buf, end, flatcc_json_parser_error_runtime);
}

static inline int AzureIoTSecurity_Log_parse_json_as_root(flatcc_builder_t *B, flatcc_json_parser_t *ctx, const char *buf, size_t bufsiz, int flags, const char *fid)
{
    return flatcc_json_parser_table_as_root(B, ctx, buf, bufsiz, flags, fid, AzureIoTSecurity_Log_parse_json_table);
}

static const char *log_local_json_parser_enum(flatcc_json_parser_t *ctx, const char *buf, const char *end,
        int *value_type, uint64_t *value, int *aggregate)
{
    /* Scope has no enum / union types to look up. */
    return buf; /* unmatched; */
}

static const char *log_local_AzureIoTSecurity_json_parser_enum(flatcc_json_parser_t *ctx, const char *buf, const char *end,
        int *value_type, uint64_t *value, int *aggregate)
{
    const char *unmatched = buf;
    const char *mark;
    uint64_t w;

    w = flatcc_json_parser_symbol_part(buf, end);
    if ((w & 0xffffffffff000000) == 0x4c6576656c000000) { /* "Level" */
        buf = flatcc_json_parser_match_scope(ctx, (mark = buf), end, 5);
        if (buf != mark) {
            buf = AzureIoTSecurity_Level_parse_json_enum(ctx, buf, end, value_type, value, aggregate);
        } else {
            return unmatched;
        }
    } else { /* "Level" */
        return unmatched;
    } /* "Level" */
    return buf;
}

static const char *log_global_json_parser_enum(flatcc_json_parser_t *ctx, const char *buf, const char *end,
        int *value_type, uint64_t *value, int *aggregate)
{
    const char *unmatched = buf;
    const char *mark;
    uint64_t w;

    w = flatcc_json_parser_symbol_part(buf, end);
    if (w == 0x417a757265496f54) { /* descend "AzureIoT" */
        buf += 8;
        w = flatcc_json_parser_symbol_part(buf, end);
        if (w == 0x5365637572697479) { /* descend "Security" */
            buf += 8;
            w = flatcc_json_parser_symbol_part(buf, end);
            if ((w & 0xffffffffffff0000) == 0x2e4c6576656c0000) { /* ".Level" */
                buf = flatcc_json_parser_match_scope(ctx, (mark = buf), end, 6);
                if (buf != mark) {
                    buf = AzureIoTSecurity_Level_parse_json_enum(ctx, buf, end, value_type, value, aggregate);
                } else {
                    return unmatched;
                }
            } else { /* ".Level" */
                return unmatched;
            } /* ".Level" */
        } else { /* descend "Security" */
            return unmatched;
        } /* descend "Security" */
    } else { /* descend "AzureIoT" */
        return unmatched;
    } /* descend "AzureIoT" */
    return buf;
}

#include "flatcc/flatcc_epilogue.h"
#endif /* LOG_JSON_PARSER_H */
