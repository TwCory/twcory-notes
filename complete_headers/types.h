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
 * @include/voltos/types.h (2024-08-16) - Generic data type definitions
 */

#ifndef _VOLTOS_TYPES_H_
#define _VOLTOS_TYPES_H_

#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <sys/types.h>

typedef signed char 					__s_char;
typedef unsigned char 					__u_char;

typedef signed short 					__s_short;
typedef unsigned short 					__u_short;

typedef signed int 						__s_int;
typedef unsigned int 					__u_int;

typedef signed long 					__s_long;
typedef unsigned long 					__u_long;

typedef signed long long 				__s_long_long;
typedef unsigned long long 				__u_long_long;

typedef __s_char 						__s8;
typedef __u_char 						__u8;

typedef __s_short 						__s16;
typedef __u_short 						__u16;

typedef __s_int 						__s32;
typedef __u_int 						__u32;

typedef __s_long_long 					__s64;
typedef __u_long_long 					__u64;

typedef int8_t 							s8;
typedef uint8_t 						u8;

typedef int16_t 						s16;
typedef uint16_t 						u16;

typedef int32_t 						s32;
typedef uint32_t 						u32;

typedef int64_t 						s64;
typedef uint64_t 						u64;

typedef struct {
	int8_t bytes[16];
} __attribute__ ((packed)) s128;

typedef struct {
	uint8_t bytes[16];
} __attribute__ ((packed)) u128;

typedef float 							f16;
typedef float 							f32;
typedef double 							f64;

typedef struct {
	float data[4];
} __attribute__ ((packed)) f128;

typedef f16 							cf16;
typedef f32 							cf32;
typedef f64 							cf64;
typedef f128 							cf128;

typedef __u16							__be16;
typedef __u32							__be32;
typedef __u64							__be64;

typedef __u16							__le16;
typedef __u32							__le32;
typedef __u64							__le64;

typedef __u16							__net16;
typedef __u32							__net32;
typedef __u64							__net64;

typedef __u16							__host16;
typedef __u32							__host32;
typedef __u64							__host64;

typedef __u16							__csum16;
typedef __u32							__csum32;

typedef __s_char						string;
typedef __u_char 						nibble;
typedef __u_char 						byte;
typedef __u_char 						octet;
typedef __u_short 						hextet;

typedef ssize_t 						s_size;
typedef size_t 							u_size;

typedef ssize_t 						s_word;
typedef size_t 							u_word;
typedef float 							f_word;

typedef __s_long						s_intptr;
typedef __u_long						u_intptr;

typedef __s_long						s_intfptr;
typedef __u_long						u_intfptr;

#define __aligned_s64					__s64 __attribute__ ((aligned(8)))
#define __aligned_u64					__u64 __attribute__ ((aligned(8)))
#define __aligned_be64					__be64 __attribute__ ((aligned(8)))
#define __aligned_le64					__le64 __attribute__ ((aligned(8)))
#define __aligned_net64					__net64 __attribute__ ((aligned(8)))
#define __aligned_host64				__host64 __attribute__ ((aligned(8)))

typedef __u_int							__index;
typedef __u_long_long					__key;
typedef __u_int							__gid;
typedef __u_int							__pid;
typedef __u_int							__uid;

typedef __u32							__if_index;
typedef __u32							__netns_id;
typedef __u16							__vlan_id;

typedef struct {
	__u8 bytes[3];
} __attribute__ ((packed)) __vnid;

typedef __u32							__vrf_id;

typedef __net16							__in_port;
typedef __net32							__in_addr;

typedef struct {
	__net16 hextets[8];
} __attribute__ ((packed)) __in6_addr;

#endif /* _VOLTOS_TYPES_H_ */
