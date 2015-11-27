#ifndef __COMMON_H__
#define __COMMON_H__

#undef  printf

#if defined(FIRMWARE_3_55)
#define FIRMWARE_VERSION					0x0355
#elif defined(FIRMWARE_3_55DEX)
#define FIRMWARE_VERSION					0x0355
#elif defined(FIRMWARE_4_21)
#define FIRMWARE_VERSION					0x0421
#elif defined(FIRMWARE_4_21DEX)
#define FIRMWARE_VERSION					0x0421
#elif defined(FIRMWARE_4_30)
#define FIRMWARE_VERSION					0x0430
#elif defined(FIRMWARE_4_30DEX)
#define FIRMWARE_VERSION					0x0430
#elif defined(FIRMWARE_4_31)
#define FIRMWARE_VERSION					0x0431
#elif defined(FIRMWARE_4_40)
#define FIRMWARE_VERSION					0x0440
#elif defined(FIRMWARE_4_41)
#define FIRMWARE_VERSION					0x0441
#elif defined(FIRMWARE_4_41DEX)
#define FIRMWARE_VERSION					0x0441
#elif defined(FIRMWARE_4_46)
#define FIRMWARE_VERSION					0x0446
#elif defined(FIRMWARE_4_46DEX)
#define FIRMWARE_VERSION					0x0446
#elif defined(FIRMWARE_4_50)
#define FIRMWARE_VERSION					0x0450
#elif defined(FIRMWARE_4_50DEX)
#define FIRMWARE_VERSION					0x0450
#elif defined(FIRMWARE_4_53)
#define FIRMWARE_VERSION					0x0453
#elif defined(FIRMWARE_4_53DEX)
#define FIRMWARE_VERSION					0x0453
#elif defined(FIRMWARE_4_55)
#define FIRMWARE_VERSION					0x0455
#elif defined(FIRMWARE_4_55DEX)
#define FIRMWARE_VERSION					0x0455
#elif defined(FIRMWARE_4_60)
#define FIRMWARE_VERSION					0x0460
#elif defined(FIRMWARE_4_60DEX)
#define FIRMWARE_VERSION					0x0460
#elif defined(FIRMWARE_4_65)
#define FIRMWARE_VERSION					0x0465
#elif defined(FIRMWARE_4_65DEX)
#define FIRMWARE_VERSION					0x0465
#elif defined(FIRMWARE_4_66)
#define FIRMWARE_VERSION					0x0466
#elif defined(FIRMWARE_4_66DEX)
#define FIRMWARE_VERSION					0x0466
#elif defined(FIRMWARE_4_70)
#define FIRMWARE_VERSION					0x0470
#elif defined(FIRMWARE_4_70DEX)
#define FIRMWARE_VERSION					0x0470
#elif defined(FIRMWARE_4_75)
#define FIRMWARE_VERSION					0x0475
#elif defined(FIRMWARE_4_75DEX)
#define FIRMWARE_VERSION					0x0475
#elif defined(FIRMWARE_4_76)
#define FIRMWARE_VERSION					0x0476
#elif defined(FIRMWARE_4_76DEX)
#define FIRMWARE_VERSION					0x0476
#endif


#ifdef DEBUG

#include <debug.h>
#include <debug_util.h>
#include <lv2/patch.h>
#undef  printf
#define printf		_debug_printf
#define DPRINTF		_debug_printf
#define DPRINT_HEX	debug_print_hex
#define DPRINT_HEX_C	debug_print_hex_c

static INLINE void dump_stack_trace(unsigned int n)
{
	if (n == 0)
		return;

	DPRINTF("--------STACK TRACE--------\n");

	for (int i = 0; i < n; i++)
	{
		void *p = get_call_address(i);
		DPRINTF("%p\n", p);
		if (!p)
			break;
	}

	DPRINTF("---------------------------\n");
}

static INLINE void dump_stack_trace2(unsigned int n)
{
	int i = 1;

	if (n == 0)
		return;

	DPRINTF("--------STACK TRACE--------\n");

	void *p = get_patched_func_call_address();
	DPRINTF("%p\n", p);

	while (p && i < n)
	{
		p = get_call_address(i++);
		DPRINTF("%p\n", p);
	}

	DPRINTF("---------------------------\n");
}

static INLINE void *get_call_address2(uint64_t *stack, unsigned int idx)
{
	stack = (uint64_t *)stack[0];

	for (int i = 0; i < idx; i++)
	{
		if (!stack)
			return 0;

		stack = (uint64_t *)stack[0];
	}

	if (!stack)
		return 0;

	return (void *)(stack[2]-4);
}

static INLINE void dump_stack_trace3(uint64_t *stack, unsigned int n)
{
	if (n == 0)
		return;

	DPRINTF("--------STACK TRACE--------\n");

	for (int i = 0; i < n; i++)
	{
		void *p = get_call_address2(stack, i);
		DPRINTF("%p\n", p);
		if (!p)
			break;
	}

	DPRINTF("---------------------------\n");
}

static INLINE void dump_stack_trace4(uint64_t *stack, unsigned int n)
{
	if (n == 0)
		return;

	DPRINTF("--------STACK TRACE--------\n");

	DPRINTF("%p\n", (void *)(stack[2]-4));
	n--;

	for (int i = 0; i < n; i++)
	{
		void *p = get_call_address2(stack, i);
		DPRINTF("%p\n", p);
		if (!p)
			break;
	}

	DPRINTF("---------------------------\n");
}

#else

#define fatal(s) { while(1); }
#define printf(...)
#define DPRINTF(...)
#define DPRINT_HEX(b, s)
#define DPRINT_HEX_C(b, s)
#define dump_stack_trace(n)
#define dump_stack_trace2(n)

#endif

#endif /* __COMMON_H__ */

