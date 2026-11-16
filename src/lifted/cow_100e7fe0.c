/* f_0x100e7fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e7fe0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 >= 0)
    {
        eax = rd32(COW_IMG(0x104df770u));
        goto L_100e8004;
    }
    eax = rd32(COW_IMG(0x104df770u));
    t1 = rd32(eax + 0x7f4u);
    g->eax = eax;
    g->ecx = t1;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x10310ed5u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = cow_call_regs(g, COW_IMG(0x100e8160u), g->eax, g->ecx, t4, 1, 0);
    t6 = g->edx;
    g->edx = t6;
    return t5 & 0xffffff00u;
L_100e8004: ;
    if (rd32(eax + 0x808u) == 0u)
    {
        ecx = rd32(eax + 0x808u);
        goto L_100e8025;
    }
    ecx = rd32(eax + 0x808u);
    t7 = rd32(eax + 0x7f4u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t7;
    g->esp = sp0;
    t8 = cow_cdecl(g, COW_IMG(0x10310ed5u), 1, t7);
    t9 = g->ecx;
    t10 = g->edx;
    t11 = cow_call_regs(g, COW_IMG(0x100e8160u), g->eax, g->ecx, t10, 1, 0);
    t12 = g->edx;
    g->edx = t12;
    return t11 & 0xffffff00u;
L_100e8025: ;
    t13 = rd32(eax + 0x7fcu);
    g->edx = in_edx;
    g->esp = sp0;
    t14 = cow_cdecl(g, COW_IMG(0x10312fd6u), 1, t13);
    t15 = g->edx;
    wr32(rd32(COW_IMG(0x104df770u)) + 0x7f8u, t14);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x7f8u) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        edx = t15;
    }
    else
    {
        eax = rd32(COW_IMG(0x104df770u));
        ecx = rd32(rd32(COW_IMG(0x104df770u)) + 0x7f8u);
        g->ecx = ecx;
        g->edx = eax + 0x800u;
        g->esp = sp0 - 0xcu;
        t16 = cow_cdecl(g, COW_IMG(0x100f1280u), 3, 0xau, COW_IMG(0x100f19d0u), COW_IMG(0x100f19f0u));
        t17 = g->ecx;
        t18 = g->edx;
        g->edx = t18;
        g->esp = sp0;
        t19 = cow_cdecl(g, COW_IMG(0x100f1340u), 4, t16, eax + 0x7f4u, eax + 0x800u, COW_IMG(0x100e8090u));
        t20 = g->edx;
        eax = t19;
        edx = t20;
    }
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e7fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e7fe0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
