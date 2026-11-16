/* f_0x10303456 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10303456(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_esi = g->esi;

    if (rd8(in_esi + 0xc8u) == 0u)
    {
        eax = in_eax;
        goto L_10303533;
    }
    edi = rd32(in_esi + 0x184u);
    loc_8 = rd32(sp0 - 8u) & 0xffffffu;
    if (rd32(in_esi + 0x8cu) == 0u)
    {
        eax = in_eax;
        goto L_10303533;
    }
    if (rd32(edi + 0x70u) == 0u)
    {
        t1 = rd32(in_esi + 0x20u) * 0x18u;
        g->eax = t1;
        g->esp = sp0 - 0x2cu;
        t2 = cow_thiscall(g, rd32(rd32(in_esi + 4u)), rd32(in_esi + 4u), 0);
        wr32(edi + 0x70u, t2);
    }
    t3 = rd32(edi + 0x70u);
    if ((int32_t)rd32(in_esi + 0x20u) <= 0)
    {
        eax = rd32(in_esi + 0xc4u);
        goto L_1030352e;
    }
    eax = rd32(in_esi + 0xc4u);
    loc_c = t3;
    loc_14 = 0u;
    loc_10 = 0u;
    loc_18 = eax + 0x4cu;
    eax = eax + 0x4cu;
L_103034bb: ;
    if (rd32(eax) == 0u)
    {
        eax = rd32(eax);
        goto L_10303533;
    }
    eax = rd32(eax);
    if (rd16(eax) == 0u) goto L_10303533;
    if (rd16(eax + 2u) == 0u) goto L_10303533;
    if (rd16(eax + 0x10u) == 0u) goto L_10303533;
    if (rd16(eax + 0x20u) == 0u) goto L_10303533;
    if (rd16(eax + 0x12u) == 0u) goto L_10303533;
    if (rd16(eax + 4u) == 0u) goto L_10303533;
    if ((int32_t)rd32(loc_10 + rd32(in_esi + 0x8cu)) < 0)
    {
        eax = loc_10 + rd32(in_esi + 0x8cu);
        goto L_10303533;
    }
    eax = loc_10 + rd32(in_esi + 0x8cu);
    ecx = eax + 4u;
    edx = loc_c - eax;
    eax = 5u;
L_103034fc: ;
    wr32(ecx + edx, rd32(ecx));
    if (rd32(ecx) != 0u)
    {
        loc_8 = (loc_8 & 0xffffffu) | 0x1000000u;
    }
    if (eax != 1u)
    {
        eax = eax - 1u;
        ecx = ecx + 4u;
        goto L_103034fc;
    }
    if ((int32_t)(loc_14 + 1u) < (int32_t)rd32(in_esi + 0x20u))
    {
        eax = loc_18 + 0x54u;
        loc_c = loc_c + 0x18u;
        loc_14 = loc_14 + 1u;
        loc_10 = loc_10 + 0x100u;
        loc_18 = loc_18 + 0x54u;
        goto L_103034bb;
    }
    eax = loc_18 + 0x54u;
L_1030352e: ;
    eax = (eax & 0xffffff00u) | loc_8 >> 0x18u;
L_10303535: ;
    return eax;
L_10303533: ;
    eax = eax & 0xffffff00u;
    goto L_10303535;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10303456(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10303456(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
