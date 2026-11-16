/* f_0x101a5010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101a5010(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
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

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 7u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        loc_4 = (self & 0xffffff00u) | (uint8_t)(rd8(rd32(self + 8u) + 0x4cu) - 1u);
        goto L_101a510e;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)(rd8(rd32(self + 8u) + 0x4cu) - 1u);
    loc_4 = (self & 0xffffff00u) | (uint8_t)(rd8(rd32(self + 8u) + 0x4cu) - 1u);
    t1 = rd32(COW_IMG(0x101a5124u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x101a5037u: goto L_101a5037;
    case 0x101a5067u: goto L_101a5067;
    case 0x101a508fu: goto L_101a508f;
    case 0x101a50a2u: goto L_101a50a2;
    case 0x101a50dcu: goto L_101a50dc;
    case 0x101a510eu: goto L_101a510e;
    default: rt_fatal(g, COW_IMG(0x101a5030u), "switch");
    }
    return 0;
L_101a5037: ;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x101a45c0u), eax, rd32(self + 0x24u), in_edx, 0, 1, loc_4);
    t26 = (uint32_t)(int8_t)ebx + 0xau;
    g->edx = t26;
    g->esp = sp0 - 0x10u;
    t27 = cow_thiscall(g, COW_IMG(0x101a1c30u), rd32(self + 0x20u), 1, t26);
    t28 = g->edx;
    g->edx = t28;
    g->esp = sp0 - 0xcu;
    t29 = cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, t27, 2u);
    t30 = g->edx;
    g->edx = t30;
    return t29;
L_101a5067: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t23 = cow_stdcall(g, COW_IMG(0x101a4590u), 0);
    t24 = g->edx;
    t25 = rd32(COW_IMG(0x1057847cu));
    wr32(sp0 + 8u, 2u);
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->edx = t24;
    return cow_tailcall(g, COW_IMG(0x10150cc0u), t23, t25, t24);
L_101a508f: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t21 = cow_call_regs(g, COW_IMG(0x101a4540u), loc_4, rd32(self + 0x24u), g->edx, 0, 1, loc_4);
    t22 = g->edx;
    g->edx = t22;
    return t21;
L_101a50a2: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, COW_IMG(0x101a2a50u), rd32(self + 0x20u), 1, 2u);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x101a47d0u), rd32(COW_IMG(0x106627acu)), 0);
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x101a4e80u), rd32(COW_IMG(0x106627b0u)), 0);
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x101a4e90u), self, 0);
    t18 = g->edx;
    g->edx = t18;
    t19 = cow_call_regs(g, COW_IMG(0x101a4540u), t17, rd32(self + 0x24u), g->edx, 0, 1, loc_4);
    t20 = g->edx;
    g->edx = t20;
    return t19;
L_101a50dc: ;
    t2 = rd32(COW_IMG(0x106627b8u));
    wr8(t2 + 0x1cu, 2u);
    t3 = (uint32_t)(int8_t)ebx + 0xau;
    wr32(t2 + 0x18u, t3);
    t4 = rd32(rd32(COW_IMG(0x106627b8u)) + 8u);
    g->eax = rd32(COW_IMG(0x106627b8u));
    t5 = rd32(COW_IMG(0x106627b8u));
    g->esp = sp0 - 0xcu;
    t6 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t3, 2, t4, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x10037e90u), t7, 0);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_101a510e: ;
    g->esp = sp0 - 0xcu;
    t31 = cow_call_regs(g, COW_IMG(0x101a4480u), eax, rd32(self + 0x24u), loc_4, 0, 1, loc_4);
    t32 = g->edx;
    g->edx = t32;
    return t31;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a5010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a5010(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
