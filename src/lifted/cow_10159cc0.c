/* f_0x10159cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10159cc0(Guest* g)
{
    double d12;
    double d15;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(arg1, 0u);
    wr32(arg1 + 4u, 0u);
    wr32(arg1 + 8u, 0u);
    wr32(arg1 + 0xcu, 0x3f800000u);
    g->edx = 0u;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101598a0u), in_eax, self, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != t3)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        edi = t1;
        goto L_10159ce9;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_10159ce9: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10159c80u), eax, ecx, g->edx, 0, 1, arg1);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        edx = t5;
        goto L_10159cf8;
    }
    eax = t4;
    return eax;
L_10159cf8: ;
    g->eax = rd32(edi);
    t6 = rd32(edi);
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, rd32(t6 + 0x1bcu), edi, 0);
    d8 = fr(g, (double)rdf32(arg1) - (double)rdf32(t7));
    wrf32(arg1, (float)d8);
    g->edx = rd32(edi);
    t9 = rd32(edi);
    t10 = cow_thiscall(g, rd32(t9 + 0x1bcu), edi, 0);
    t11 = g->edx;
    d12 = fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(t10 + 4u));
    wrf32(arg1 + 4u, (float)d12);
    g->eax = rd32(edi);
    t13 = rd32(edi);
    t14 = cow_thiscall(g, rd32(t13 + 0x1bcu), edi, 0);
    d15 = fr(g, (double)rdf32(arg1 + 8u) - (double)rdf32(t14 + 8u));
    wrf32(arg1 + 8u, (float)d15);
    return (t14 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10159cc0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
