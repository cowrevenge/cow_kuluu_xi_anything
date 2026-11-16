/* f_0x1029d050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1029d050(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u) goto L_1029d080;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t2 = g->ecx;
    t3 = g->edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc9a4u), COW_IMG(0x103b379cu));
    return t4 & 0xffffff00u;
L_1029d080: ;
    if (arg2 != 0u) goto L_1029d0ae;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t6 = g->ecx;
    t7 = g->edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc9b8u), COW_IMG(0x103b379cu));
    return t8 & 0xffffff00u;
L_1029d0ae: ;
    t9 = rd32(COW_IMG(0x109a2854u)) * 4u + 4u;
    g->edx = in_edx;
    t10 = rd32(COW_IMG(0x109a284cu));
    t11 = rd32(COW_IMG(0x109a2854u));
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), self, 4, t10, t9, COW_IMG(0x103bc974u), 0x16du);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(COW_IMG(0x109a284cu), t12);
    g->esp = sp0 - 0x20u;
    t15 = cow_cdecl(g, COW_IMG(0x10291330u), 3, arg1, COW_IMG(0x103bc974u), 0x16eu);
    t16 = rd32(COW_IMG(0x109a284cu));
    wr32(t11 * 4u + t16, t15);
    g->edx = rd32(COW_IMG(0x109a2850u));
    t17 = rd32(COW_IMG(0x109a2850u));
    g->esp = sp0 - 0x18u;
    t18 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t16, 9, t17, t9, COW_IMG(0x103bc974u), 0x16fu, arg1, COW_IMG(0x103bc974u), 0x16eu, t10, t9);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(COW_IMG(0x109a2850u), t18);
    g->esp = sp0 - 0x3cu;
    t21 = cow_cdecl(g, COW_IMG(0x10291330u), 3, arg2, COW_IMG(0x103bc974u), 0x170u);
    wr32(t11 * 4u + rd32(COW_IMG(0x109a2850u)), t21);
    t22 = rd32(COW_IMG(0x109a2854u)) + 1u;
    wr32(COW_IMG(0x109a2854u), t22);
    return (t22 & 0xffffff00u) | (uint8_t)(t22 | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029d050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1029d050(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
