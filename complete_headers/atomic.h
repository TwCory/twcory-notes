// SPDX-License-Identifier: BSD-3-Clause

/*
 * Copyright (c) 2024 Cory Voltz <voltzc@twchl.net>
 * 
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * @include/voltos/atomic.h (2024-08-25) - Atomic data types and functions
 */

#ifndef _VOLTOS_ATOMIC_H_
#define _VOLTOS_ATOMIC_H_

#include <stdatomic.h>
#include <voltos/types.h>

typedef atomic_bool			__atomic_bool;

typedef atomic_char			__atomic_char;
typedef atomic_schar		__atomic_s_char;
typedef atomic_uchar		__atomic_u_char;

typedef atomic_short		__atomic_s_short;
typedef atomic_ushort		__atomic_u_short;

typedef atomic_int			__atomic_s_int;
typedef atomic_uint			__atomic_u_int;

typedef atomic_long			__atomic_s_long;
typedef atomic_ulong		__atomic_u_long;

typedef atomic_llong		__atomic_s_long_long;
typedef atomic_ullong		__atomic_u_long_long;

typedef atomic_schar		__atomic_s8;
typedef atomic_uchar		__atomic_u8;

typedef atomic_short		__atomic_s16;
typedef atomic_ushort		__atomic_u16;

typedef atomic_int			__atomic_s32;
typedef atomic_uint			__atomic_u32;

typedef atomic_llong		__atomic_s64;
typedef atomic_ullong		__atomic_u64;

typedef atomic_char16_t		__atomic_char16;
typedef atomic_char32_t		__atomic_char32;
typedef atomic_wchar_t		__atomic_wchar;

typedef atomic_intptr_t		__atomic_s_intptr;
typedef atomic_uintptr_t	__atomic_u_intptr;
typedef atomic_size_t		__atomic_size;
typedef atomic_ptrdiff_t	__atomic_ptrdiff;

#endif /* _VOLTOS_ATOMIC_H_ */
