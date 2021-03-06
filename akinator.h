#ifndef AKINATOR_H

#define AKINATOR_H

#include <time.h>

#include "akinator_config.h"

#include "BinaryTree/bin_tree.h"

#include "Stack/stack.h"

enum AkinStatus
{
    // statuses
    FUNC_IS_OK          = 0,
    READ_SUCCS          = 0,
    DEAD_INSIDE         = 0,

    // errors
    STACK_IS_RUINED               = 1 << 6,

    BAD_ALLOC_                    = 1 << 7,

    INVALID_NODE_PTR              = 1 << 8,
    NODE_IS_FOUNDED               = 1 << 9,

    TREE_IS_NULL_                 = 1 << 10,
    TREE_ROOT_IS_NULL_            = 1 << 11,
    NODE_PTR_IS_NULL_             = 1 << 12,

    STREAM_IS_NULL                = 1 << 13,
    BUFFER_IS_NULL                = 1 << 14,
    FILESIZE_IS_ZERO              = 1 << 15,
    BUFFER_CANT_BE_READ           = 1 << 16,
    EXPR_IS_INVALID               = 1 << 17,
    PTR_IS_NULL                   = 1 << 18,
    PTR_BIGGER_BUFF_END           = 1 << 19,
    READ_WAS_UNSUCCESSFUL         = 1 << 20,
    MAX_STRING_LEN_REACHED        = 1 << 21,
    
    CANT_OPEN_FILE                = 1 << 22,
    CANT_WRITE_EMPTY_TREE         = 1 << 23,
    FILENAME_PTR_IS_NULL          = 1 << 24,

    CANT_ALLOC_USED_PTR           = 1 << 25,

    TREE_IS_DEAD                  = 1 << 26,

    DEFENDER_IS_NULL              = 1 << 27,

    BASE_IS_EMPTY                 = 1 << 28,

    FUCK_MY_LIFE                  = 1 << 29,
    PIZDEC                        = 1 << 30,
    MEMORY_IS_FULL                = 1 << 31,
};

#endif
