/* f_0x10067530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10067530(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 536u);

    wr32(sp0 - 0x204u, in_ebp);
    wr32(sp0 - 0x208u, in_esi);
    wr32(sp0 - 0x20cu, in_edi);
    wr32(sp0 - 0x210u, arg1);
    t1 = rd32(sp0 - 0x200u);
    wr8(arg2, 0u);
    g->ecx = self;
    g->esp = sp0 - 0x20cu;
    t2 = cow_call_regs(g, COW_IMG(0x100673d0u), g->eax, g->ecx, in_edx, 0, 1, arg1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0xffu)
    {
        eax = t2;
        edx = t4;
        esi = sp0 - 0x200u;
        goto L_100675a7;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    esi = sp0 - 0x200u;
L_1006755f: ;
    if ((uint8_t)eax == 0xau) goto L_1006756b;
    if ((uint8_t)eax == 0x20u) goto L_1006756b;
    if ((uint8_t)eax != 9u) goto L_10067573;
L_1006756b: ;
    if (rd8(sp0 - 0x200u) == 0u) goto L_1006759b;
L_10067573: ;
    wr8(esi, (uint8_t)eax);
    if ((uint8_t)eax == 0xau) goto L_1006757d;
    if ((uint8_t)eax != 9u) goto L_1006758b;
L_1006757d: ;
    if (rd8(sp0 - 0x200u) != 0x23u) goto L_1006759b;
    if ((uint8_t)eax == 0xau) goto L_100675a7;
    wr8(esi, 0x20u);
L_1006758b: ;
    if ((uint8_t)eax == 0x3bu) goto L_100675a7;
    if ((uint8_t)eax == 0x7bu)
    {
        esi = esi + 1u;
        goto L_100675a7;
    }
    esi = esi + 1u;
    if (rd8(sp0 - 0x200u) == 0x7du) goto L_100675a7;
L_1006759b: ;
    wr32(sp0 - 0x210u, arg1);
    g->ecx = self;
    g->esp = sp0 - 0x20cu;
    t5 = cow_call_regs(g, COW_IMG(0x100673d0u), g->eax, g->ecx, edx, 0, 1, arg1);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 != 0xffu)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_1006755f;
    }
    eax = t5;
    edx = t7;
L_100675a7: ;
    wr8(esi, 0u);
    if (rd8(sp0 - 0x200u) != 0xau)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x200u);
        goto L_100675ce;
    }
    wr32(sp0 - 0x210u, arg2);
    wr32(sp0 - 0x214u, arg1);
    g->esp = sp0 - 0x20cu;
    t8 = cow_fastcall(g, COW_IMG(0x10067530u), self, edx, 2, arg1, arg2);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_100675ce: ;
    if ((uint8_t)eax != 0u) goto L_100675e0;
    g->edx = edx;
    return 0u;
L_100675e0: ;
    if ((uint8_t)eax != 0x23u) goto L_1006760f;
    eax = sp0 - 0x200u;
    ecx = sp0 - 0x200u;
L_100675f7: ;
    t10 = rd8(eax);
    wr8(arg2 + eax - sp0 + 0x200u, (uint8_t)t10);
    if ((uint8_t)t10 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t10;
        goto L_100675f7;
    }
    g->edx = arg2 - (sp0 - 0x200u);
    return arg2;
L_1006760f: ;
    wr32(sp0 - 0x210u, sp0 - 0x200u);
    wr32(sp0 - 0x214u, arg2);
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x20cu;
    cow_call_regs(g, COW_IMG(0x10067630u), eax, self, g->edx, 0, 2, arg2, sp0 - 0x200u);
    t11 = g->edx;
    g->edx = t11;
    return arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10067530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10067530(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
