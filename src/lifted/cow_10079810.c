/* f_0x10079810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10079810(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 1024u);

    wr32(sp0 - 0x3ecu, in_esi);
    if (rd32(rd32(COW_IMG(0x103551e0u)) + 4u) == 0u)
    {
        edx = in_edx;
        goto L_1007983a;
    }
    eax = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x3f0u, eax);
    wr32(sp0 - 0x3f4u, arg2);
    g->esp = sp0 - 0x3d8u;
    t1 = cow_call_regs(g, COW_IMG(0x10311ef0u), eax, g->ecx, in_edx, 1, 7, arg2, eax, in_esi, rd32(sp0 - 0x3e8u), rd32(sp0 - 0x3e4u), rd32(sp0 - 0x3e0u), rd32(sp0 - 0x3dcu));
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        esi = t1;
        goto L_1007984b;
    }
    edx = t2;
L_1007983a: ;
    g->edx = edx;
    return -arg3;
L_1007984b: ;
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        goto L_100798a4;
    }
    ecx = rd32(COW_IMG(0x1057876cu));
    g->edx = edx;
    g->esp = sp0 - 0x3ecu;
    t3 = cow_call_regs(g, COW_IMG(0x101598a0u), eax, ecx, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        ecx = t4;
        edx = t5;
        goto L_100798a4;
    }
    edx = t5;
    if (rd32(rd32(COW_IMG(0x1057876cu)) + 0xc4u) == 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
    }
    else
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        ecx = ecx + 0x28u;
    }
    g->edx = edx;
    g->esp = sp0 - 0x3ecu;
    t6 = cow_thiscall(g, COW_IMG(0x101598b0u), ecx, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        ecx = t7;
        edx = t8;
        goto L_100798a4;
    }
    eax = t6;
    ecx = t7;
    if (rd16(eax + 0x210u) == 0u)
    {
        eax = eax + 0x7cu;
    }
    else
    {
        eax = eax + 0x214u;
    }
    wr32(sp0 - 0x3f0u, eax);
    wr32(sp0 - 0x3f4u, esi);
    wr32(sp0 - 0x3f8u, COW_IMG(0x103580a8u));
    wr32(sp0 - 0x3fcu, sp0 - 0x3e8u);
    g->edx = sp0 - 0x3e8u;
    g->esp = sp0 - 0x3e8u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x3e8u, COW_IMG(0x103580a8u), esi, eax, rd32(sp0 - 0x3ecu));
    t9 = g->edx;
    edx = t9;
L_100798b7: ;
    wr32(sp0 - 0x3f0u, sp0 - 0x3e8u);
    g->edx = edx;
    g->esp = sp0 - 0x3ecu;
    cow_cdecl(g, COW_IMG(0x100e8580u), 1, sp0 - 0x3e8u);
    t11 = g->edx;
    g->esi = rd32(sp0 - 0x3ecu);
    g->edx = t11;
    return arg3;
L_100798a4: ;
    wr32(sp0 - 0x3f0u, esi);
    wr32(sp0 - 0x3f4u, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0x3f8u, sp0 - 0x3e8u);
    g->edx = edx;
    g->esp = sp0 - 0x3e4u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x3e8u, COW_IMG(0x1034f7e0u), esi, rd32(sp0 - 0x3ecu), rd32(sp0 - 0x3e8u));
    t10 = g->edx;
    edx = t10;
    goto L_100798b7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10079810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10079810(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
