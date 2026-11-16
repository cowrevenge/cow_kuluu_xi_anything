/* f_0x1002c680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1002c680(Guest* g)
{
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 8u, arg1);
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x1002c600u), self, 2, arg1, 0u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1002c69e;
    }
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->esp = sp0;
    t3 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return t3 & 0xffffff00u;
L_1002c69e: ;
    wr32(sp0 - 4u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_thiscall(g, COW_IMG(0x10027e90u), sp0 + 0xcu, 1, eax);
    t5 = g->ecx;
    t6 = g->edx;
    d7 = (double)rdf32(sp0 + 0x48u);
    if (d7 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        edx = t6;
        goto L_1002c6e3;
    }
    eax = (t4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    ecx = t5;
    wr32(sp0 - 4u, ecx);
    d8 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0x48u));
    wrf32(sp0 - 4u, (float)d8);
    wr32(sp0 - 8u, sp0 + 0x3cu);
    wr32(sp0 - 0xcu, arg2);
    g->eax = eax;
    g->edx = arg2;
    g->esp = sp0;
    t9 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, arg2, sp0 + 0x3cu, cow_f2bits(d8));
    t10 = g->edx;
    t11 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return (t11 & 0xffffff00u) | 1u;
L_1002c6e3: ;
    wr32(sp0 - 4u, sp0 + 0x3cu);
    wr32(sp0 - 8u, arg2);
    g->eax = sp0 + 0x3cu;
    g->edx = edx;
    g->esp = sp0;
    t12 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg2, sp0 + 0x3cu);
    t13 = g->edx;
    t14 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return (t14 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002c680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002c680(g);
    g->esp = sp0;
    rt_return(g, r, 72u);
}
/* COW_ADAPTER END */
