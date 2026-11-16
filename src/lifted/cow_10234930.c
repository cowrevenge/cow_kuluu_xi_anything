/* f_0x10234930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10234930(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;

    if ((int32_t)rd32(self + 0x10u) < (int32_t)rd32(self + 0xcu))
    {
        loc_4 = (self & 0xffffff00u) | rd8(self + 0x28u);
        goto L_10234a02;
    }
    eax = rd32(self + 0x10u);
    ecx = rd32(self + 0xcu);
    ebx = (in_ebx & 0xffffff00u) | rd8(self + 0x28u);
    loc_4 = (self & 0xffffff00u) | rd8(self + 0x28u);
    if (rd8(self + 0x29u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x29u);
        goto L_102349e8;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x29u);
    g->ebx = ebx;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 1u, 0xffffffffu, in_esi, in_ebx, loc_4);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10234978;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if ((uint8_t)ebx != 3u) goto L_10234978;
    wr8(self + 0x29u, (uint8_t)eax);
    g->ebx = in_ebx;
    return;
L_10234978: ;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 0u, 0xffffffffu, in_esi, in_ebx, loc_4);
    t5 = g->edx;
    if ((uint8_t)t4 != 1u) goto L_10234a06;
    edx = t5;
    if ((uint8_t)loc_4 - 1u > 4u) goto L_10234a06;
    eax = (uint8_t)loc_4 - 1u;
    t6 = rd32(COW_IMG(0x10234a0cu) + eax * 4u);
    switch (t6 - RD)
    {
    case 0x102349a8u: goto L_102349a8;
    case 0x102349b8u: goto L_102349b8;
    case 0x102349c8u: goto L_102349c8;
    case 0x102349d8u: goto L_102349d8;
    case 0x10234a06u: goto L_10234a06;
    default: rt_fatal(g, COW_IMG(0x102349a1u), "switch");
    }
    return;
L_102349a8: ;
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x16u);
    g->ebx = in_ebx;
    return;
L_102349b8: ;
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x17u);
    g->ebx = in_ebx;
    return;
L_102349c8: ;
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x18u);
    g->ebx = in_ebx;
    return;
L_102349d8: ;
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x19u);
    g->ebx = in_ebx;
    return;
L_102349e8: ;
    g->ebx = ebx;
    g->esp = sp0;
    t7 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 5u, 0xffffffffu, in_esi, in_ebx, loc_4);
    if ((uint8_t)t7 != 1u) goto L_10234a06;
    if ((uint8_t)ebx != 3u) goto L_10234a06;
L_10234a02: ;
    wr8(self + 0x29u, 0u);
L_10234a06: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10234930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10234930(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
