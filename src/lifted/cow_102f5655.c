/* f_0x102f5655 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102f5655(Guest* g)
{
    double d2;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = arg1;
    ecx = self;
L_102f5666: ;
    if (rd8(eax) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        eax = eax + 1u;
        goto L_102f5666;
    }
    eax = eax + 1u;
    t1 = eax - (arg1 + 1u);
    if (rd32(self + 0x10u) + 4u <= rd32(self + 0x14u) - t1 - 1u)
    {
        eax = rd32(self + 0x14u) - t1 - 1u;
        loc_14 = t1;
        goto L_102f5732;
    }
    eax = rd32(self + 0x14u) - t1 - 1u;
    ecx = rd32(self + 0x10u) + 4u;
    edi = t1;
    loc_14 = t1;
    if ((int32_t)rd32(self + 8u) >= 0)
    {
        esi = rd32(self + 8u);
        x0 = (double)(int32_t)rd32(self + 8u);
    }
    else
    {
        esi = rd32(self + 8u);
        x0 = (double)(int32_t)rd32(self + 8u);
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    g->edx = in_edx;
    d2 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a404u)));
    fpush(g, d2);
    g->esp = sp0 - 0x20u;
    t3 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t4 = g->edx;
    if (edi + esi > t3)
    {
        ecx = edi + esi;
        edx = t4;
        loc_8 = edi + esi;
    }
    else
    {
        eax = t3;
        ecx = edi + esi;
        edx = t4;
        loc_8 = eax;
    }
    t5 = (loc_8 + 3u) >> 2u << 2u;
    g->eax = t5;
    g->esp = sp0 - 0x18u;
    t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t5, in_edi, in_esi);
    if (t6 != 0u)
    {
        edx = t6;
        edi = loc_8;
        loc_c = t6;
        goto L_102f56d6;
    }
    edx = t6;
    eax = 0x8007000eu;
L_102f575b: ;
    g->edx = edx;
    return eax;
L_102f56d6: ;
    t7 = rd32(self + 0xcu) + rd32(self + 8u) - rd32(self + 0x14u);
    t8 = edx - (rd32(self + 0xcu) + rd32(self + 8u) - rd32(self + 0x14u)) + edi;
    t9 = rd32(self + 0x14u);
    esi = t9;
    edi = t8;
    ecx = t7 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t7 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    eax = rd32(self + 0xcu);
    edx = t8 - rd32(self + 0x14u);
    esi = loc_c;
    loc_10 = t8;
L_102f570f: ;
    if (eax < rd32(self + 0x10u)) goto L_102f5703;
    t10 = rd32(self + 0xcu);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t10);
    wr32(self + 0xcu, loc_c);
    wr32(self + 8u, loc_8);
    wr32(self + 0x10u, esi);
    wr32(self + 0x14u, loc_10);
    eax = loc_10;
L_102f5732: ;
    wr32(self + 0x14u, rd32(self + 0x14u) - loc_14 - 1u);
    t12 = rd32(self + 0x14u);
    eax = t12;
    ecx = arg1;
    edx = t12;
L_102f5743: ;
    t13 = rd8(ecx);
    wr8(edx, (uint8_t)t13);
    if ((uint8_t)t13 != 0u)
    {
        eax = (eax & 0xffffff00u) | t13;
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_102f5743;
    }
    edx = edx + 1u;
    t14 = rd32(self + 0x14u);
    wr32(rd32(self + 0x10u), t14);
    wr32(self + 0x10u, rd32(self + 0x10u) + 4u);
    eax = 0u;
    goto L_102f575b;
L_102f5703: ;
    t11 = edx + rd32(eax);
    wr32(esi, t11);
    eax = eax + 4u;
    ecx = t11;
    esi = esi + 4u;
    goto L_102f570f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f5655(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f5655(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
