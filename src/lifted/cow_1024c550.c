/* f_0x1024c550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1024c550(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    t1 = rd32(self + 0x74u);
    wr32(self + 0x14u, 0u);
    wr32(self + 0x18u, 0xffffffffu);
    wr32(self + 0x1cu, 1u);
    wr32(self + 0x20u, 0u);
    if (t1 != 0u)
    {
        eax = t1;
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = t1;
        wr32(sp0 - 0x10u, 1u);
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t2 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 1u);
        t3 = g->edx;
        wr32(sp0 - 0x10u, t2);
        wr32(sp0 - 0x14u, sp0 - 4u);
        g->eax = sp0 - 4u;
        g->edx = t3;
        t4 = cow_thiscall(g, COW_IMG(0x100731b0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 - 4u, t2);
        t5 = g->edx;
        t6 = rd32(t4);
        wr32(self + 0x74u, t6);
        g->edx = t5;
        t7 = rd32(t6);
        t8 = cow_call_regs(g, COW_IMG(0x10071e90u), t6, t7, g->edx, 1, 0);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    wr32(sp0 - 0x10u, 6u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t11 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 6u);
    wr32(self + 0x24u, 0x10u);
    wr32(self + 0x28u, 0u);
    wr32(self + 0x2cu, 0u);
    wr32(self + 0x30u, 0u);
    eax = t11;
    ecx = 0u;
L_1024c5b7: ;
    if (rd32(ecx * 4u + rd32(eax)) == 0u)
    {
        edx = rd32(ecx * 4u + rd32(eax));
        wr32(ecx * 4u + self + 0x34u, 0u);
        wr32(self + 0x24u, ecx);
        ecx = 0x10u;
    }
    else
    {
        edx = rd32(ecx * 4u + rd32(eax));
        wr32(ecx * 4u + self + 0x34u, edx);
    }
    if ((int32_t)(ecx + 1u) < 16)
    {
        ecx = ecx + 1u;
        goto L_1024c5b7;
    }
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 1u);
    t12 = rd32(self + 8u);
    wr8(t12 + 0x69u, 0u);
    wr32(sp0 - 0x1cu, COW_IMG(0x10388cc8u));
    wr8(rd32(self + 8u) + 0x62u, 0u);
    g->eax = t12;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10388cc8u), 1u, 0u);
    t14 = g->ecx;
    t15 = rd32(COW_IMG(0x106643a8u));
    wr8(t15 + 0x40u, 1u);
    g->ecx = t14;
    g->edx = t15;
    t16 = cow_stdcall(g, COW_IMG(0x100fc4e0u), 0);
    t17 = g->ecx;
    t18 = g->edx;
    g->edx = t18;
    t19 = cow_stdcall(g, COW_IMG(0x100f0fa0u), 0);
    t20 = g->edx;
    if (t19 == 0u)
    {
        edx = t20;
    }
    else
    {
        eax = t19;
        edx = t20;
        edi = t16;
        if (edi != 0u)
        {
            wr32(sp0 - 0x14u, in_ebp);
            t21 = rd32(COW_IMG(0x106643a8u));
            t22 = rd16(eax + 0x3cu);
            wr16(t21 + 0x44u, rd16(eax + 0x38u));
            wr32(t21 + 0x48u, edi);
            wr16(t21 + 0x46u, (uint16_t)t22);
            wr8(t21 + 0x42u, 0u);
            wr8(t21 + 0x41u, 0u);
        }
        t23 = rd8(eax + 4u);
        wr32(COW_IMG(0x10669138u), t23);
        t24 = rd8(eax + 7u);
        t25 = rd32(COW_IMG(0x105783ecu));
        wr32(COW_IMG(0x1066913cu), t24);
        if (t25 == 0u)
        {
            edx = t24;
        }
        else
        {
            eax = t25;
            ecx = t23;
            edx = t24;
            wr8(eax + 0x18u, 1u);
            wr8(eax + 0x15u, (uint8_t)ecx);
            wr8(eax + 0x16u, (uint8_t)edx);
        }
    }
    t26 = rd32(COW_IMG(0x10578478u));
    t27 = rd32(sp0 - 0x10u);
    wr8(t26 + 0x65u, 1u);
    wr32(t26 + 0x68u, 0x80808080u);
    if (rd32(self + 0x1cu) == 0u)
    {
        eax = t26;
        edi = t27;
    }
    else
    {
        eax = t26;
        edi = t27;
        if (rd32(COW_IMG(0x105783ecu)) != 0u)
        {
            wr32(sp0 - 0x10u, 0u);
            wr32(sp0 - 0x14u, 1u);
            wr32(sp0 - 0x18u, COW_IMG(0x103718d8u));
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103718d8u), 1u, 0u);
            t28 = g->edx;
            wr32(sp0 - 0x10u, 1u);
            g->eax = rd32(rd32(COW_IMG(0x105783ecu)));
            g->edx = t28;
            t29 = rd32(rd32(COW_IMG(0x105783ecu)));
            t30 = cow_thiscall(g, rd32(t29 + 0x44u), rd32(COW_IMG(0x105783ecu)), 1, 1u);
            t31 = g->edx;
            eax = t30;
            edx = t31;
        }
    }
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024c550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024c550(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
