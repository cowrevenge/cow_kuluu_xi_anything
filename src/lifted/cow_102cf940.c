/* f_0x102cf940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102cf940(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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

    ecx = self;
    edx = in_edx;
    edi = rd32(sp0 + 8u);
    loc_4 = 0x40u;
L_102cf953: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_cdecl(g, COW_IMG(0x102cfaa0u), 1, edi);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0 - 0x20u;
    t4 = cow_cdecl(g, COW_IMG(0x102cfaa0u), 1, edi + 0x10u);
    t5 = g->edx;
    g->ecx = edi + 0x20u;
    g->esp = sp0 - 0x24u;
    t6 = cow_cdecl(g, COW_IMG(0x102cfaa0u), 1, edi + 0x20u);
    t7 = g->ecx;
    g->esp = sp0 - 0x28u;
    t8 = cow_cdecl(g, COW_IMG(0x102cfaa0u), 1, edi + 0x30u);
    t9 = (t1 >> 0x18u) * 3u - 0x16cu;
    wr32(sp0 + 8u, t9);
    t10 = (t4 >> 0x18u) * 3u - 0x16cu;
    t11 = (t6 >> 0x18u) * 3u - 0x16cu;
    if ((t1 & 0xffffffu) < 0x965feau)
    {
        eax = t8 & 0xffffffu;
        ecx = (t8 >> 0x18u) * 3u - 0x16cu;
        edx = t11;
        ebx = t4 & 0xffffffu;
        ebp = t6 & 0xffffffu;
        esi = t1 & 0xffffffu;
        loc_c = t10;
        loc_8 = t11;
    }
    else
    {
        eax = t8 & 0xffffffu;
        ecx = (t8 >> 0x18u) * 3u - 0x16cu;
        ebx = t4 & 0xffffffu;
        ebp = t6 & 0xffffffu;
        esi = t1 & 0xffffffu;
        loc_c = t10;
        loc_8 = t11;
        t12 = rd32(sp0 + 8u) + 1u;
        wr32(sp0 + 8u, t12);
        edx = loc_8;
    }
    if (ebx >= 0x965feau)
    {
        edx = loc_8;
        loc_c = loc_c + 1u;
    }
    if (ebp >= 0x965feau)
    {
        edx = edx + 1u;
    }
    if (eax >= 0x965feau)
    {
        ecx = ecx + 1u;
    }
    if (esi < 0x428a30u)
    {
        wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
    }
    if (ebx < 0x428a30u)
    {
        loc_c = loc_c - 1u;
    }
    if (ebp < 0x428a30u)
    {
        edx = edx - 1u;
    }
    if (eax < 0x428a30u)
    {
        ecx = ecx - 1u;
    }
    if (rd32(sp0 + 8u) > 0x3fu)
    {
        wr32(sp0 + 8u, 0u);
    }
    if (loc_c > 0x3fu)
    {
        loc_c = 0u;
    }
    if (edx > 0x3fu)
    {
        edx = 0u;
    }
    if (ecx > 0x3fu)
    {
        ecx = 0u;
    }
    t13 = rd32(sp0 + 8u);
    t14 = rd32(sp0 + 4u);
    wr32(t14, t13);
    wr32(t14 + 4u, loc_c);
    wr32(t14 + 8u, edx);
    wr32(t14 + 0xcu, ecx);
    wr32(sp0 + 4u, t14 + 0x10u);
    if (loc_4 != 1u)
    {
        edi = edi + 0x40u;
        loc_4 = loc_4 - 1u;
        goto L_102cf953;
    }
    eax = loc_4 - 1u;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cf940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102cf940(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
