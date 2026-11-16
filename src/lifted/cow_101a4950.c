/* f_0x101a4950 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101a4950(Guest* g)
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
        goto L_101a4a48;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)(rd8(rd32(self + 8u) + 0x4cu) - 1u);
    loc_4 = (self & 0xffffff00u) | (uint8_t)(rd8(rd32(self + 8u) + 0x4cu) - 1u);
    t1 = rd32(COW_IMG(0x101a4a5cu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x101a4977u: goto L_101a4977;
    case 0x101a49a4u: goto L_101a49a4;
    case 0x101a49ccu: goto L_101a49cc;
    case 0x101a4a06u: goto L_101a4a06;
    case 0x101a4a19u: goto L_101a4a19;
    case 0x101a4a48u: goto L_101a4a48;
    default: rt_fatal(g, COW_IMG(0x101a4970u), "switch");
    }
    return 0;
L_101a4977: ;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x101a45c0u), eax, rd32(self + 0x24u), in_edx, 0, 1, loc_4);
    g->edx = (uint32_t)(int8_t)ebx;
    g->esp = sp0 - 0x10u;
    t24 = cow_thiscall(g, COW_IMG(0x101a1c30u), rd32(self + 0x20u), 1, (uint32_t)(int8_t)ebx);
    t25 = g->edx;
    g->edx = t25;
    g->esp = sp0 - 0xcu;
    t26 = cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, t24, 2u);
    t27 = g->edx;
    g->edx = t27;
    return t26;
L_101a49a4: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t21 = cow_stdcall(g, COW_IMG(0x101a4590u), 0);
    t22 = g->edx;
    t23 = rd32(COW_IMG(0x1057847cu));
    wr32(sp0 + 8u, 2u);
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->edx = t22;
    return cow_tailcall(g, COW_IMG(0x10150cc0u), t21, t23, t22);
L_101a49cc: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x101a2a70u), rd32(self + 0x20u), 1, 2u);
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x101a47d0u), rd32(COW_IMG(0x106627acu)), 0);
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x101a4e80u), rd32(COW_IMG(0x106627b0u)), 0);
    t17 = g->edx;
    g->edx = t17;
    cow_thiscall(g, COW_IMG(0x101a47e0u), self, 0);
    t18 = g->edx;
    g->edx = t18;
    t19 = cow_call_regs(g, COW_IMG(0x101a4540u), loc_4, rd32(self + 0x24u), g->edx, 0, 1, loc_4);
    t20 = g->edx;
    g->edx = t20;
    return t19;
L_101a4a06: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_call_regs(g, COW_IMG(0x101a4540u), eax, rd32(self + 0x24u), g->edx, 0, 1, loc_4);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_101a4a19: ;
    t2 = rd32(COW_IMG(0x106627b8u));
    wr8(t2 + 0x1cu, 1u);
    wr32(t2 + 0x18u, (uint32_t)(int8_t)ebx);
    t3 = rd32(rd32(COW_IMG(0x106627b8u)) + 8u);
    g->eax = rd32(COW_IMG(0x106627b8u));
    t4 = rd32(COW_IMG(0x106627b8u));
    g->esp = sp0 - 0xcu;
    t5 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), (uint32_t)(int8_t)ebx, 2, t3, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10037e90u), t6, 0);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_101a4a48: ;
    g->esp = sp0 - 0xcu;
    t28 = cow_call_regs(g, COW_IMG(0x101a4480u), eax, rd32(self + 0x24u), loc_4, 0, 1, loc_4);
    t29 = g->edx;
    g->edx = t29;
    return t28;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a4950(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a4950(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
