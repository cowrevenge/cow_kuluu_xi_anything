/* f_0x1000fee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1000fee0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u) goto L_1000ff61;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 8u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        edx = t3;
        edi = 0x8007000eu;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = t1;
        wr32(esi + 4u, 0u);
        wr32(esi, COW_IMG(0x10329ba0u));
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(COW_IMG(0x10329198u)), ecx, 1, COW_IMG(0x10456704u));
        t4 = rd32(esi + 4u) + 1u;
        wr32(esi + 4u, t4);
        wr32(esi + 4u, t4 - 1u);
        g->eax = rd32(esi);
        g->edx = arg2;
        t5 = rd32(esi);
        t6 = cow_thiscall(g, rd32(t5), arg3, 3, esi, arg2, arg3);
        t7 = g->ecx;
        t8 = g->edx;
        if (t6 == 0u)
        {
            edx = t8;
            edi = t6;
        }
        else
        {
            eax = t6;
            ecx = t7;
            edx = t8;
            edi = t6;
            wr32(esi, COW_IMG(0x10329ba0u));
            wr32(esi + 4u, 1u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t9 = cow_thiscall(g, rd32(COW_IMG(0x10329194u)), ecx, 1, COW_IMG(0x10456704u));
            t10 = g->ecx;
            t11 = g->edx;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t10, t11, 1, 1, esi);
            t12 = g->edx;
            edx = t12;
        }
    }
    g->edx = edx;
    return edi;
L_1000ff61: ;
    return 0x80040110u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000fee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000fee0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
