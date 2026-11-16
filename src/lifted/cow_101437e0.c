/* f_0x101437e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101437e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x10u, self);
    if (rd32(self + 8u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        ebx = in_ebx;
        ebp = in_ebp;
    }
    else
    {
        ecx = rd32(self + 8u);
        wr32(sp0 - 0x1cu, in_ebx);
        wr32(sp0 - 0x20u, in_ebp);
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr16(sp0 - 0xcu, 0u);
        wr16(sp0 - 0xau, 0u);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        g->edx = in_edx;
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0xcu, ecx, g->edx, 0, 1, sp0 - 0xcu);
        t1 = g->ecx;
        t2 = g->edx;
        t3 = rd32(self + 0x18u);
        t4 = rd16(sp0 - 0xcu);
        t5 = rd16(sp0 - 0xau);
        wr16(self + 0x20u, (uint16_t)t4);
        wr16(self + 0x22u, (uint16_t)t5);
        if (t3 == 0u)
        {
            ecx = (t1 & 0xffff0000u) | t4;
            edx = (t2 & 0xffff0000u) | t5;
            wr16(self + 0x1cu, (uint16_t)ecx);
            wr16(self + 0x1eu, (uint16_t)edx);
        }
        else
        {
            eax = t3;
            ecx = (t1 & 0xffff0000u) | t4;
            edx = (t2 & 0xffff0000u) | t5;
            wr16(self + 0x1cu, (uint16_t)((uint16_t)ecx + rd16(eax + 4u)));
            wr16(self + 0x1eu, (uint16_t)((uint16_t)edx + rd16(eax + 6u)));
        }
        t6 = rd32(sp0 - 6u);
        t7 = rd32(sp0 - 0xau);
        t8 = rd32(sp0 - 8u);
        t9 = rd32(sp0 - 0xcu);
        wr16(self + 0x24u, (uint16_t)(t8 - t9));
        wr16(self + 0x26u, (uint16_t)(t6 - t7));
        eax = t6 - t7;
        edx = t8 - t9;
        esi = self + 0x36u;
        edi = COW_IMG(0x1037149eu);
L_10143878: ;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(esi - 0xeu, self + 0x18u);
        g->esi = esi;
        g->edi = edi;
        g->eax = eax;
        g->esp = sp0 - 0x20u;
        t10 = cow_fastcall(g, COW_IMG(0x10131df0u), esi - 0xeu, edx, 2, 0u, 0u);
        t11 = g->ecx;
        t12 = g->edx;
        t13 = (t11 & 0xffff0000u) | rd16(edi - 4u);
        wr32(sp0 - 0x24u, t13);
        t14 = (t12 & 0xffff0000u) | rd16(edi - 6u);
        wr32(sp0 - 0x28u, t14);
        g->esi = esi;
        g->edi = edi;
        t15 = cow_fastcall(g, COW_IMG(0x10131df0u), esi - 0xeu, t14, 2, t14, t13);
        t16 = g->ecx;
        t17 = rd16(edi - 2u);
        t18 = rd32(sp0 - 0x10u);
        wr16(esi, rd16(edi));
        wr16(esi - 2u, (uint16_t)t17);
        wr16(esi + 0xau, 0xff9du);
        wr16(esi + 0xcu, 0x270fu);
        wr32(esi + 6u, t18 + 0x14u);
        wr8(esi + 0xeu, 4u);
        wr16(esi + 0x10u, 0u);
        wr32(esi + 2u, 0u);
        if ((int32_t)(edi + 8u) < (int32_t)COW_IMG(0x103714eeu))
        {
            eax = 0u;
            edx = t18;
            esi = esi + 0x20u;
            edi = edi + 8u;
            goto L_10143878;
        }
        edx = t18;
        wr32(sp0 - 0x24u, 0xdu);
        wr32(sp0 - 0x28u, 0x10u);
        t19 = rd32(edx + 8u);
        wr32(edx + 0x138u, 2u);
        wr32(edx + 0x158u, 2u);
        g->eax = 2u;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t20 = cow_thiscall(g, COW_IMG(0x10118b60u), t19, 2, 0x10u, 0xdu);
        t21 = g->edx;
        wr32(sp0 - 0x24u, 0u);
        g->edx = t21;
        t22 = cow_thiscall(g, COW_IMG(0x10143cb0u), edx, 1, 0u);
        t23 = g->edx;
        eax = t22;
        edx = t23;
        ebx = rd32(sp0 - 0x1cu);
        ebp = rd32(sp0 - 0x20u);
    }
    if (rd32(COW_IMG(0x105782a4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105782a4u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t24 = cow_thiscall(g, COW_IMG(0x10144330u), ecx, 0);
        t25 = g->edx;
        eax = t24;
        edx = t25;
    }
    g->ebx = ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101437e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101437e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
