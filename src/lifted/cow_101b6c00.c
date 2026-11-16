/* f_0x101b6c00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101b6c00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10124050u), COW_IMG(0x104e1c40u), 0);
    t2 = g->edx;
    wr32(self + 0xec30u, 0u);
    wr8(self + 0xf11du, 1u);
    g->edx = t2;
    t3 = cow_call_regs(g, COW_IMG(0x101b6e90u), t1, self, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        goto L_101b6ce6;
    }
    edx = t5;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x101b6ec0u), self, 0);
    t7 = g->edx;
    wr32(sp0 - 0x10u, t6);
    t8 = cow_fastcall(g, COW_IMG(0x101acc30u), self + 0x7e30u, t7, 1, t6);
    t9 = g->edx;
    if ((int32_t)t8 >= 0)
    {
        eax = t8;
        edx = t9;
        goto L_101b6c6f;
    }
    edx = t9;
    wr32(sp0 - 0x10u, 0u);
    g->eax = rd32(self);
    g->edx = edx;
    t10 = rd32(self);
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, rd32(t10 + 0x60u), self, 1, 0u);
    t12 = g->edx;
    g->edx = t12;
    cow_thiscall(g, COW_IMG(0x101abe50u), self + 0x7e30u, 0);
    t13 = g->edx;
    t14 = cow_thiscall(g, COW_IMG(0x101acf90u), self + 0x7e30u, 0);
    eax = t14;
    edx = rd32(self);
L_101b6c63: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t31 = cow_thiscall(g, rd32(edx + 0x70u), self, 0);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return 0xffffffffu;
L_101b6c6f: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t15 = cow_call_regs(g, COW_IMG(0x101abe40u), eax, self + 0x7e30u, g->edx, 1, 0);
    t16 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        eax = t15;
        goto L_101b6ce0;
    }
    edx = t16;
    wr32(sp0 - 0x10u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t17 = cow_thiscall(g, COW_IMG(0x101abe80u), self + 0x7e30u, 1, sp0 + 4u);
    t18 = g->ecx;
    t19 = g->edx;
    t20 = rd8(t17);
    wr8(self + 0xec2cu, (uint8_t)t20);
    t21 = rd8(t17 + 1u);
    wr8(self + 0xec2du, (uint8_t)t21);
    wr8(self + 0xec2eu, rd8(t17 + 2u));
    t22 = rd8(t17 + 3u);
    wr8(self + 0xec2fu, (uint8_t)t22);
    g->edx = ((t19 | t21) & 0xffffff00u) | t22;
    cow_thiscall(g, rd32(rd32(self) + 0x5cu), self, 0);
    t23 = g->edx;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, COW_IMG(0x103d3c84u));
    g->edx = t23;
    t24 = cow_thiscall(g, COW_IMG(0x101b6ee0u), self, 2, COW_IMG(0x103d3c84u), 0u);
    t25 = g->edx;
    if ((int32_t)t24 < 0) goto L_101b6d40;
    edx = t25;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, COW_IMG(0x10377cbcu));
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return 1u;
L_101b6ce0: ;
    edx = rd32(self);
L_101b6d34: ;
    wr32(sp0 - 0x10u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(edx + 0x60u), self, 1, 0u);
    t30 = g->edx;
    cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 0);
L_101b6d40: ;
    g->ebx = loc_4;
    g->esi = loc_8;
    g->edi = loc_c;
    return 1u;
L_101b6ce6: ;
    if (arg1 == 0u)
    {
        loc_4 = in_ebx;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_101b6d40;
    }
    if ((int32_t)arg2 <= 0)
    {
        loc_4 = in_ebx;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_101b6d40;
    }
    if (rd8(self + 0xf0ecu) != 0u) goto L_101b6d1b;
    if (rd32(self + 0xf10cu) == 0u) goto L_101b6d1b;
    eax = rd32(self + 0xf10cu);
    wr32(sp0 - 0x10u, arg2);
    t26 = (ecx & 0xffff0000u) | rd8(arg1);
    wr32(sp0 - 0x14u, t26);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t27 = cow_call_regs(g, COW_IMG(0x101b6d50u), eax, self, g->edx, 0, 2, t26, arg2);
    t28 = g->edx;
    if ((uint8_t)t27 == 0u)
    {
        loc_4 = in_ebx;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_101b6d40;
    }
    edx = t28;
L_101b6d1b: ;
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, arg1);
    g->esp = sp0 - 0xcu;
    t29 = cow_thiscall(g, COW_IMG(0x101abc50u), self + 0x7e30u, 2, arg1, arg2);
    if ((uint8_t)t29 == 0u)
    {
        eax = t29;
        edx = rd32(self);
        goto L_101b6c63;
    }
    eax = t29;
    edx = rd32(self);
    goto L_101b6d34;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b6c00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b6c00(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
