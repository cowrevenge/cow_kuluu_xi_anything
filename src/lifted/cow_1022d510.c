/* f_0x1022d510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1022d510(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd8(COW_IMG(0x1033c4a4u) + (uint8_t)((rd8(arg1 + 0x1cu) == 1u) + (uint8_t)(rd8(arg1 + 0x10u) * 2u)));
    if (t1 > 7u)
    {
        esi = 0u;
        goto L_1022d5dc;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg1 + 0x1cu);
    ecx = t1;
    edx = t1;
    t2 = rd32(COW_IMG(0x1022d5e4u) + ecx * 4u);
    switch (t2 - RD)
    {
    case 0x1022d547u: goto L_1022d547;
    case 0x1022d552u: goto L_1022d552;
    case 0x1022d55du: goto L_1022d55d;
    case 0x1022d568u: goto L_1022d568;
    case 0x1022d573u: goto L_1022d573;
    case 0x1022d5a5u: goto L_1022d5a5;
    case 0x1022d5c5u: goto L_1022d5c5;
    case 0x1022d5d7u: goto L_1022d5d7;
    default: rt_fatal(g, COW_IMG(0x1022d540u), "switch");
    }
    return;
L_1022d547: ;
    wr32(arg1 + 8u, 1u);
    return;
L_1022d552: ;
    wr32(arg1 + 8u, 2u);
    return;
L_1022d55d: ;
    wr32(arg1 + 8u, 3u);
    return;
L_1022d568: ;
    wr32(arg1 + 8u, 9u);
    return;
L_1022d573: ;
    if (rd32(arg1 + 0x14u) == 0u)
    {
        esi = 0u;
        goto L_1022d5dc;
    }
    eax = rd32(arg1 + 0x14u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x10086fd0u), 1, eax);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint16_t)t4 == 0u)
    {
        esi = 0u;
        goto L_1022d5dc;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) == 0u)
    {
        esi = 0u;
        goto L_1022d5dc;
    }
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_call_regs(g, COW_IMG(0x101cc220u), eax, g->ecx, g->edx, 1, 3, eax, in_edi, in_esi);
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        edx = t8;
        goto L_1022d5b0;
    }
L_1022d5a5: ;
    wr32(arg1 + 8u, 7u);
    return;
L_1022d5b0: ;
    t9 = (rd8(arg1 + 0x1cu) != 0u) + 2u;
    wr32(arg1 + 8u, t9);
    return;
L_1022d5c5: ;
    t3 = ((uint8_t)eax != 0u) + 5u;
    wr32(arg1 + 8u, t3);
    return;
L_1022d5d7: ;
    esi = 8u;
L_1022d5dc: ;
    wr32(arg1 + 8u, esi);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022d510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022d510(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
