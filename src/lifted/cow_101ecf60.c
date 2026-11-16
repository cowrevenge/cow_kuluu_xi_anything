/* f_0x101ecf60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101ecf60(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 8u) == 0u)
    {
        eax = in_eax;
        edx = rd32(self + 8u);
        goto L_101ed017;
    }
    edx = rd32(self + 8u);
    if ((int32_t)(uint8_t)arg1 >= (int16_t)rd16(self + 4u))
    {
        eax = (uint32_t)(int16_t)rd16(self + 4u);
        goto L_101ed017;
    }
    if (rd32(edx + (uint8_t)arg1 * 0x54u + 0x48u) == 0u)
    {
        eax = (uint8_t)arg1 * 8u - (uint8_t)arg1;
        goto L_101ed017;
    }
    esi = rd32(edx + (uint8_t)arg1 * 0x54u + 0x48u);
    if (esi != 1u) goto L_101ecfcd;
    wr8(self + 0x10u, 1u);
    wr8(self + 0x11u, (uint8_t)arg1);
    t1 = rd32(COW_IMG(0x106636b8u));
    wr16(t1 + 0x12u, 0u);
    g->ebx = arg1;
    g->eax = rd32(COW_IMG(0x106636b8u));
    t2 = rd32(COW_IMG(0x106636b8u));
    g->esp = sp0 - 0xcu;
    t3 = cow_fastcall(g, COW_IMG(0x102107d0u), rd32(COW_IMG(0x10664508u)), t1, 1, t2);
    t4 = g->edx;
    g->ebx = in_ebx;
    g->edx = t4;
    return (t3 & 0xffffff00u) | 1u;
L_101ecfcd: ;
    t5 = ((uint8_t)arg1 * 0x15u & 0xffff0000u) | rd16(esi);
    g->esi = esi;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x101cba50u), 2, 0u, t5);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t7;
        goto L_101ed017;
    }
    eax = t6;
    edx = t7;
    if (rd8(esi + 2u) >= rd8(esi + 3u))
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 3u);
        edx = (edx & 0xffffff00u) | rd8(esi + 2u);
        goto L_101ed017;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 3u);
    wr8(self + 0x10u, 1u);
    wr8(self + 0x11u, (uint8_t)arg1);
    t8 = rd16(esi);
    wr16(rd32(COW_IMG(0x106636b8u)) + 0x12u, (uint16_t)t8);
    g->ebx = arg1;
    g->eax = (eax & 0xffff0000u) | t8;
    t9 = rd32(COW_IMG(0x106636b8u));
    g->esp = sp0 - 0xcu;
    t10 = cow_fastcall(g, COW_IMG(0x102107d0u), rd32(COW_IMG(0x10664508u)), t9, 1, t9);
    t11 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t11;
    return (t10 & 0xffffff00u) | 1u;
L_101ed017: ;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ecf60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ecf60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
