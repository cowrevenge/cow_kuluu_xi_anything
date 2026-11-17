/* f_0x100856f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100856f0(Guest* g)
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
    uint32_t t39;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(self + 0x68u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        loc_4 = self;
        loc_8 = in_ebp;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_10085754;
    }
    edx = in_edx;
    esi = rd32(self + 0x68u);
    loc_4 = self;
    loc_8 = in_ebp;
    loc_c = in_esi;
    loc_10 = in_edi;
L_100856fd: ;
    g->eax = rd32(esi);
    g->edx = edx;
    t1 = rd32(esi);
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), esi, 0);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        eax = t2;
        wr32(sp0 - 0x14u, COW_IMG(0x1032b108u));
        g->eax = eax;
        g->edx = rd32(esi);
        t4 = rd32(esi);
        g->esp = sp0 - 0x14u;
        t5 = cow_thiscall(g, rd32(t4 + 0x18u), esi, 0);
        t6 = g->edx;
        g->esp = sp0 - 0x10u;
        t7 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t5, t6, 1, COW_IMG(0x1032b108u));
        t8 = g->edx;
        if ((uint8_t)t7 == 0u)
        {
            eax = t7;
            edx = t8;
        }
        else
        {
            edx = t8;
            g->eax = rd32(esi);
            g->edx = edx;
            t9 = rd32(esi);
            g->esp = sp0 - 0x10u;
            t10 = cow_thiscall(g, rd32(t9 + 0x18u), esi, 0);
            t11 = g->edx;
            g->edx = t11;
            t12 = cow_thiscall(g, COW_IMG(0x100539e0u), t10, 0);
            t13 = g->edx;
            if ((uint8_t)t12 == 0u)
            {
                eax = t12;
                edx = t13;
            }
            else
            {
                edx = t13;
                edi = t10;
                if (rd32(edi + 0xb0u) == 0u)
                {
                    eax = rd32(edi + 0xb0u);
                    g->ebp = self;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t14 = cow_thiscall(g, COW_IMG(0x100531d0u), edi, 0);
                    t15 = g->edx;
                    eax = t14;
                    edx = t15;
                }
                else
                {
                    eax = rd32(edi + 0xb0u);
                    wr8(eax + 0x17au, 0u);
                }
            }
        }
    }
    if (rd32(esi + 0x2cu) != 0u)
    {
        esi = rd32(esi + 0x2cu);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_100856fd;
    }
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
L_10085754: ;
    if (rd32(self + 0x6cu) == 0u) goto L_100857b2;
    esi = rd32(self + 0x6cu);
L_1008575b: ;
    g->eax = eax;
    g->edx = rd32(esi);
    t16 = rd32(esi);
    g->esp = sp0 - 0x10u;
    t17 = cow_thiscall(g, rd32(t16 + 0x18u), esi, 0);
    t18 = g->edx;
    if (t17 == 0u)
    {
        eax = t17;
        edx = t18;
    }
    else
    {
        edx = t18;
        wr32(sp0 - 0x14u, COW_IMG(0x1032b108u));
        g->eax = rd32(esi);
        g->edx = edx;
        t19 = rd32(esi);
        g->esp = sp0 - 0x14u;
        t20 = cow_thiscall(g, rd32(t19 + 0x18u), esi, 0);
        t21 = g->edx;
        g->esp = sp0 - 0x10u;
        t22 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t20, t21, 1, COW_IMG(0x1032b108u));
        t23 = g->edx;
        if ((uint8_t)t22 == 0u)
        {
            eax = t22;
            edx = t23;
        }
        else
        {
            eax = t22;
            g->eax = eax;
            g->edx = rd32(esi);
            t24 = rd32(esi);
            g->esp = sp0 - 0x10u;
            t25 = cow_thiscall(g, rd32(t24 + 0x18u), esi, 0);
            t26 = g->edx;
            g->edx = t26;
            t27 = cow_thiscall(g, COW_IMG(0x100539e0u), t25, 0);
            t28 = g->edx;
            if ((uint8_t)t27 == 0u)
            {
                eax = t27;
                edx = t28;
            }
            else
            {
                edx = t28;
                edi = t25;
                if (rd32(edi + 0xb0u) == 0u)
                {
                    eax = rd32(edi + 0xb0u);
                    g->ebp = self;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t29 = cow_thiscall(g, COW_IMG(0x100531d0u), edi, 0);
                    t30 = g->edx;
                    eax = t29;
                    edx = t30;
                }
                else
                {
                    eax = rd32(edi + 0xb0u);
                    wr8(eax + 0x17au, 0u);
                }
            }
        }
    }
    if (rd32(esi + 0x30u) != 0u)
    {
        esi = rd32(esi + 0x30u);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_1008575b;
    }
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
L_100857b2: ;
    wr32(sp0 - 0x14u, COW_IMG(0x10330ebcu));
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t31 = cow_fastcall(g, COW_IMG(0x1002c8f0u), self, edx, 1, COW_IMG(0x10330ebcu));
    t32 = g->edx;
    if ((uint8_t)t31 == 0u)
    {
        eax = t31;
    }
    else
    {
        edx = t32;
        if (rd32(self + 0x814u) != 0u)
        {
            eax = rd32(self + 0x814u);
        }
        else
        {
            wr32(sp0 - 0x14u, 0x62697666u);
            wr32(sp0 - 0x18u, 5u);
            wr32(sp0 - 0x1cu, sp0 - 4u);
            g->eax = rd32(self);
            g->edx = edx;
            t33 = rd32(self);
            g->esp = sp0 - 0x10u;
            t34 = cow_thiscall(g, rd32(t33 + 0x1ecu), self, 3, sp0 - 4u, 5u, 0x62697666u);
            t35 = g->edx;
            if (rd32(t34) == 0u)
            {
                eax = rd32(t34);
            }
            else
            {
                eax = rd32(t34);
                edx = t35;
                if (rd32(eax) != 0u)
                {
                    ecx = rd32(eax);
                    wr32(sp0 - 0x14u, 0u);
                    wr32(sp0 - 0x18u, self);
                    wr32(sp0 - 0x1cu, self);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t36 = cow_thiscall(g, COW_IMG(0x100536c0u), ecx, 3, self, self, 0u);
                    t37 = g->edx;
                    wr32(t36 + 0x64u, self);
                    t38 = cow_call_regs(g, COW_IMG(0x10071e90u), t36, t36, g->edx, 1, 0);
                    t39 = rd32(t36 + 0x14u);
                    wr32(self + 0x814u, t39);
                    eax = t38;
                }
            }
        }
    }
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100856f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100856f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
