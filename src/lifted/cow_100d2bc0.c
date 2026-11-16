/* f_0x100d2bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100d2bc0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
    t2 = g->edx;
    if (t1 == 2u)
    {
        eax = t1;
        goto L_100d2d65;
    }
    edx = t2;
    g->esp = sp0 - 0x18u;
    t3 = cow_fastcall(g, COW_IMG(0x10084420u), self, edx, 0);
    t4 = g->edx;
    t5 = arg1 + rd16(COW_IMG(0x1035f5acu) + t3 * 2u);
    wr32(sp0 - 0x1cu, t5);
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->edx = t4;
    t6 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, t5);
    t7 = g->edx;
    wr32(sp0 - 8u, rd32(t6));
    if (rd32(t6) == 0u)
    {
        eax = rd32(t6);
        ebp = t3;
    }
    else
    {
        eax = rd32(t6);
        edx = t7;
        ebp = t3;
        edi = t5;
        loc_8 = rd32(t6);
        wr32(sp0 - 0x1cu, 9u);
        wr32(sp0 - 0x20u, edi);
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 1u, edi, 9u);
        t8 = g->edx;
        g->edx = t8;
        t9 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 8u, 0);
        t10 = g->ecx;
        t11 = g->edx;
        if ((uint8_t)t9 == 0u)
        {
            ecx = t10;
            edx = t11;
            wr32(sp0 - 0x1cu, 0x14u);
            g->esp = sp0 - 0x10u;
            t15 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
            t16 = g->edx;
            if (t15 == 0u)
            {
                eax = t15;
                edx = t16;
                edi = 0u;
            }
            else
            {
                eax = t15;
                edx = t16;
                edi = t15;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t17 = cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
                t18 = g->edx;
                if (self == 0u)
                {
                    eax = t17;
                    edx = t18;
                    ebx = edi + 4u;
                    wr32(edi, rd32(COW_IMG(0x1048a34cu)));
                }
                else
                {
                    edx = t18;
                    ebx = edi + 4u;
                    t19 = rd32(self + 0x9ecu);
                    wr32(edi, t19);
                    eax = t19;
                }
                wr32(sp0 - 0x1cu, self);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t20 = cow_thiscall(g, COW_IMG(0x100814f0u), ebx, 1, self);
                t21 = g->edx;
                wr32(edi + 0x10u, 1u);
                eax = t20;
                edx = t21;
            }
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, self);
            wr32(sp0 - 0x24u, edi);
            wr32(sp0 - 0x28u, COW_IMG(0x100d1400u));
            g->eax = eax;
            g->esp = sp0 - 0x18u;
            t22 = cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 8u, 4, COW_IMG(0x100d1400u), edi, self, 0u);
            eax = t22;
        }
        else
        {
            eax = t9;
            t12 = rd32(self + 0x9ecu);
            wr32(sp0 - 0x1cu, t12);
            t13 = rd32(sp0 - 8u);
            wr32(sp0 - 0x20u, t13);
            g->eax = eax;
            g->esp = sp0 - 0x18u;
            t14 = cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t13, t12);
            eax = t14;
        }
    }
    g->eax = eax;
    g->edx = rd32(self);
    t23 = rd32(self);
    g->esp = sp0 - 0x18u;
    t24 = cow_thiscall(g, rd32(t23 + 0x3d8u), self, 0);
    t25 = g->ecx;
    t26 = g->edx;
    if ((int8_t)rd8(t24 + 9u) <= 0)
    {
        eax = t24;
        goto L_100d2d65;
    }
    eax = t24;
    edx = t26;
    if (rd8(self + 0x881u) != 1u)
    {
        edi = rd16(COW_IMG(0x1035f5c2u) + ebp * 4u);
    }
    else
    {
        edi = rd16(COW_IMG(0x1035f5c0u) + ebp * 4u);
    }
    wr32(sp0 - 0x1cu, arg1 + edi);
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t27 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 + 4u, arg1 + edi);
    t28 = g->edx;
    wr32(sp0 - 8u, rd32(t27));
    if (rd32(t27) == 0u)
    {
        eax = rd32(t27);
        goto L_100d2d65;
    }
    eax = rd32(t27);
    edx = t28;
    edi = arg1 + edi;
    loc_8 = rd32(t27);
    wr32(sp0 - 0x1cu, 9u);
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, 2u);
    wr32(sp0 - 0x28u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 2u, edi, 9u);
    t29 = g->edx;
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 8u, 0);
    t31 = g->ecx;
    t32 = g->edx;
    if ((uint8_t)t30 == 0u)
    {
        ecx = t31;
        edx = t32;
        goto L_100d2d1e;
    }
    eax = t30;
    t33 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x1cu, t33);
    t34 = rd32(sp0 - 8u);
    wr32(sp0 - 0x20u, t34);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t35 = cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t34, t33);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return t35;
L_100d2d1e: ;
    wr32(sp0 - 0x1cu, 0x14u);
    g->esp = sp0 - 0x10u;
    t36 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t37 = g->edx;
    if (t36 == 0u)
    {
        eax = t36;
        edx = t37;
        edi = 0u;
    }
    else
    {
        eax = t36;
        edx = t37;
        edi = t36;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
        t38 = g->edx;
        wr32(sp0 - 0x1cu, self);
        t39 = rd32(self + 0x9ecu);
        wr32(edi, t39);
        g->eax = t39;
        g->edx = t38;
        t40 = cow_thiscall(g, COW_IMG(0x100814f0u), edi + 4u, 1, self);
        t41 = g->edx;
        wr32(edi + 0x10u, 2u);
        eax = t40;
        edx = t41;
    }
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, self);
    wr32(sp0 - 0x24u, edi);
    wr32(sp0 - 0x28u, COW_IMG(0x100d1400u));
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t42 = cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 8u, 4, COW_IMG(0x100d1400u), edi, self, 0u);
    eax = t42;
L_100d2d65: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d2bc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d2bc0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
