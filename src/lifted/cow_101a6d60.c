/* f_0x101a6d60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a6d60(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;

    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        goto L_101a6dfb;
    }
    eax = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, eax);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101a6dfb;
    }
    edx = t2;
    if ((int16_t)(rd16(rd32(self + 8u) + 0x4cu) - 1u) < 0)
    {
        eax = rd32(self + 8u);
        edi = (in_edi & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 8u) + 0x4cu) - 1u);
        goto L_101a6de2;
    }
    eax = rd32(self + 8u);
    edi = (in_edi & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 8u) + 0x4cu) - 1u);
    if ((int16_t)edi >= 20) goto L_101a6de2;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x101a8960u), rd32(self + 0x14u), 1, edi);
    t4 = g->edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, t3, 2u);
    t5 = (uint32_t)(int16_t)edi + rd8(self + 0x24u) * 0x14u + 1u;
    g->eax = t5;
    g->ecx = rd8(self + 0x24u) * 5u;
    g->edx = (uint32_t)(int16_t)edi;
    t6 = rd8(self + 0x24u);
    g->esp = sp0 - 0x10u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x75u);
    t8 = g->ecx;
    t9 = g->edx;
    g->edx = t9;
    g->esp = sp0 - 4u;
    t10 = cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x25u, t7, t5, in_ebx, in_edi);
    t11 = g->edx;
    g->edi = edi;
    g->edx = t11;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x1011ae10u), rd32(self + 8u), 1, self + 0x25u);
    t13 = g->edx;
    g->edi = in_edi;
    g->edx = t13;
    return t12;
L_101a6de2: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, 0u, 2u);
    t15 = g->edx;
    g->edi = edi;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x1011ae10u), rd32(self + 8u), 1, 0u);
    t17 = g->edx;
    eax = t16;
    edx = t17;
L_101a6dfb: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6d60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a6d60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
