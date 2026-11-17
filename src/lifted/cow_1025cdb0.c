/* f_0x1025cdb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025cdb0(Guest* g)
{
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd16(rd32(sp0 + 4u)) == 0u)
    {
        edx = in_edx;
        ebx = 0u;
        ebp = in_ebp;
        loc_c = in_ebx;
        loc_10 = in_esi;
        loc_14 = in_edi;
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | rd16(rd32(sp0 + 4u));
        esi = rd32(sp0 + 4u);
        wr32(sp0 - 0x18u, in_ebp);
        ebx = 0u;
L_1025cdc7: ;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        wr32(sp0 - 0x20u, eax);
        g->edx = rd32(rd32(self + 4u));
        t1 = rd32(self + 4u);
        t2 = rd32(rd32(self + 4u));
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(t2 + 0x18u), t1, 2, eax, sp0 - 8u);
        t3 = g->ecx;
        t4 = g->edx;
        t5 = (uint32_t)(int8_t)rd8(sp0 - 4u);
        wr32(sp0 + 4u, t5);
        g->edx = t4;
        d6 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(self + 0xcu));
        fpush(g, d6);
        t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), t5, g->ecx, g->edx, 1, 0);
        t8 = g->edx;
        if (rd16(esi + 2u) != 0u)
        {
            eax = (t7 & 0xffff0000u) | rd16(esi + 2u);
            ebx = ebx + t7;
            esi = esi + 2u;
            goto L_1025cdc7;
        }
        edx = t8;
        ebx = ebx + t7;
        ebp = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
    }
    g->ebx = loc_c;
    g->esi = loc_10;
    g->edi = loc_14;
    g->ebp = ebp;
    g->edx = edx;
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025cdb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025cdb0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
