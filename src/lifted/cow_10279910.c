/* f_0x10279910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10279910(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)rd32(arg1 + 0x90u) < (int32_t)rd32(arg1 + 0x94u))
    {
        ecx = self;
        edx = in_edx;
        edi = rd32(arg1 + 0x90u);
    }
    else
    {
        edi = rd32(arg1 + 0x90u);
        t1 = edi * 4u + 4u;
        t2 = rd32(arg1 + 0x84u);
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t3 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), self, 4, t2, t1, COW_IMG(0x103b37ecu), 0x627u);
        t4 = g->edx;
        t5 = rd32(arg1 + 0x88u);
        wr32(arg1 + 0x84u, t3);
        g->esp = sp0 - 8u;
        t6 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t5, 9, t5, t1, COW_IMG(0x103b37ecu), 0x629u, t2, t1, COW_IMG(0x103b37ecu), 0x627u, in_ebx);
        t7 = g->ecx;
        t8 = rd32(arg1 + 0x8cu);
        wr32(arg1 + 0x88u, t6);
        g->edx = t8;
        g->esp = sp0 - 0x18u;
        t9 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t7, 9, t8, t1, COW_IMG(0x103b37ecu), 0x62bu, t5, t1, COW_IMG(0x103b37ecu), 0x629u, t2);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(arg1 + 0x8cu, t9);
        ecx = t10;
        edx = t11;
    }
    g->esp = sp0 - 8u;
    t12 = cow_cdecl(g, COW_IMG(0x10291330u), 3, arg2, COW_IMG(0x103b37ecu), 0x62du);
    wr32(edi * 4u + rd32(arg1 + 0x84u), t12);
    wr32(edi * 4u + rd32(arg1 + 0x88u), arg3);
    wr32(edi * 4u + rd32(arg1 + 0x8cu), arg4);
    t13 = rd32(arg1 + 0x90u) + 1u;
    wr32(arg1 + 0x90u, t13);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10279910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10279910(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
