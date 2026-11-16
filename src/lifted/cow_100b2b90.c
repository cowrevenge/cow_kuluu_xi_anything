/* f_0x100b2b90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b2b90(Guest* g)
{
    double d11;
    double d17;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
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
    t4 = g->ecx;
    if ((uint8_t)t3 == 1u)
    {
        ecx = t4;
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x18u) * 4u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x18u) * 4u);
            if (!(rd32(eax + 0x120u) >> 7u & 1u))
            {
                ecx = rd32(eax + 8u);
                edx = rd32(eax + 0xcu);
                x0 = (double)rdf32(eax + 4u);
            }
            else
            {
                ecx = rd32(rd32(rd32(eax + 0xd4u) + 0x260u) + 0x144u);
                edx = rd32(rd32(rd32(eax + 0xd4u) + 0x260u) + 0x148u);
                x0 = (double)rdf32(rd32(rd32(eax + 0xd4u) + 0x260u) + 0x140u);
                eax = rd32(rd32(eax + 0xd4u) + 0x260u);
            }
            wr32(sp0 - 0xcu, ecx);
            wr32(sp0 - 8u, edx);
            loc_c = ecx;
            loc_8 = edx;
        }
        else
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x18u) * 4u);
            edx = (uint16_t)rd32(sp0 - 0x18u);
            wr32(sp0 - 0xcu, eax);
            wr32(sp0 - 8u, eax);
            loc_c = eax;
            loc_8 = eax;
            x0 = (double)rdf32(COW_IMG(0x103295d8u));
        }
        g->edx = edx;
        d5 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329cd8u)));
        fpush(g, d5);
        g->esp = sp0 - 0x1cu;
        t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t7 = g->edx;
        wr32(sp0 - 0x20u, t6);
        wr32(sp0 - 0x24u, 5u);
        g->edx = t7;
        t8 = cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 5u, t6);
        t9 = g->ecx;
        t10 = g->edx;
        g->edx = t10;
        d11 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(COW_IMG(0x10329cd8u)));
        fpush(g, d11);
        t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
        t13 = g->edx;
        wr32(sp0 - 0x20u, t12);
        wr32(sp0 - 0x24u, 7u);
        g->edx = t13;
        t14 = cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 7u, t12);
        t15 = g->ecx;
        t16 = g->edx;
        g->edx = t16;
        d17 = fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(COW_IMG(0x10329cd8u)));
        fpush(g, d17);
        t18 = cow_call_regs(g, COW_IMG(0x10311c6cu), t14, g->ecx, g->edx, 1, 0);
        t19 = g->edx;
        wr32(sp0 - 0x20u, t18);
        wr32(sp0 - 0x24u, 9u);
        cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 9u, t18);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xbu));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b2b90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b2b90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
