/* f_0x1013f680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1013f680(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 4u) goto L_1013f6fd;
    if ((uint32_t)(int16_t)arg1 != 5u)
    {
        eax = (uint32_t)(int16_t)arg1 - 5u;
        edx = in_edx;
        goto L_1013f70d;
    }
    if ((uint32_t)(int16_t)arg2 - 1u > 7u) goto L_1013f6da;
    t1 = rd32(COW_IMG(0x1013f714u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1013f6a2u: goto L_1013f6a2;
    case 0x1013f6a9u: goto L_1013f6a9;
    case 0x1013f6b0u: goto L_1013f6b0;
    case 0x1013f6b7u: goto L_1013f6b7;
    case 0x1013f6beu: goto L_1013f6be;
    case 0x1013f6c5u: goto L_1013f6c5;
    case 0x1013f6ccu: goto L_1013f6cc;
    case 0x1013f6d3u: goto L_1013f6d3;
    default: rt_fatal(g, COW_IMG(0x1013f69bu), "switch");
    }
    return 0;
L_1013f6a2: ;
    eax = 1u;
L_1013f6dc: ;
    g->esi = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x1022b220u), 3, eax, 0u, 0u);
    t2 = g->edx;
    t3 = rd32(self + 8u);
    g->edx = t2;
    t4 = cow_call_regs(g, COW_IMG(0x1015e790u), t3, COW_IMG(0x10621838u), g->edx, 0, 2, t3, 1u);
    t5 = g->edx;
    g->esi = in_esi;
    g->edx = t5;
    return t4;
L_1013f6a9: ;
    eax = 2u;
    goto L_1013f6dc;
L_1013f6b0: ;
    eax = 3u;
    goto L_1013f6dc;
L_1013f6b7: ;
    eax = 4u;
    goto L_1013f6dc;
L_1013f6be: ;
    eax = 5u;
    goto L_1013f6dc;
L_1013f6c5: ;
    eax = 6u;
    goto L_1013f6dc;
L_1013f6cc: ;
    eax = 7u;
    goto L_1013f6dc;
L_1013f6d3: ;
    eax = 8u;
    goto L_1013f6dc;
L_1013f6da: ;
    eax = 0u;
    goto L_1013f6dc;
L_1013f6fd: ;
    t6 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x1015e790u), (uint32_t)(int16_t)arg1 - 4u, COW_IMG(0x10621838u), g->edx, 0, 2, t6, 1u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_1013f70d: ;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013f680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013f680(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
