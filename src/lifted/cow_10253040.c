/* f_0x10253040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10253040(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if ((int32_t)arg2 <= 0) goto L_102530bc;
    if ((rd8(arg3) & 0x10u) != 0u) goto L_102530bc;
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, arg1);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    g->eax = sp0 + 8u;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x1047d128u));
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x10073430u), t1, 3, sp0 + 8u, arg1, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = rd32(t2);
    wr32(arg3 + 0x14u, t5);
    if (t5 == 0u)
    {
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = t5;
        ecx = t3;
        edx = t4;
        if (rd32(eax) != 0u)
        {
            wr32(sp0 - 0x10u, eax);
            t6 = rd32(arg3 + 0xcu);
            g->esp = sp0 - 0xcu;
            t7 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, eax);
            wr32(t7 + 0x34u, t6);
            g->edx = rd32(arg3 + 0x14u);
            t8 = rd32(rd32(arg3 + 0x14u));
            t9 = rd32(arg3 + 0x14u);
            cow_call_regs(g, COW_IMG(0x10071e90u), t7, t8, g->edx, 1, 0);
            t10 = g->ecx;
            t11 = g->edx;
            ecx = t10;
            edx = t11;
        }
    }
    if (arg1 != 0u)
    {
        wr32(sp0 - 0x10u, 0x5du);
        wr32(sp0 - 0x14u, COW_IMG(0x10389ca0u));
        wr32(sp0 - 0x18u, arg1);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, arg1, COW_IMG(0x10389ca0u), 0x5du);
        t12 = g->edx;
        edx = t12;
    }
    t13 = (rd32(arg3) & 0xffffff00u) | (uint8_t)(rd32(arg3) | 4u);
    wr32(arg3, t13);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return t13;
L_102530bc: ;
    if (arg1 == 0u)
    {
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0x10u, 0x47u);
        wr32(sp0 - 0x14u, COW_IMG(0x10389ca0u));
        wr32(sp0 - 0x18u, arg1);
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, arg1, COW_IMG(0x10389ca0u), 0x47u);
        t14 = g->edx;
        edx = t14;
    }
    t15 = (rd32(arg3) & 0xffffff00u) | (rd32(arg3) & 0xefu);
    wr32(arg3, t15);
    g->edx = edx;
    return t15;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10253040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10253040(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
