/* f_0x102447e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102447e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10244870u), g->eax, g->ecx, in_edx, 1, 1, arg1);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t2;
        goto L_102447f7;
    }
    eax = t1;
    return 0xffffffffu;
L_102447f7: ;
    t3 = rd32(arg1 + 0x14u);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, arg1 + 0x118u, COW_IMG(0x103888b8u), arg2, t3, in_edi);
    t4 = rd32(rd32(arg1 + 0xcu) + 8u);
    t5 = rd32(arg1 + 0x10u);
    g->eax = t5;
    g->edx = rd32(arg1 + 0xcu);
    t6 = rd32(COW_IMG(0x10662dccu));
    t7 = rd32(arg1 + 0xcu);
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x101c49b0u), t6, 5, arg1 + 0x18u, arg1 + 0x118u, t5, t4, 0u);
    t9 = g->ecx;
    t10 = g->edx;
    if (rd32(arg1 + 0xcu) == 0u)
    {
        ecx = t9;
        edx = t10;
        edi = t8;
    }
    else
    {
        eax = rd32(arg1 + 0xcu);
        ecx = t9;
        edx = t10;
        edi = t8;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, eax);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(arg1 + 0xcu, 0u);
        ecx = t11;
        edx = t12;
    }
    if (rd32(arg1 + 0x10u) != 0u)
    {
        eax = rd32(arg1 + 0x10u);
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        wr32(arg1 + 0x10u, 0u);
    }
    return (((int32_t)edi > 0) - 1u & 0xffffff00u) | (((int32_t)edi > 0) - 1u & 0xfeu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102447e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102447e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
