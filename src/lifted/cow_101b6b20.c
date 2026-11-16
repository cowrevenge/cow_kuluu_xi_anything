/* f_0x101b6b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101b6b20(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
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
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    t1 = rd8(self + 0xf0ecu);
    wr8(self + 0xef22u, 0u);
    if ((uint8_t)t1 != 0u)
    {
        eax = (in_eax & 0xffffff00u) | t1;
        goto L_101b6bac;
    }
    if (rd32(self + 0xf10cu) != 0u)
    {
        eax = rd32(self + 0xf10cu);
        goto L_101b6bac;
    }
    g->edx = in_edx;
    t2 = rd32(self + 0x8c70u);
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x101ac230u), self + 0x7e30u, 0);
    t4 = g->edx;
    if ((int32_t)(t2 + t3 + 2u) > (int32_t)rd32(self + 0xf118u))
    {
        eax = t2 + t3 + 2u;
        edx = t4;
        goto L_101b6bf7;
    }
    edx = t4;
    t5 = (uint8_t)(rd32(sp0 + 4u) >> 8u);
    wr32(sp0 - 0x10u, t5);
    t6 = rd32(sp0 + 4u);
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x101b4c20u), self + 0x8aacu, edx, 1, t5);
    t7 = g->edx;
    wr32(sp0 - 0x10u, t6);
    t8 = cow_fastcall(g, COW_IMG(0x101b4c20u), self + 0x8aacu, t7, 1, t6);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_call_regs(g, COW_IMG(0x101b6e90u), t8, self, g->edx, 1, 0);
    t11 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        eax = t10;
        edx = t11;
        goto L_101b6bf7;
    }
    edx = t11;
    t12 = rd32(self + 0x8c70u);
    wr32(sp0 - 0x10u, t12);
    wr32(sp0 - 0x14u, self + 0x8aacu);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t13 = cow_thiscall(g, COW_IMG(0x101b6ee0u), self, 2, self + 0x8aacu, t12);
    t14 = g->edx;
    if ((int32_t)t13 <= 0)
    {
        eax = t13;
        edx = t14;
        goto L_101b6bf7;
    }
    eax = t13;
    g->eax = eax;
    g->edx = rd32(self);
    t15 = rd32(self);
    g->esp = sp0 - 0xcu;
    t16 = cow_thiscall(g, rd32(t15 + 0x70u), self, 0);
    t17 = g->edx;
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t17;
    return t16;
L_101b6bac: ;
    wr32(sp0 - 0x10u, 2u);
    t18 = rd32(sp0 + 4u);
    wr32(sp0 - 0x14u, t18);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t19 = cow_call_regs(g, COW_IMG(0x101b6d50u), eax, self, g->edx, 0, 2, t18, 2u);
    t20 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        eax = t19;
        edx = t20;
    }
    else
    {
        edx = t20;
        ebx = t18;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t21 = cow_thiscall(g, COW_IMG(0x101ac230u), self + 0x7e30u, 0);
        t22 = g->edx;
        if ((int32_t)(t21 + 2u) > (int32_t)rd32(self + 0xf118u))
        {
            eax = t21 + 2u;
            edx = t22;
        }
        else
        {
            edx = t22;
            wr32(sp0 - 0x10u, 2u);
            wr32(sp0 - 0x14u, sp0 + 4u);
            wr8(sp0 + 4u, (uint8_t)(ebx >> 8u));
            wr8(sp0 + 5u, (uint8_t)ebx);
            wr8(sp0 + 6u, 0u);
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t23 = cow_thiscall(g, COW_IMG(0x101abc50u), self + 0x7e30u, 2, sp0 + 4u, 2u);
            t24 = g->edx;
            eax = t23;
            edx = t24;
        }
    }
L_101b6bf7: ;
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b6b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b6b20(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
