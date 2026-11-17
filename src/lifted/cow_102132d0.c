/* f_0x102132d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102132d0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(arg3 + 0x10cu) == 0u)
    {
        eax = rd32(arg3 + 0x10cu);
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg3 + 0x10cu);
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), in_edx, 1, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, 0u);
    t3 = g->edx;
    wr32(arg3 + 0x10cu, 0u);
    if (arg1 == 0u)
    {
        eax = rd32(arg3 + 0x110u);
        edx = t3;
        goto L_10213321;
    }
    eax = rd32(arg3 + 0x110u);
    edx = t3;
    if (eax != 3u) goto L_10213366;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x10212aa0u), arg3, 2, 6u, 0u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10213321: ;
    if (eax == 3u)
    {
        if (rd32(arg3 + 0x140u) != 0u)
        {
            edi = rd32(arg3 + 0x140u);
            g->edx = edx;
            t6 = rd32(arg3 + 0x108u);
            t7 = rd32(rd32(arg3 + 0x108u) + 0x24u);
            g->esp = sp0 - 0xcu;
            t8 = cow_call_regs(g, COW_IMG(0x101c5e50u), t6, t7, g->edx, 0, 1, 1u);
            t9 = g->ecx;
            t10 = g->edx;
            g->edx = t10;
            g->esp = sp0 - 8u;
            t11 = cow_call_regs(g, COW_IMG(0x10312090u), t8, g->ecx, g->edx, 1, 3, edi, t8, 0x20u);
            t12 = g->edx;
            eax = t11;
            edx = t12;
        }
        wr32(arg3 + 0x110u, 4u);
        wr8(arg3 + 0x114u, 0u);
        wr8(arg3 + 0x120u, 0u);
    }
L_10213366: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102132d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102132d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
