/* f_0x10047830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10047830(Guest* g)
{
    double d11;
    double d12;
    double d15;
    double d16;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t13;
    uint32_t t14;
    uint32_t t17;
    uint32_t t18;
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
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    if (rd8(self + 0x1d4u) != 0u)
    {
        edx = in_edx;
        esi = in_esi;
        edi = in_edi;
        loc_4 = self;
        loc_8 = in_ebx;
    }
    else
    {
        wr32(sp0 - 0xcu, in_esi);
        wr32(sp0 - 0x10u, in_edi);
        if (rd32(self + 0xfcu) == 0u)
        {
            eax = rd32(self + 0xfcu);
            esi = 0u;
        }
        else
        {
            eax = rd32(self + 0xfcu);
            esi = rd32(eax);
        }
        if (esi == 0u)
        {
            edx = in_edx;
            loc_4 = self;
            loc_8 = in_ebx;
            loc_c = in_esi;
            loc_10 = in_edi;
        }
        else
        {
            if (!(rd8(esi + 0x1au) >> 2u & 1u))
            {
                ecx = rd32(esi + 0x20u);
            }
            else
            {
                ecx = rd32(rd32(rd32(esi + 0x28u)) + 0x20u);
            }
            wr32(sp0 - 0x14u, ecx);
            wr32(sp0 - 0x18u, 7u);
            wr32(sp0 - 0x1cu, sp0 - 4u);
            t1 = rd32(rd32(esi + 0x28u));
            g->edx = sp0 - 4u;
            g->esp = sp0 - 0x10u;
            t2 = cow_call_regs(g, COW_IMG(0x100724c0u), t1, t1, g->edx, 0, 3, sp0 - 4u, 7u, ecx);
            t3 = g->edx;
            if (rd32(t2) == 0u)
            {
                edx = t3;
                loc_4 = self;
                loc_8 = in_ebx;
                loc_c = in_esi;
                loc_10 = in_edi;
            }
            else
            {
                eax = rd32(t2);
                edx = t3;
                if (rd32(eax) == 0u)
                {
                    loc_4 = rd32(sp0 - 4u);
                    loc_8 = rd32(sp0 - 8u);
                    loc_c = rd32(sp0 - 0xcu);
                    loc_10 = rd32(sp0 - 0x10u);
                }
                else
                {
                    edi = rd32(eax);
                    wr32(sp0 - 0x14u, 0u);
                    wr32(sp0 - 0x18u, 0u);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t4 = cow_thiscall_cdecl(g, COW_IMG(0x1003b700u), esi + 0x30u, 2, 0u, 0u);
                    t5 = g->edx;
                    wr32(sp0 - 0x1cu, t4);
                    t6 = rd32(self + 0x1d5u);
                    wr32(sp0 - 0x20u, t6);
                    g->edx = t5;
                    cow_call_regs(g, COW_IMG(0x10056c70u), t6, edi, g->edx, 0, 4, t6, t4, 0u, 0u);
                    t7 = g->edx;
                    edx = t7;
                    loc_4 = rd32(sp0 - 4u);
                    loc_8 = rd32(sp0 - 8u);
                    loc_c = rd32(sp0 - 0xcu);
                    loc_10 = rd32(sp0 - 0x10u);
                }
            }
        }
        wr8(self + 0x1d4u, 1u);
        esi = loc_c;
        edi = loc_10;
    }
    if (rd32(rd32(self + 0x1d5u) + 0x84u) == 0u)
    {
        eax = rd32(rd32(self + 0x1d5u) + 0x84u);
    }
    else
    {
        eax = rd32(rd32(self + 0x1d5u) + 0x84u);
        ecx = rd32(self + 0x1d5u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t8 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t9 = g->ecx;
        t10 = g->edx;
        d11 = cow_take_float(g);
        d12 = fr(g, (double)rdf32(self + 0x110u) - d11);
        if (!(d12 < (double)rdf32(COW_IMG(0x1032961cu))))
        {
            eax = (t8 & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
            edx = t10;
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
        }
        else
        {
            eax = (t8 & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
            ecx = t9;
            edx = t10;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t13 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t14 = g->edx;
            d15 = cow_take_float(g);
            d16 = fr(g, d15 + (double)rdf32(COW_IMG(0x1032961cu)));
            wrf32(self + 0x110u, (float)d16);
            eax = t13;
            edx = t14;
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
        }
    }
    g->eax = eax;
    g->esp = sp0 - 8u;
    t17 = cow_fastcall(g, COW_IMG(0x10045a40u), self, edx, 0);
    t18 = g->edx;
    g->ebx = rd32(sp0 - 8u);
    g->esi = esi;
    g->edi = edi;
    g->edx = t18;
    return (t17 & 0xffffff00u) | (uint8_t)t17 != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10047830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10047830(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
