/* f_0x100cdf90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100cdf90(Guest* g)
{
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0xcu, in_esi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    d5 = fr(g, (double)rdf32(self + 0x8b8u) - d4);
    wrf32(self + 0x8b8u, (float)d5);
    if (d5 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        ecx = t2;
        edx = t3;
        g->esp = sp0 - 0xcu;
        t6 = cow_fastcall(g, COW_IMG(0x103149e0u), ecx, edx, 0);
        t7 = cow_divs(g, t6, 0x1e0u);
        t8 = cow_mods(g, t6, 0x1e0u);
        wr32(sp0 - 8u, t8);
        t9 = rd8(self + 0x8aau);
        wrf32(self + 0x8b8u, (float)(double)(int32_t)t8);
        if ((uint8_t)t9 == 0u)
        {
            eax = (t7 & 0xffffff00u) | t9;
            edx = t8;
            g->esp = sp0 - 0xcu;
            t10 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, self, g->edx, 1, 0);
            if ((uint8_t)t10 != 0u)
            {
                wr32(COW_IMG(0x1048a38cu), 0u);
                wr32(sp0 - 0x10u, sp0 - 4u);
                g->eax = sp0 - 4u;
                g->edx = rd32(self);
                t11 = rd32(self);
                g->esp = sp0 - 0xcu;
                t12 = cow_thiscall(g, rd32(t11 + 0x1e0u), self, 1, sp0 - 4u);
                t13 = g->edx;
                wr32(sp0 - 8u, rd32(t12));
                if (rd32(t12) != 0u)
                {
                    edx = t13;
                    loc_8 = rd32(t12);
                    g->esp = sp0 - 0xcu;
                    t14 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 8u, 0);
                    if ((uint8_t)t14 != 0u)
                    {
                        if (rd32(sp0 - 8u) == 0u)
                        {
                            eax = rd32(sp0 - 8u);
                            ecx = 0u;
                        }
                        else
                        {
                            eax = rd32(sp0 - 8u);
                            ecx = rd32(eax);
                        }
                        wr32(sp0 - 0x10u, 0x33657965u);
                        wr32(sp0 - 0x14u, 0x2bu);
                        wr32(sp0 - 0x18u, ecx);
                        wr32(sp0 - 0x1cu, sp0 - 4u);
                        g->edx = sp0 - 4u;
                        g->esp = sp0 - 0xcu;
                        t15 = cow_call_regs(g, COW_IMG(0x10072430u), eax, g->ecx, g->edx, 0, 4, sp0 - 4u, ecx, 0x2bu, 0x33657965u);
                        t16 = g->edx;
                        wr32(sp0 - 8u, rd32(t15));
                        if (rd32(t15) != 0u)
                        {
                            eax = rd32(t15);
                            edx = t16;
                            wr32(sp0 - 0x10u, 3u);
                            wr32(sp0 - 0x14u, 0x3f800000u);
                            wr32(sp0 - 0x18u, 0x3f800000u);
                            wr32(sp0 - 0x1cu, 1u);
                            wr32(sp0 - 0x20u, 0x3f800000u);
                            wr32(sp0 - 0x24u, 0x3f800000u);
                            wr32(sp0 - 0x28u, eax);
                            g->esp = sp0 - 0xcu;
                            cow_thiscall(g, COW_IMG(0x100cd4e0u), self, 7, eax, 0x3f800000u, 0x3f800000u, 1u, 0x3f800000u, 0x3f800000u, 3u);
                        }
                    }
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cdf90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100cdf90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
