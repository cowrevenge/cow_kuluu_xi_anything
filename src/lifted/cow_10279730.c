/* f_0x10279730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10279730(Guest* g)
{
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg3 >= 0) goto L_10279761;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b37ecu));
    t2 = g->ecx;
    t3 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3d54u), arg3);
    return 0u;
L_10279761: ;
    if (arg2 > 5u) goto L_1027980f;
    t4 = rd32(COW_IMG(0x10279838u) + arg2 * 4u);
    switch (t4 - RD)
    {
    case 0x10279775u: goto L_10279775;
    case 0x10279787u: goto L_10279787;
    case 0x10279799u: goto L_10279799;
    case 0x102797abu: goto L_102797ab;
    case 0x102797bdu: goto L_102797bd;
    case 0x102797cfu: goto L_102797cf;
    default: rt_fatal(g, COW_IMG(0x1027976eu), "switch");
    }
    return 0;
L_10279775: ;
    if ((int32_t)arg3 >= (int32_t)rd32(arg1 + 0x24u)) goto L_102797e1;
    return rd32(arg3 * 4u + rd32(arg1 + 0x1cu));
L_10279787: ;
    if ((int32_t)arg3 >= (int32_t)rd32(arg1 + 0x34u)) goto L_102797e1;
    return rd32(arg3 * 4u + rd32(arg1 + 0x2cu));
L_10279799: ;
    if ((int32_t)arg3 >= (int32_t)rd32(arg1 + 0x44u)) goto L_102797e1;
    return rd32(arg3 * 4u + rd32(arg1 + 0x3cu));
L_102797ab: ;
    if ((int32_t)arg3 >= (int32_t)rd32(arg1 + 0x58u)) goto L_102797e1;
    return rd32(arg3 * 4u + rd32(arg1 + 0x4cu));
L_102797bd: ;
    if ((int32_t)arg3 >= (int32_t)rd32(arg1 + 0x68u)) goto L_102797e1;
    return rd32(arg3 * 4u + rd32(arg1 + 0x60u));
L_102797cf: ;
    if ((int32_t)arg3 >= (int32_t)rd32(arg1 + 0x58u)) goto L_102797e1;
    return rd32(arg3 * 4u + rd32(arg1 + 0x50u));
L_102797e1: ;
    g->eax = arg1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b37ecu));
    t6 = g->ecx;
    t7 = g->edx;
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0x14u;
    t8 = cow_cdecl(g, COW_IMG(0x1027a1e0u), 1, arg2);
    t9 = g->ecx;
    t10 = g->edx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3d18u), arg3);
    return 0u;
L_1027980f: ;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b37ecu));
    t12 = g->ecx;
    t13 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3cfcu), arg2);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10279730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10279730(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
