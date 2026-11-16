/* f_0x10206110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10206110(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 0xbu)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        edx = in_edx;
        goto L_1020619f;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    t1 = rd32(COW_IMG(0x102061a4u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10206126u: goto L_10206126;
    case 0x1020613cu: goto L_1020613c;
    case 0x10206145u: goto L_10206145;
    case 0x1020614du: goto L_1020614d;
    case 0x10206156u: goto L_10206156;
    case 0x1020615fu: goto L_1020615f;
    case 0x10206167u: goto L_10206167;
    case 0x1020616fu: goto L_1020616f;
    case 0x10206177u: goto L_10206177;
    case 0x10206180u: goto L_10206180;
    case 0x10206189u: goto L_10206189;
    case 0x1020619au: goto L_1020619a;
    default: rt_fatal(g, COW_IMG(0x1020611fu), "switch");
    }
    return 0;
L_10206126: ;
    if (rd32(self + 0x18u) != 1u) goto L_10206134;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t13 = cow_stdcall(g, COW_IMG(0x10204f70u), 0);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_10206134: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t15 = cow_stdcall(g, COW_IMG(0x10204c60u), 0);
    t16 = g->edx;
    g->edx = t16;
    return t15;
L_1020613c: ;
    wr32(sp0 + 4u, self);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10204d50u), eax, self, in_edx);
L_10206145: ;
    g->edx = in_edx;
    g->esp = sp0;
    t11 = cow_call_regs(g, COW_IMG(0x10205280u), eax, g->ecx, g->edx, 1, 0);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_1020614d: ;
    wr32(sp0 + 4u, self);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10205040u), eax, self, in_edx);
L_10206156: ;
    wr32(sp0 + 4u, self);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10204fe0u), eax, self, in_edx);
L_1020615f: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t9 = cow_stdcall(g, COW_IMG(0x10205010u), 0);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_10206167: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t7 = cow_stdcall(g, COW_IMG(0x10205260u), 0);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_1020616f: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t5 = cow_stdcall(g, COW_IMG(0x10204e50u), 0);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_10206177: ;
    wr32(sp0 + 4u, self);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10205100u), eax, self, in_edx);
L_10206180: ;
    wr32(sp0 + 4u, self);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x102051d0u), eax, self, in_edx);
L_10206189: ;
    t4 = (eax & 0xffffff00u) | rd8(self + 0x2cu) == 0u;
    wr32(sp0 + 4u, t4);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10204ee0u), t4, self, in_edx);
L_1020619a: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_stdcall(g, COW_IMG(0x10204ed0u), 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_1020619f: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10206110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10206110(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
