/* f_0x100b2c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b2c80(Guest* g)
{
    double d10;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_20;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, sp0 - 0x18u);
    wr32(sp0 - 0x24u, sp0 - 0x14u);
    wr32(sp0 - 0x28u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 1u);
    t2 = g->edx;
    wr32(sp0 - 0x28u, t1);
    g->esp = sp0 - 0x1cu;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 0x14u, sp0 - 0x18u);
    if ((uint8_t)t3 == 1u)
    {
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x18u) * 4u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x18u) * 4u);
            if (!(rd32(eax + 0x120u) >> 7u & 1u))
            {
                ecx = rd32(eax + 0x120u) >> 7u;
                t5 = rd32(eax + 0x18u);
                wr32(sp0 - 0xcu, t5);
                edx = t5;
                loc_c = t5;
            }
            else
            {
                t4 = rd32(rd32(rd32(eax + 0xd4u) + 0x260u) + 0x154u);
                wr32(sp0 - 0xcu, t4);
                ecx = t4;
                edx = rd32(eax + 0xd4u);
                loc_c = t4;
            }
            wr32(sp0 - 0x20u, loc_c);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t6 = cow_call_regs(g, COW_IMG(0x100dd9d0u), loc_c, g->ecx, g->edx, 1, 1, loc_c);
            t7 = g->ecx;
            t8 = g->edx;
            d9 = cow_take_float(g);
            g->edx = t8;
            d10 = fr(g, fr(g, d9 * (double)rdf32(COW_IMG(0x1032d3d8u))) * (double)rdf32(COW_IMG(0x1032d6b4u)));
            fpush(g, d10);
            t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), t6, g->ecx, g->edx, 1, 0);
            t12 = g->edx;
            wr32(sp0 - 0x20u, t11);
            eax = t11;
            edx = t12;
            loc_20 = t11;
        }
        else
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x18u) * 4u);
            edx = (uint16_t)rd32(sp0 - 0x18u);
            wr32(sp0 - 0x20u, eax);
            loc_20 = eax;
        }
        wr32(sp0 - 0x24u, 5u);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 5u, loc_20);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 7u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b2c80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b2c80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
