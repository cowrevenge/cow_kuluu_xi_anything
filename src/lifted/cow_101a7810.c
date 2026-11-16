/* f_0x101a7810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101a7810(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)rd32(sp0 + 8u) >= 18)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101a7882;
    }
    edi = rd32(sp0 + 8u);
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, edi);
    t3 = g->edx;
    wr8(sp0 + 8u, (uint8_t)t2);
    t4 = (uint8_t)rd32(sp0 + 8u);
    t5 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t4);
    if ((int32_t)(uint8_t)t5 <= 0)
    {
        eax = t2;
        edx = t3;
        goto L_101a7882;
    }
    eax = t2;
    ecx = t4;
    edx = t3;
    ebx = 0u;
    esi = edi * 0xdecu + t1 + 0x9894u;
L_101a7855: ;
    if (rd16(esi) != (uint16_t)arg1)
    {
        eax = (eax & 0xffff0000u) | rd16(esi);
        goto L_101a787a;
    }
    eax = (eax & 0xffff0000u) | rd16(esi);
    t6 = (eax & 0xffffff00u) | rd8(esi + 2u);
    g->esi = esi;
    g->ecx = ecx;
    g->esp = sp0;
    t7 = cow_call_regs(g, COW_IMG(0x101a77c0u), g->eax, g->ecx, arg4, 1, 7, edi, t6, eax, arg4, in_edi, in_esi, in_ebx);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        goto L_101a7888;
    }
    eax = t7;
    edx = t9;
    ecx = rd32(sp0 + 8u);
L_101a787a: ;
    if ((int32_t)(ebx + 1u) < (int32_t)ecx)
    {
        ebx = ebx + 1u;
        esi = esi + 0x2cu;
        goto L_101a7855;
    }
L_101a7882: ;
    g->esi = in_esi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101a7888: ;
    wr8(arg3, rd8(esi + 2u));
    g->esi = in_esi;
    g->edx = arg3;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a7810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a7810(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
