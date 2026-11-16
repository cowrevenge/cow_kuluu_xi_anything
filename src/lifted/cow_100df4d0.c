/* f_0x100df4d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100df4d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    if (rd32(sp0 + 0x10u) >= 0x900u) goto L_100df4e4;
    eax = rd32(sp0 + 0x10u);
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_100df4e4: ;
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0xcu, 0x100u);
    t1 = rd32(sp0 + 0xcu);
    wr32(arg1, arg1 + 4u);
    wr32(arg1 + 0xcu, 0u);
    wr32(rd32(arg1) + 4u, 0u);
    t2 = rd32(arg1);
    wr32(t2, 0u);
    wr32(sp0 - 0x10u, t1 + 5u);
    eax = t1 + 5u;
    ecx = t2;
    ebp = 1u;
    loc_c = 0x100u;
    loc_10 = t1 + 5u;
L_100df520: ;
    t3 = rd32(eax - 4u);
    t4 = rd32(arg1);
    wr8(sp0 + 0x10u, rd8(eax - 5u));
    wr32(sp0 - 8u, t3);
    wr32(sp0 - 4u, rd32(eax));
    t5 = rd32(eax);
    wr32(sp0 + 0xcu, 0u);
    if (t5 == 0u)
    {
        edx = 0u;
        esi = t4;
        zf = t5 == 0u;
    }
    else
    {
        esi = t4;
        loc_4 = t5;
        edx = 0u;
        edi = arg1 + ebp * 0x14u + 4u;
L_100df548: ;
        wr32(sp0 - 0x20u, edx);
        wr32(sp0 - 0x24u, sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        t6 = cow_cdecl(g, COW_IMG(0x100df680u), 2, sp0 - 8u, edx);
        if ((uint8_t)t6 != 0u) goto L_100df569;
        if (rd32(esi) != 0u)
        {
            esi = rd32(esi);
            goto L_100df58c;
        }
        eax = esi;
        wr32(edi + 8u, eax);
        esi = edi;
L_100df579: ;
        wr32(edi, 0u);
        wr32(edi + 4u, 0u);
        wr32(eax, esi);
        ebp = ebp + 1u;
        edi = edi + 0x14u;
L_100df58c: ;
        t7 = rd32(sp0 + 0xcu) + 1u;
        t8 = rd32(sp0 - 4u);
        t9 = rd32(sp0 + 0xcu);
        wr32(sp0 + 0xcu, t7);
        if (t9 + 1u < t8)
        {
            edx = t7;
            goto L_100df548;
        }
        ecx = t8;
        edx = t7;
        eax = rd32(sp0 - 0x10u);
        zf = ecx == 0u;
    }
    if (!zf)
    {
        wr8(esi + 0xcu, rd8(sp0 + 0x10u));
    }
    wr32(sp0 - 0x10u, eax + 9u);
    wr32(sp0 - 0xcu, loc_c - 1u);
    if (loc_c != 1u)
    {
        ecx = loc_c - 1u;
        loc_c = loc_c - 1u;
        loc_10 = eax + 9u;
        eax = eax + 9u;
        goto L_100df520;
    }
    eax = eax + 9u;
    return eax & 0xffffff00u;
L_100df569: ;
    if (rd32(esi + 4u) != 0u)
    {
        esi = rd32(esi + 4u);
        goto L_100df58c;
    }
    eax = esi + 4u;
    ecx = esi;
    wr32(edi + 8u, ecx);
    esi = edi;
    goto L_100df579;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100df4d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100df4d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
