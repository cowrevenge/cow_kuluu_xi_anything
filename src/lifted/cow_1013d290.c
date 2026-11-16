/* f_0x1013d290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1013d290(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    if (rd8(self + 0x1b8u) != 0u)
    {
        t1 = (uint32_t)(int16_t)rd16(self + 0x34eu) + 3u;
        wr32(sp0 - 4u, t1);
        if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
        {
            eax = (uint32_t)(int16_t)rd16(self + 0x34eu);
            edx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            ebx = rd32(sp0 + 4u);
            loc_4 = t1;
            goto L_1013d2d8;
        }
        eax = (uint32_t)(int16_t)rd16(self + 0x34eu);
        edx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ebx = rd32(sp0 + 4u);
        loc_4 = t1;
        if (edx == 2u) goto L_1013d2e1;
        if (edx == 3u) goto L_1013d2e1;
L_1013d2d8: ;
        if (edx != 0u) goto L_1013d2e1;
        if ((uint8_t)ebx >= 3u) goto L_1013d2e8;
L_1013d2e1: ;
        wr32(sp0 - 4u, eax + 0x33u);
        loc_4 = eax + 0x33u;
        eax = eax + 0x33u;
L_1013d2e8: ;
        wr32(sp0 - 0x18u, sp0 - 8u);
        wr32(sp0 - 0x1cu, COW_IMG(0x1036fe74u));
        wr32(sp0 - 0x20u, self + 0x1b8u);
        t2 = (eax & 0xffff0000u) | rd16(self + 0x34cu);
        wr32(sp0 - 0x24u, t2);
        t3 = (uint8_t)arg2 - 0x1eu;
        wr32(sp0 - 0x28u, t3);
        wr32(sp0 - 8u, 0u);
        g->eax = t2;
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0x14u;
        t4 = cow_thiscall_cdecl(g, COW_IMG(0x101ca650u), t3, 5, t3, t2, self + 0x1b8u, COW_IMG(0x1036fe74u), sp0 - 8u);
        t5 = g->edx;
        if (t4 != 0u)
        {
            edx = t5;
            esi = t4;
            wr32(sp0 - 0x18u, in_edi);
            if (rd8(esi - 1u) != 0xau)
            {
                edi = 0u;
            }
            else
            {
                edi = 0xffffffffu;
            }
            t6 = rd8(edi + esi);
            wr8(edi + esi, 0u);
            t7 = rd16(self + 0x350u);
            wr8(sp0 + 4u, (uint8_t)t6);
            wr32(sp0 - 0x1cu, 0x80808050u);
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, esi);
            t8 = (uint32_t)(int16_t)t7 + (uint8_t)ebx * 0x10u + 4u;
            wr32(sp0 - 0x28u, t8);
            t9 = rd32(sp0 - 4u);
            wr32(sp0 - 0x2cu, t9);
            g->ecx = (uint32_t)(int16_t)t7;
            g->esp = sp0;
            cow_cdecl(g, COW_IMG(0x10129f00u), 11, t9, t8, esi, 0u, 0x80808050u, in_edi, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), 0u, rd32(sp0 - 4u));
            t10 = g->ecx;
            wr8(edi + esi, rd8(sp0 + 4u));
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013d290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013d290(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
