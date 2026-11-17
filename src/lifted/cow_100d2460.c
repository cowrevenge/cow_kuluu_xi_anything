/* f_0x100d2460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100d2460(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
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
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    t1 = rd32(self + 0x8a0u) + 0x7f68u;
    wr32(sp0 - 0x18u, t1);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->edx = in_edx;
    t2 = rd32(self + 0x8a0u);
    g->esp = sp0 - 0x14u;
    t3 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, t1);
    t4 = g->edx;
    wr32(sp0 - 8u, rd32(t3));
    if (rd32(t3) == 0u)
    {
        eax = rd32(t3);
        ebx = t2;
        loc_c = in_ebx;
        loc_10 = in_esi;
        loc_14 = in_edi;
    }
    else
    {
        eax = rd32(t3);
        edx = t4;
        ebx = t2;
        edi = t1;
        loc_8 = rd32(t3);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, edi);
        wr32(sp0 - 0x20u, 1u);
        wr32(sp0 - 0x24u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t5 = cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 1u, edi, 0u);
        t6 = g->edx;
        g->edx = t6;
        t7 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 8u, 0);
        t8 = g->ecx;
        t9 = g->edx;
        if ((uint8_t)t7 == 0u)
        {
            eax = t7;
            ecx = t8;
            edx = t9;
            wr32(sp0 - 0x18u, 0x14u);
            g->eax = eax;
            g->esp = sp0 - 0xcu;
            t13 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
            t14 = g->edx;
            if (t13 == 0u)
            {
                eax = t13;
                edx = t14;
                edi = 0u;
            }
            else
            {
                eax = t13;
                edx = t14;
                edi = t13;
                wr32(sp0 - 0x18u, in_ebp);
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
                t15 = g->edx;
                wr32(sp0 - 0x1cu, self);
                t16 = rd32(self + 0x9ecu);
                wr32(edi, t16);
                g->eax = t16;
                g->edx = t15;
                t17 = cow_thiscall(g, COW_IMG(0x100814f0u), edi + 4u, 1, self);
                t18 = g->edx;
                wr32(edi + 0x10u, 1u);
                eax = t17;
                edx = t18;
            }
            wr32(sp0 - 0x18u, 0u);
            wr32(sp0 - 0x1cu, self);
            wr32(sp0 - 0x20u, edi);
            wr32(sp0 - 0x24u, COW_IMG(0x100d1400u));
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t19 = cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 8u, 4, COW_IMG(0x100d1400u), edi, self, 0u);
            eax = t19;
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
        }
        else
        {
            eax = t7;
            t10 = rd32(self + 0x9ecu);
            wr32(sp0 - 0x18u, t10);
            t11 = rd32(sp0 - 8u);
            wr32(sp0 - 0x1cu, t11);
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t12 = cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t11, t10);
            eax = t12;
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
        }
    }
    g->eax = eax;
    g->edx = rd32(self);
    t20 = rd32(self);
    g->esp = sp0 - 0x14u;
    t21 = cow_thiscall(g, rd32(t20 + 0x3d8u), self, 0);
    t22 = g->ecx;
    t23 = g->edx;
    if ((int8_t)rd8(t21 + 9u) <= 0) goto L_100d25d0;
    edx = t23;
    g->eax = rd32(self);
    g->edx = edx;
    t24 = rd32(self);
    g->esp = sp0 - 0x14u;
    t25 = cow_thiscall(g, rd32(t24 + 0x3d8u), self, 0);
    t26 = g->ecx;
    t27 = g->edx;
    if (rd8(t25 + 9u) == 1u)
    {
        eax = t25;
        edx = t27;
        edi = ebx + 0x7f88u;
    }
    else
    {
        eax = t25;
        edx = t27;
        edi = ebx + 0x7fa8u;
    }
    wr32(sp0 - 0x18u, edi);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t28 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, edi);
    t29 = g->edx;
    wr32(sp0 - 8u, rd32(t28));
    if (rd32(t28) == 0u) goto L_100d25d0;
    eax = rd32(t28);
    edx = t29;
    loc_8 = rd32(t28);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, 2u);
    wr32(sp0 - 0x24u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t30 = cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 2u, edi, 0u);
    t31 = g->edx;
    g->edx = t31;
    t32 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 8u, 0);
    t33 = g->ecx;
    t34 = g->edx;
    if ((uint8_t)t32 == 0u)
    {
        eax = t32;
        ecx = t33;
        edx = t34;
        goto L_100d2589;
    }
    t35 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x18u, t35);
    t36 = rd32(sp0 - 8u);
    wr32(sp0 - 0x1cu, t36);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t36, t35);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return;
L_100d2589: ;
    wr32(sp0 - 0x18u, 0x14u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t37 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t38 = g->edx;
    if (t37 == 0u)
    {
        eax = t37;
        edx = t38;
        edi = 0u;
    }
    else
    {
        eax = t37;
        edx = t38;
        edi = t37;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t39 = cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
        t40 = g->edx;
        wr32(sp0 - 0x18u, self);
        t41 = rd32(self + 0x9ecu);
        wr32(edi, t41);
        g->edx = t40;
        t42 = cow_thiscall(g, COW_IMG(0x100814f0u), edi + 4u, 1, self);
        t43 = g->edx;
        wr32(edi + 0x10u, 2u);
        eax = t42;
        edx = t43;
    }
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, self);
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, COW_IMG(0x100d1400u));
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 8u, 4, COW_IMG(0x100d1400u), edi, self, 0u);
L_100d25d0: ;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d2460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d2460(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
