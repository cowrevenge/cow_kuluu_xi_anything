/* f_0x100d67b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100d67b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, rd32(t1 + 0x2a4u), self, 0);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        eax = t2;
        edx = t3;
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
    }
    else
    {
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 4u, arg2);
        g->eax = sp0 - 4u;
        g->edx = rd32(self);
        t4 = rd32(self);
        g->esp = sp0 - 0x10u;
        t5 = cow_thiscall(g, rd32(t4 + 0x3e4u), self, 2, 1u, sp0 - 4u);
        t6 = g->edx;
        if (t5 == 0u)
        {
            eax = t5;
            edx = t6;
            loc_4 = arg2;
            loc_8 = in_ebx;
            loc_c = in_esi;
            loc_10 = in_edi;
        }
        else
        {
            eax = t5;
            esi = t5;
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x18u, arg2);
            wr32(rd32(esi + 0xcu) + 0xcu, 1u);
            wr32(sp0 - 0x1cu, esi);
            wr32(sp0 - 0x20u, sp0 + 8u);
            wr8(esi + 3u, 0u);
            g->esp = sp0 - 0x10u;
            cow_fastcall(g, COW_IMG(0x100d6850u), self, sp0 + 8u, 4, sp0 + 8u, esi, arg2, 0u);
            t7 = g->edx;
            if (arg2 == 0u)
            {
                eax = arg2;
                edx = t7;
            }
            else
            {
                wr32(sp0 - 0x14u, 0u);
                wr32(sp0 - 0x18u, 0u);
                wr32(sp0 - 0x1cu, arg2);
                wr32(sp0 - 0x20u, self);
                t8 = rd32(rd32(arg2) + 0x20u);
                wr32(self + 0x7c4u, t8);
                wr32(sp0 - 0x24u, arg2);
                g->eax = arg2;
                g->edx = t8;
                g->esp = sp0 - 0x20u;
                t9 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, arg2);
                t10 = g->edx;
                g->edx = t10;
                g->esp = sp0 - 0x10u;
                t11 = cow_call_regs(g, COW_IMG(0x10056c70u), t9, t9, g->edx, 0, 4, self, arg2, 0u, 0u);
                t12 = g->edx;
                eax = t11;
                edx = t12;
            }
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t13 = cow_call_regs(g, COW_IMG(0x1018c620u), eax, esi, g->edx, 1, 0);
            t14 = g->ecx;
            t15 = g->edx;
            wr32(sp0 - 0x14u, esi);
            t16 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t14, t15, 1, 1, esi);
            t17 = g->edx;
            eax = t16;
            edx = t17;
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
        }
    }
    g->ebx = loc_8;
    g->esi = loc_c;
    g->edi = loc_10;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d67b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d67b0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
