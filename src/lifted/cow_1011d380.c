/* f_0x1011d380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1011d380(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(sp0 + 4u) != 0u)
    {
        ebx = rd32(sp0 + 4u);
        goto L_1011d394;
    }
    return 0xffffffffu;
L_1011d394: ;
    t1 = rd8(ebx);
    wr32(sp0 + 4u, 0u);
    if ((uint8_t)t1 == 0u)
    {
        ecx = self;
        esi = 0u;
        loc_4 = 0u;
        goto L_1011d41e;
    }
    ecx = self;
    edx = in_edx;
    esi = 0u;
    loc_4 = 0u;
L_1011d3a3: ;
    if (rd32(sp0 + 8u) == 0u)
    {
        eax = rd32(sp0 + 8u);
        goto L_1011d3af;
    }
    eax = rd32(sp0 + 8u);
    if (esi >= eax) goto L_1011d41e;
L_1011d3af: ;
    if (rd8(ebx + esi) != 4u)
    {
        edi = ebx + esi;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t2 = cow_cdecl(g, COW_IMG(0x1011c900u), 1, edi);
        t3 = g->ecx;
        t4 = g->edx;
        if ((uint8_t)t2 == 0u)
        {
            edx = t4;
            t8 = rd8(ebx + esi + 1u) | rd8(edi) << 8u;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t9 = cow_cdecl(g, COW_IMG(0x1011cec0u), 1, t8);
            t10 = g->edx;
            eax = t9;
            ecx = t9 + rd32(sp0 + 4u);
            edx = t10;
            esi = esi + 2u;
        }
        else
        {
            eax = t2;
            ecx = t3;
            edx = t4;
            t5 = (eax & 0xffff0000u) | rd8(edi);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t6 = cow_cdecl(g, COW_IMG(0x1011cec0u), 1, t5);
            t7 = g->edx;
            eax = t6;
            ecx = t6 + rd32(sp0 + 4u);
            edx = t7;
            esi = esi + 1u;
        }
        wr32(sp0 + 4u, ecx);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(ebx + esi);
        esi = esi + 1u;
    }
    if ((int16_t)rd16(sp0 + 4u) > (int16_t)arg3) goto L_1011d416;
    edx = (edx & 0xffff0000u) | rd16(sp0 + 4u);
    if (rd8(ebx + esi) != 0u)
    {
        loc_4 = esi;
        goto L_1011d3a3;
    }
    loc_4 = esi;
L_1011d41e: ;
    if ((int16_t)rd16(sp0 + 4u) <= (int16_t)arg3)
    {
        eax = esi;
    }
    else
    {
        eax = rd32(sp0 + 8u);
    }
    return eax;
L_1011d416: ;
    wr32(sp0 + 8u, loc_4);
    goto L_1011d41e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011d380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011d380(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
