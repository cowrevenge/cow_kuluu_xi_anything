/* f_0x100d25e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100d25e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->esp = sp0 - 0x10u;
    t1 = cow_fastcall(g, COW_IMG(0x10084420u), self, in_edx, 0);
    t2 = g->edx;
    if ((int32_t)t1 >= 9)
    {
        loc_4 = self;
        loc_8 = in_ebp;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_100d27ea;
    }
    eax = t1;
    edx = t2;
    if (arg2 == 1u)
    {
        edx = (edx & 0xffffff00u) | rd8(self + 0x881u);
        if ((uint8_t)edx != 1u)
        {
            edi = arg1 + rd16(COW_IMG(0x1035f4f4u) + eax * 2u);
            ecx = arg1;
            esi = rd16(COW_IMG(0x1035f50au) + eax * 4u);
        }
        else
        {
            edi = arg1 + rd16(COW_IMG(0x1035f4f4u) + eax * 2u);
            ecx = arg1;
            esi = rd16(COW_IMG(0x1035f508u) + eax * 4u);
        }
    }
    else
    {
        edx = (edx & 0xffffff00u) | rd8(self + 0x881u);
        if (arg2 == 2u)
        {
            if ((uint8_t)edx != 1u)
            {
                edi = arg1 + rd32(COW_IMG(0x1035f52cu) + eax * 4u);
                ecx = arg1;
                esi = rd32(COW_IMG(0x1035f554u) + eax * 8u);
            }
            else
            {
                edi = arg1 + rd32(COW_IMG(0x1035f52cu) + eax * 4u);
                ecx = arg1;
                esi = rd32(COW_IMG(0x1035f550u) + eax * 8u);
            }
        }
        else
        {
            if ((int32_t)arg1 < 256)
            {
                if ((uint8_t)edx != 1u)
                {
                    edi = arg1 + rd16(COW_IMG(0x1035f4bcu) + eax * 2u);
                    ecx = arg1;
                    esi = rd16(COW_IMG(0x1035f4d2u) + eax * 4u);
                }
                else
                {
                    edi = arg1 + rd16(COW_IMG(0x1035f4bcu) + eax * 2u);
                    ecx = arg1;
                    esi = rd16(COW_IMG(0x1035f4d0u) + eax * 4u);
                }
            }
            else
            {
                if ((uint8_t)edx != 1u)
                {
                    edi = arg1 + rd16(COW_IMG(0x1035f484u) + eax * 2u) - 0x100u;
                    ecx = arg1 - 0x100u;
                    esi = rd16(COW_IMG(0x1035f49au) + eax * 4u);
                }
                else
                {
                    edi = arg1 + rd16(COW_IMG(0x1035f484u) + eax * 2u) - 0x100u;
                    ecx = arg1 - 0x100u;
                    esi = rd16(COW_IMG(0x1035f498u) + eax * 4u);
                }
            }
        }
    }
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 + 4u, edi);
    t4 = g->edx;
    wr32(sp0 - 4u, rd32(t3));
    if (rd32(t3) == 0u)
    {
        eax = rd32(t3);
        esi = ecx + esi;
        loc_4 = rd32(t3);
    }
    else
    {
        eax = rd32(t3);
        edx = t4;
        esi = ecx + esi;
        loc_4 = rd32(t3);
        wr32(sp0 - 0x14u, 6u);
        wr32(sp0 - 0x18u, edi);
        wr32(sp0 - 0x1cu, 1u);
        wr32(sp0 - 0x20u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t5 = cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 1u, edi, 6u);
        t6 = g->edx;
        g->edx = t6;
        t7 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 4u, 0);
        t8 = g->ecx;
        t9 = g->edx;
        if ((uint8_t)t7 == 0u)
        {
            eax = t7;
            ecx = t8;
            edx = t9;
            wr32(sp0 - 0x14u, 0x14u);
            g->eax = eax;
            g->esp = sp0 - 8u;
            t13 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
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
                wr32(sp0 - 0x14u, in_ebx);
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
                t15 = g->edx;
                wr32(sp0 - 0x18u, self);
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
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x18u, self);
            wr32(sp0 - 0x1cu, edi);
            wr32(sp0 - 0x20u, COW_IMG(0x100d1400u));
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t19 = cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 4u, 4, COW_IMG(0x100d1400u), edi, self, 0u);
            eax = t19;
            loc_4 = rd32(sp0 - 4u);
        }
        else
        {
            eax = t7;
            t10 = rd32(self + 0x9ecu);
            wr32(sp0 - 0x14u, t10);
            t11 = rd32(sp0 - 4u);
            wr32(sp0 - 0x18u, t11);
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t12 = cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t11, t10);
            eax = t12;
            loc_4 = rd32(sp0 - 4u);
        }
    }
    g->eax = eax;
    g->edx = rd32(self);
    t20 = rd32(self);
    g->esp = sp0 - 0x10u;
    t21 = cow_thiscall(g, rd32(t20 + 0x3d8u), self, 0);
    t22 = g->ecx;
    t23 = g->edx;
    if ((int8_t)rd8(t21 + 9u) <= 0)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_100d27ea;
    }
    edx = t23;
    wr32(sp0 - 0x14u, esi);
    wr32(sp0 - 0x18u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t24 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 + 4u, esi);
    t25 = g->edx;
    wr32(sp0 - 4u, rd32(t24));
    if (rd32(t24) == 0u)
    {
        loc_4 = rd32(t24);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_100d27ea;
    }
    eax = rd32(t24);
    edx = t25;
    loc_4 = rd32(t24);
    wr32(sp0 - 0x14u, 6u);
    wr32(sp0 - 0x18u, esi);
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t26 = cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 2u, esi, 6u);
    t27 = g->edx;
    g->edx = t27;
    t28 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 4u, 0);
    t29 = g->ecx;
    t30 = g->edx;
    if ((uint8_t)t28 == 0u)
    {
        eax = t28;
        ecx = t29;
        edx = t30;
        goto L_100d27a3;
    }
    eax = t28;
    t31 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x14u, t31);
    t32 = rd32(sp0 - 4u);
    wr32(sp0 - 0x18u, t32);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t32, t31);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return;
L_100d27a3: ;
    wr32(sp0 - 0x14u, 0x14u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t33 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t34 = g->edx;
    if (t33 == 0u)
    {
        eax = t33;
        edx = t34;
        esi = 0u;
    }
    else
    {
        eax = t33;
        edx = t34;
        esi = t33;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x100814a0u), esi + 4u, 0);
        t35 = g->edx;
        wr32(sp0 - 0x14u, self);
        t36 = rd32(self + 0x9ecu);
        wr32(esi, t36);
        g->eax = t36;
        g->edx = t35;
        t37 = cow_thiscall(g, COW_IMG(0x100814f0u), esi + 4u, 1, self);
        t38 = g->edx;
        wr32(esi + 0x10u, 2u);
        eax = t37;
        edx = t38;
    }
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, self);
    wr32(sp0 - 0x1cu, esi);
    wr32(sp0 - 0x20u, COW_IMG(0x100d1400u));
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 4u, 4, COW_IMG(0x100d1400u), esi, self, 0u);
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
L_100d27ea: ;
    g->esi = loc_c;
    g->edi = loc_10;
    g->ebp = loc_8;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d25e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d25e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
