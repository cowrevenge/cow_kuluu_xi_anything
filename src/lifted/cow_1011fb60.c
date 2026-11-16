/* f_0x1011fb60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_1011fb60(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    g->edx = in_edx;
    t1 = rd32(self + 0x14u);
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, COW_IMG(0x10126500u), self + 4u, 0);
    t3 = g->edx;
    wr32(sp0 - 4u, t2);
    if ((int32_t)rd32(sp0 + 0x14u) <= 0)
    {
        eax = rd32(sp0 + 0x14u);
        edx = t3;
        esi = t1;
        edi = 0u;
        loc_4 = t2;
    }
    else
    {
        eax = rd32(sp0 + 0x14u);
        edx = t3;
        esi = t1;
        loc_4 = t2;
        ebp = eax;
        edi = eax;
L_1011fb84: ;
        wr32(sp0 - 0x18u, sp0 - 4u);
        g->eax = sp0 - 4u;
        g->esp = sp0 - 0x14u;
        t4 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
        t5 = g->edx;
        if (ebp != 1u)
        {
            edx = t5;
            ebp = ebp - 1u;
            goto L_1011fb84;
        }
        eax = t4;
        edx = t5;
    }
    if ((int32_t)edi < (int32_t)esi)
    {
        wr32(sp0 + 0x14u, esi - edi);
L_1011fba9: ;
        wr32(sp0 - 0x18u, sp0 - 4u);
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t6 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
        t7 = g->edx;
        if (t6 == 0u)
        {
            edx = t7;
        }
        else
        {
            eax = t6;
            wr32(sp0 - 0x18u, arg4);
            wr32(sp0 - 0x1cu, arg3);
            wr32(sp0 - 0x20u, 0x3f800000u);
            wr32(sp0 - 0x24u, 0x3f800000u);
            wr32(sp0 - 0x28u, arg2);
            wr32(sp0 - 0x2cu, arg1);
            g->ebx = self + 4u;
            g->esp = sp0 - 0x14u;
            cow_fastcall(g, COW_IMG(0x1011e980u), eax, arg1, 6, arg1, arg2, 0x3f800000u, 0x3f800000u, arg3, arg4);
            t8 = g->edx;
            edx = t8;
        }
        t9 = rd32(sp0 + 0x14u) - 1u;
        t10 = rd32(sp0 + 0x14u);
        wr32(sp0 + 0x14u, t9);
        if (t10 != 1u)
        {
            eax = t9;
            goto L_1011fba9;
        }
        eax = t9;
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011fb60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011fb60(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
