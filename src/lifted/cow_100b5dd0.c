/* f_0x100b5dd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b5dd0(Guest* g)
{
    double d10;
    double d12;
    double d19;
    double d4;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t2 = g->edx;
    wr32(sp0 - 0xcu, t1);
    wr32(sp0 - 0x18u, 3u);
    t3 = rd32(self + 0x260u);
    d4 = fr(g, (double)(int32_t)t1 * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(t3 + 0x140u, (float)d4);
    g->eax = t3;
    g->edx = t2;
    t5 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t6 = g->edx;
    wr32(sp0 - 0xcu, t5);
    wr32(sp0 - 0x18u, 5u);
    d7 = fr(g, (double)(int32_t)t5 * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(rd32(self + 0x260u) + 0x148u, (float)d7);
    t8 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 5u);
    wr32(sp0 - 0xcu, t8);
    wr32(sp0 - 0x18u, 7u);
    t9 = rd32(self + 0x260u);
    d10 = fr(g, (double)(int32_t)t8 * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(t9 + 0x144u, (float)d10);
    t11 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 7u);
    wr32(sp0 - 0xcu, t11);
    d12 = fr(g, fr(g, (double)(int32_t)t11 * (double)rdf32(COW_IMG(0x10329d2cu))) * (double)rdf32(COW_IMG(0x10330250u)));
    wrf32(rd32(self + 0x260u) + 0x154u, (float)d12);
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd16(self + 2u);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        wr32(sp0 - 0x18u, in_edi);
        t13 = rd32(ecx + 0x120u);
        if (!((rd32(ecx + 0x128u) >> 0xeu | t13 >> 0x15u | t13 >> 0x14u) & 1u))
        {
            t14 = rd32(rd32(self + 0x260u) + 0x144u);
            wr32(sp0 - 8u, t14);
            if (eax != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
            {
                eax = rd32(self + 0x260u);
                edx = rd32(rd32(self + 0x260u) + 0x148u);
                loc_8 = t14;
                wr32(sp0 - 4u, edx);
                t17 = rd32(eax + 0x140u);
                wr32(sp0 - 0xcu, t17);
                wr32(sp0 - 0x18u, sp0 - 0x10u);
                wr32(sp0 - 0x1cu, edx);
                wr32(sp0 - 0x20u, loc_8);
                wr32(sp0 - 0x24u, t17);
                g->eax = t17;
                g->esp = sp0 - 0x14u;
                t18 = cow_thiscall(g, COW_IMG(0x10181300u), rd32(COW_IMG(0x10631f24u)), 4, t17, loc_8, edx, sp0 - 0x10u);
                eax = t18;
            }
            else
            {
                eax = rd32(self + 0x260u);
                edx = rd32(rd32(self + 0x260u) + 0x148u);
                loc_8 = t14;
                wr32(sp0 - 0xcu, edx);
                t15 = rd32(eax + 0x140u);
                wr32(sp0 - 4u, t15);
                wr32(sp0 - 0x18u, sp0 - 0x10u);
                wr32(sp0 - 0x1cu, 0x42480000u);
                wr32(sp0 - 0x20u, edx);
                wr32(sp0 - 0x24u, loc_8);
                wr32(sp0 - 0x28u, t15);
                g->eax = t15;
                g->esp = sp0 - 0x14u;
                t16 = cow_thiscall(g, COW_IMG(0x10181290u), rd32(COW_IMG(0x10631f24u)), 5, t15, loc_8, edx, 0x42480000u, sp0 - 0x10u);
                eax = t16;
            }
            if ((uint8_t)eax == 1u)
            {
                d19 = (double)rdf32(sp0 - 0x10u);
                wrf32(rd32(self + 0x260u) + 0x144u, (float)d19);
            }
        }
        g->edx = rd16(self + 2u);
        t20 = rd16(self + 2u);
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x10092f90u), rd32(COW_IMG(0x10480af0u) + t20 * 4u), 0);
        t21 = g->edx;
        cow_thiscall(g, COW_IMG(0x1008f2a0u), rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u), 0);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 9u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b5dd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b5dd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
