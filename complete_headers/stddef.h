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
 * @include/voltos/stddef.h (2024-08-22) - Generic constants and basic defines
 */

#ifndef _VOLTOS_STDDEF_H_
#define _VOLTOS_STDDEF_H_

#include <stddef.h>
#include <stdlib.h>
#include <linux/stddef.h>

#undef NULL
#define NULL 						((void *) 0)

#ifndef DEBUG_MODE
#define DEBUG_MODE					0
#endif

enum {
	DISABLE 						= 0,
	ENABLE 							= 1
};

enum {
	CREATE 							= 1,
	READ 							= 2,
	UPDATE 							= 3,
	DELETE 							= 4
};

#define __always_inline				inline
#define __static_always_inline		static inline

#define __struct_packed(x)			x __attribute__ ((packed))
#define __struct_unused(x)			x __attribute__ ((unused))

#define __null_ptr					NULL
#define __offset_of(type, member)	offsetof(type, member)

typedef ptrdiff_t					ptr_diff_t;

#endif /* _VOLTOS_STDDEF_H_ */
