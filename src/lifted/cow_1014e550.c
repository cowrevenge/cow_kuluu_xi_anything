/* f_0x1014e550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1014e550(Guest* g)
{
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int16_t)rd16(rd32(self + 8u) + 0x56u) > 0)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        goto L_1014e600;
    }
    eax = rd32(self + 8u);
    if ((uint32_t)(int16_t)arg1 - 1u > 5u)
    {
        edx = in_edx;
        ebx = in_ebx & 0xffffff00u;
        edi = (in_edi & 0xffff0000u) | rd16(eax + 0x4cu);
        goto L_1014e5dc;
    }
    edi = (in_edi & 0xffff0000u) | rd16(eax + 0x4cu);
    t1 = rd32(COW_IMG(0x1014e608u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1014e57bu: goto L_1014e57b;
    case 0x1014e5a9u: goto L_1014e5a9;
    case 0x1014e5c5u: goto L_1014e5c5;
    case 0x1014e5ceu: goto L_1014e5ce;
    case 0x1014e5dcu: edx = in_edx; ebx = in_ebx & 0xffffff00u; goto L_1014e5dc;
    default: rt_fatal(g, COW_IMG(0x1014e574u), "switch");
    }
    return 0;
L_1014e57b: ;
    if ((int16_t)rd16(self + 0x30u) >= (int32_t)(rd32(self + 0x24u) - 1u))
    {
        edx = (uint32_t)(int16_t)rd16(self + 0x30u);
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | rd16(self + 0x30u);
        ecx = rd32(self + 0x24u) - 1u;
        t5 = rd16(self + 0x32u);
        wr16(self + 0x30u, (uint16_t)(eax + 1u));
        if ((int32_t)((uint32_t)(int16_t)(eax + 1u) - (uint32_t)(int16_t)t5) < 3)
        {
            edx = (uint32_t)(int16_t)t5;
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
        else
        {
            ecx = (ecx & 0xffff0000u) | t5;
            edx = (uint32_t)(int16_t)t5;
            wr16(self + 0x32u, (uint16_t)(ecx + 1u));
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
    }
L_1014e5dc: ;
    if ((int16_t)edi <= (int32_t)rd32(self + 0x24u))
    {
        eax = rd32(self + 0x24u);
        ecx = (uint32_t)(int16_t)edi;
        goto L_1014e5f7;
    }
    eax = rd32(self + 0x24u);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, eax, 0u);
    t7 = g->edx;
    d8 = cow_take_float(g);
    d9 = cow_take_float(g);
    g->ebx = in_ebx;
    g->edx = t7;
    fpush(g, d8);
    fpush(g, d9);
    return t6;
L_1014e5a9: ;
    if ((int16_t)rd16(self + 0x30u) <= 0)
    {
        edx = in_edx;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | rd16(self + 0x30u);
        t4 = rd16(self + 0x32u);
        wr16(self + 0x30u, (uint16_t)(eax - 1u));
        if ((int16_t)(eax - 1u) < (int16_t)t4)
        {
            eax = eax - 1u;
            wr16(self + 0x32u, (uint16_t)eax);
        }
        edx = in_edx;
        ebx = (in_ebx & 0xffffff00u) | 1u;
    }
    goto L_1014e5dc;
L_1014e5c5: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1014e1d0u), self, 0);
    t3 = g->edx;
    edx = t3;
    ebx = in_ebx & 0xffffff00u;
    goto L_1014e5dc;
L_1014e5ce: ;
    wr16(self + 0x548u, 0xffu);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10037bf0u), self, 0);
    t2 = g->edx;
    edx = t2;
    ebx = in_ebx & 0xffffff00u;
    goto L_1014e5dc;
L_1014e5f7: ;
    if ((uint8_t)ebx != 0u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t10 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
L_1014e600: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014e550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014e550(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
