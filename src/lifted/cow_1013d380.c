/* f_0x1013d380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1013d380(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd8(self + 0x12cu) != 0u)
    {
        if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
        {
            eax = (uint32_t)(int16_t)rd16(self + 0x34eu);
            ecx = rd32(COW_IMG(0x10456a28u));
            edx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            ebx = rd32(sp0 + 4u);
            edi = (uint32_t)(int16_t)rd16(self + 0x34eu) + 3u;
            goto L_1013d3c2;
        }
        eax = (uint32_t)(int16_t)rd16(self + 0x34eu);
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ebx = rd32(sp0 + 4u);
        edi = (uint32_t)(int16_t)rd16(self + 0x34eu) + 3u;
        if (edx == 2u) goto L_1013d3cb;
        if (edx == 3u) goto L_1013d3cb;
L_1013d3c2: ;
        if (edx != 0u) goto L_1013d3cb;
        if ((uint8_t)ebx >= 3u) goto L_1013d3ce;
L_1013d3cb: ;
        edi = eax + 0x33u;
L_1013d3ce: ;
        wr32(sp0 - 0x14u, sp0 + 4u);
        wr32(sp0 - 0x18u, COW_IMG(0x1036fe74u));
        wr32(sp0 - 0x1cu, self + 0x12cu);
        t1 = (ecx & 0xffff0000u) | rd16(self + 0x34cu);
        wr32(sp0 - 0x20u, t1);
        t2 = (uint8_t)arg2 - 0x32u;
        wr32(sp0 - 0x24u, t2);
        wr32(sp0 + 4u, 0u);
        g->eax = sp0 + 4u;
        g->esp = sp0 - 0x10u;
        t3 = cow_thiscall_cdecl(g, COW_IMG(0x101ca650u), t1, 5, t2, t1, self + 0x12cu, COW_IMG(0x1036fe74u), sp0 + 4u);
        if (t3 != 0u)
        {
            eax = t3;
            wr32(sp0 - 0x14u, 0x80808080u);
            t4 = rd32(sp0 + 4u);
            wr32(sp0 - 0x18u, t4);
            wr32(sp0 - 0x1cu, eax);
            t5 = (uint8_t)ebx * 0x10u + (uint32_t)(int16_t)rd16(self + 0x350u) + 4u;
            wr32(sp0 - 0x20u, t5);
            wr32(sp0 - 0x24u, edi);
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x10129f00u), 5, edi, t5, eax, t4, 0x80808080u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013d380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013d380(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
