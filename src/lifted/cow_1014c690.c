/* f_0x1014c690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1014c690(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if ((rd32(rd32(arg2 + 0x14bcu)) >> 8u & 0x20u) == 0u) goto L_1014c6af;
    return 0x80404040u;
L_1014c6af: ;
    wr32(sp0 - 0xcu, 0u);
    t1 = (in_edx & 0xffffff00u) | rd8(arg1 + 2u);
    wr32(sp0 - 0x10u, t1);
    g->esp = sp0 - 8u;
    t2 = cow_fastcall(g, COW_IMG(0x10131f10u), rd32(COW_IMG(0x105781a8u)), t1, 2, t1, 0u);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        edx = t3;
        goto L_1014c6d2;
    }
    edx = t3;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = edx;
    return 0x80404040u;
L_1014c6d2: ;
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, sp0 + 4u);
    wr32(sp0 - 0x14u, sp0 + 8u);
    wr32(sp0 - 0x18u, 0u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 + 8u, 4, 0u, sp0 + 8u, sp0 + 4u, 1u);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        edx = t5;
        goto L_1014c711;
    }
    eax = t4;
    edx = t5;
    if ((uint8_t)arg2 != rd8(arg1 + 2u))
    {
        edx = (edx & 0xffffff00u) | (uint8_t)arg2;
        goto L_1014c711;
    }
    edx = (edx & 0xffffff00u) | (uint8_t)arg2;
    g->eax = rd32(self);
    g->edx = edx;
    t6 = rd32(self);
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, rd32(t6 + 0x54u), self, 0);
    t8 = g->edx;
    if ((uint8_t)arg1 == t7)
    {
        eax = 0x80404040u;
        edx = t8;
        goto L_1014c716;
    }
    edx = t8;
L_1014c711: ;
    eax = 0x80808080u;
L_1014c716: ;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014c690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014c690(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
