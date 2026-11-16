/* f_0x102233e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102233e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr8(sp0 - 8u, 1u);
    wr8(sp0 - 7u, 0u);
    wr8(sp0 - 6u, 0u);
    wr8(sp0 - 5u, 1u);
    wr8(sp0 - 4u, 0u);
    wr8(sp0 - 3u, 0u);
    wr8(sp0 - 2u, 0u);
    wr8(sp0 - 1u, 1u);
    if ((int32_t)arg1 < 0)
    {
        edx = in_edx;
        ebx = in_ebx & 0xffffff00u;
        esi = 0u;
    }
    else
    {
        wr32(sp0 - 0x18u, arg1);
        g->eax = (in_eax & 0xffffff00u) | 1u;
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        t1 = cow_thiscall(g, COW_IMG(0x10224160u), rd32(COW_IMG(0x10667148u)), 1, arg1);
        t2 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            edx = t2;
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            eax = t1;
            edx = t2;
            ebx = (in_ebx & 0xffffff00u) | rd8(COW_IMG(0x103644a8u) + rd8(eax + 0x10u) * 2u);
        }
        if (rd8(eax + 2u) != 6u)
        {
            eax = (eax & 0xffffff00u) | rd8(eax + 2u);
            goto L_10223443;
        }
        eax = (eax & 0xffffff00u) | rd8(eax + 2u);
        wr32(sp0 - 0x18u, 0x25bu);
        loc_18 = 0x25bu;
L_1022344c: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t3 = cow_thiscall(g, COW_IMG(0x10224160u), rd32(COW_IMG(0x10667148u)), 1, loc_18);
        t4 = g->edx;
        if (t3 == 0u)
        {
            edx = t4;
        }
        else
        {
            eax = t3;
            wr8(sp0 - 4u, 2u);
            wr8(sp0 - 3u, (uint8_t)ebx);
            edx = rd8(eax + 0x10u);
            ebx = (ebx & 0xffffff00u) | rd8(COW_IMG(0x103644a8u) + rd8(eax + 0x10u) * 2u);
        }
L_10223470: ;
        esi = COW_IMG(0x102234b0u);
    }
    wr32(sp0 - 0x18u, 2u);
    wr32(sp0 - 0x1cu, sp0 - 8u);
    t5 = rd32(COW_IMG(0x1057876cu));
    wr8(sp0 - 7u, (uint8_t)ebx);
    g->eax = sp0 - 8u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t6 = cow_thiscall(g, COW_IMG(0x10157780u), t5, 2, sp0 - 8u, 2u);
    t7 = g->edx;
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, esi);
    cow_thiscall(g, COW_IMG(0x10157860u), rd32(COW_IMG(0x1057876cu)), 2, esi, arg1);
    wr8(rd32(COW_IMG(0x1057876cu)) + 0x58u, 0u);
    return;
L_10223443: ;
    if ((uint8_t)eax != 0xau) goto L_10223470;
    wr32(sp0 - 0x18u, 0x2acu);
    loc_18 = 0x2acu;
    goto L_1022344c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102233e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102233e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
