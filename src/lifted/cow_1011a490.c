/* f_0x1011a490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1011a490(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10160c90u), COW_IMG(0x10621838u), 0);
    t2 = g->edx;
    if (t1 != self)
    {
        eax = t1;
        loc_4 = self;
        goto L_1011a555;
    }
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t4 = g->edx;
    wr32(sp0 - 4u, t3);
    if (t3 == 0u)
    {
        eax = t3;
        loc_4 = t3;
        goto L_1011a555;
    }
    edx = t4;
    loc_4 = t3;
L_1011a4be: ;
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->ecx = self + 0x14u;
    g->esp = sp0 - 0x10u;
    t5 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    t6 = g->ecx;
    t7 = g->edx;
    if (rd16(t5) == 0u)
    {
        ecx = t6;
        esi = t5;
        goto L_1011a4df;
    }
    edx = t7;
    if (rd32(sp0 - 4u) != 0u) goto L_1011a4be;
    eax = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return eax;
L_1011a4df: ;
    t8 = rd32(esi + 0x3cu);
    if (rd32(esi + 0x3cu) != 0u)
    {
        eax = t8;
        edx = t8;
    }
    else
    {
        edx = t8;
        eax = rd32(esi + 0x28u);
    }
    if (eax != 0u)
    {
        if (edx != 0u)
        {
            edi = edx;
        }
        else
        {
            edi = rd32(esi + 0x28u);
        }
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        if (~ecx == 1u)
        {
            ecx = ~ecx - 1u;
        }
        else
        {
            if (rd32(COW_IMG(0x105781f8u)) == 0u)
            {
                ecx = rd32(COW_IMG(0x105781f8u));
            }
            else
            {
                ecx = rd32(COW_IMG(0x105781f8u));
                if (edx == 0u)
                {
                    edx = rd32(esi + 0x28u);
                }
                wr32(sp0 - 0x14u, 1u);
                wr32(sp0 - 0x18u, edx);
                g->eax = eax;
                g->esp = sp0 - 0x10u;
                t9 = cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, edx, 1u);
                t10 = g->ecx;
                wr8(self + 0x6du, 1u);
                eax = t9;
                ecx = t10;
            }
        }
    }
    if (rd32(esi + 0x2cu) != 0u)
    {
        edx = rd32(esi + 0x2cu);
        edi = edx;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        if (~ecx != 1u)
        {
            if (rd32(COW_IMG(0x1057847cu)) != 0u)
            {
                ecx = rd32(COW_IMG(0x1057847cu));
                if (rd32(esi + 0x40u) != 0u)
                {
                    eax = rd32(esi + 0x40u);
                }
                else
                {
                    eax = edx;
                }
                wr32(sp0 - 0x14u, 1u);
                wr32(sp0 - 0x18u, eax);
                g->eax = eax;
                g->esp = sp0 - 0x10u;
                t11 = cow_thiscall(g, COW_IMG(0x10150cc0u), ecx, 2, eax, 1u);
                wr8(self + 0x6cu, 1u);
                eax = t11;
            }
        }
    }
L_1011a555: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011a490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011a490(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
