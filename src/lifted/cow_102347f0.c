/* f_0x102347f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_102347f0(Guest* g)
{
    double d1;
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x10u) == 0u)
    {
        eax = in_eax;
        goto L_10234917;
    }
    edi = rd32(self + 0x10u);
    if (rd8(self + 0x29u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x29u);
        goto L_10234817;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x29u);
    return (eax & 0xffffff00u) | 3u;
L_10234817: ;
    g->ecx = self;
    g->edx = in_edx;
    d1 = fr(g, (double)(int32_t)rd32(self) - fr(g, fr(g, (double)rdf32(self + 0x20u) - (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x1032a3a0u))));
    fpush(g, d1);
    g->esp = sp0 - 0x18u;
    t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = rd32(self + 8u);
    d6 = fr(g, (double)(int32_t)rd32(self + 4u) - fr(g, fr(g, (double)rdf32(self + 0x24u) - (double)rdf32(COW_IMG(0x1032961cu))) * (double)(int32_t)(t5 >> 1u)));
    fpush(g, d6);
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), t5 >> 1u, g->ecx, g->edx, 1, 0);
    if ((int32_t)t2 > (int32_t)rd32(sp0 + 4u))
    {
        eax = t7;
        goto L_10234917;
    }
    eax = t7;
    ecx = rd32(sp0 + 4u);
    ebx = t5;
    ebp = t2;
    loc_8 = t7;
    if ((int32_t)(ebp + 8u) < (int32_t)ecx) goto L_10234917;
    if ((int32_t)eax > (int32_t)arg2) goto L_10234917;
    if (eax + ebx < arg2) goto L_10234917;
    ecx = eax + ebx;
    if ((int32_t)(eax + 4u) < (int32_t)arg2) goto L_102348a0;
    eax = eax + 4u;
    return (eax & 0xffffff00u) | 1u;
L_102348a0: ;
    if ((int32_t)(ecx - 4u) > (int32_t)arg2) goto L_102348ba;
    eax = ecx - 4u;
    if ((int32_t)(eax + 4u) < (int32_t)arg2) goto L_102348ba;
    eax = eax + 4u;
    return (eax & 0xffffff00u) | 2u;
L_102348ba: ;
    t8 = cow_divs(g, edi + (ebx - 9u) * rd32(self + 0xcu), edi);
    t9 = cow_mods(g, edi + (ebx - 9u) * rd32(self + 0xcu), edi);
    t10 = rd32(self + 0xcu);
    wr32(sp0 + 4u, t8);
    if ((int32_t)edi <= (int32_t)t10)
    {
        edx = t8;
        eax = 0u;
    }
    else
    {
        ecx = t10;
        edx = t8;
        ebx = ebx - 8u;
        t11 = cow_divs(g, (ebx - edx) * rd32(self + 0x14u), edi - ecx);
        t12 = cow_mods(g, (ebx - edx) * rd32(self + 0x14u), edi - ecx);
        eax = t11;
        edx = rd32(sp0 + 4u);
    }
    if ((int32_t)(eax + loc_8 + 4u) <= (int32_t)arg2)
    {
        eax = eax + loc_8 + 4u;
        goto L_10234902;
    }
    eax = eax + loc_8 + 4u;
    return (eax & 0xffffff00u) | 4u;
L_10234902: ;
    return ((eax & 0xffffff00u) | (int32_t)(eax + edx) < (int32_t)arg2) * 2u + 3u;
L_10234917: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102347f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102347f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
