/* f_0x1002a3b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1002a3b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_24;
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
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 4u, self);
    if (rd32(self + 0xc4u) == 0xffffffffu)
    {
        if (rd32(rd32(COW_IMG(0x1047d128u)) + 0x40008u) == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1047d128u)) + 0x40008u);
            eax = rd32(eax);
        }
        wr32(sp0 - 0x24u, eax);
        wr32(sp0 - 0x28u, rd32(COW_IMG(0x10351514u)));
        g->eax = eax;
        g->esp = sp0 - 0x20u;
        t1 = cow_thiscall(g, COW_IMG(0x1003af10u), rd32(COW_IMG(0x1047b970u)), 2, rd32(COW_IMG(0x10351514u)), eax);
        wr32(self + 0xc4u, t1);
    }
    wr32(sp0 - 0x24u, rd32(COW_IMG(0x104571d8u)));
    wr32(sp0 - 0x28u, 0x8bu);
    t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x2cu, t2);
    g->eax = t2;
    g->edx = rd32(COW_IMG(0x104571d8u));
    t3 = rd32(COW_IMG(0x104571d8u));
    g->esp = sp0 - 0x20u;
    t4 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t2, 0x8bu, t3);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    esi = 0u;
    edi = COW_IMG(0x104572b8u);
L_1002a41b: ;
    if (rd32(edi) == 0u)
    {
        wr32(sp0 - 0x24u, 0u);
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        edx = rd32(COW_IMG(0x1045666cu));
        loc_24 = 0u;
    }
    else
    {
        wr32(sp0 - 0x24u, edi);
        wr32(sp0 - 0x28u, esi);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, esi, edi);
        t6 = g->edx;
        wr32(sp0 - 0x24u, 1u);
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        edx = t6;
        loc_24 = 1u;
    }
    wr32(sp0 - 0x28u, esi);
    wr32(sp0 - 0x2cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t7 = cow_thiscall(g, rd32(rd32(eax) + 0xb8u), rd32(eax), 3, eax, esi, loc_24);
    t8 = g->edx;
    if ((int32_t)(edi + 0x68u) < (int32_t)COW_IMG(0x10457388u))
    {
        eax = t7;
        edx = t8;
        esi = esi + 1u;
        edi = edi + 0x68u;
        goto L_1002a41b;
    }
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 0x89u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x2cu, t9);
    g->eax = t9;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t10 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x20u;
    t11 = cow_thiscall(g, rd32(rd32(t9) + 0xc8u), rd32(t9), 3, t9, 0x89u, 1u);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x10029e70u), self, 0);
    t14 = g->edx;
    wr32(sp0 - 8u, t13);
    wr32(sp0 - 0xcu, t13);
    if (rd32(t13) == 0u)
    {
        eax = t13;
        edx = t14;
        goto L_1002a64d;
    }
    eax = t13;
    ebp = rd32(t13);
    loc_8 = t13;
    loc_c = t13;
L_1002a48c: ;
    g->eax = eax;
    g->edx = rd32(ebp);
    t15 = rd32(ebp);
    g->esp = sp0 - 0x20u;
    t16 = cow_thiscall(g, rd32(t15 + 0x2cu), ebp, 0);
    t17 = g->edx;
    if (t16 == 0u)
    {
        edx = t17;
    }
    else
    {
        edx = t17;
        esi = t16;
        if (rd32(esi + 0x58u) != 0u)
        {
            ebx = rd32(esi + 0x58u);
            if (rd32(ebp + 0x14u) == 0u)
            {
                if (rd32(ebp + 0x1cu) != 0u) goto L_1002a4ec;
                eax = ebp + 0x1cu;
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, eax);
                wr32(sp0 - 0x2cu, rd32(COW_IMG(0x10457540u)));
                wr32(sp0 - 0x30u, 0u);
                wr32(sp0 - 0x34u, 0x208u);
                t18 = ebx * 0xcu + 4u;
                wr32(sp0 - 0x38u, t18);
                g->eax = rd32(COW_IMG(0x10457540u));
                g->edx = t18;
                t19 = rd32(COW_IMG(0x10457540u));
                g->esp = sp0 - 0x20u;
                t20 = cow_thiscall(g, COW_IMG(0x1003b210u), rd32(COW_IMG(0x1047b974u)), 6, t18, 0x208u, 0u, t19, eax, 0u);
                t21 = g->edx;
                if ((int32_t)t20 < 0)
                {
                    edx = t21;
                    goto L_1002a5ab;
                }
                edx = t21;
L_1002a4ec: ;
                if (rd32(ebp + 0x24u) != 0u) goto L_1002a524;
                eax = ebp + 0x24u;
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, eax);
                wr32(sp0 - 0x2cu, rd32(COW_IMG(0x10457540u)));
                wr32(sp0 - 0x30u, 0u);
                wr32(sp0 - 0x34u, 0x208u);
                t22 = ebx * 0xcu + 4u;
                wr32(sp0 - 0x38u, t22);
                g->eax = rd32(COW_IMG(0x10457540u));
                g->edx = t22;
                t23 = rd32(COW_IMG(0x10457540u));
                g->esp = sp0 - 0x20u;
                t24 = cow_thiscall(g, COW_IMG(0x1003b210u), rd32(COW_IMG(0x1047b974u)), 6, t22, 0x208u, 0u, t23, eax, 0u);
                t25 = g->edx;
                if ((int32_t)t24 < 0)
                {
                    edx = t25;
                    goto L_1002a5ab;
                }
                edx = t25;
L_1002a524: ;
                if (rd32(esi + 0x34u) == 0u)
                {
                    eax = 0u;
                }
                else
                {
                    eax = rd32(esi + 0x34u);
                    eax = rd32(eax);
                }
                if (!(rd8(eax + 0x34u) & 1u)) goto L_1002a62f;
                if (rd32(ebp + 0x2cu) != 0u) goto L_1002a56f;
                eax = ebp + 0x2cu;
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, eax);
                wr32(sp0 - 0x2cu, rd32(COW_IMG(0x10457540u)));
                wr32(sp0 - 0x30u, 0u);
                wr32(sp0 - 0x34u, 0x208u);
                t26 = ebx * 0xcu + 4u;
                wr32(sp0 - 0x38u, t26);
                g->eax = rd32(COW_IMG(0x10457540u));
                g->edx = t26;
                t27 = rd32(COW_IMG(0x10457540u));
                g->esp = sp0 - 0x20u;
                t28 = cow_thiscall(g, COW_IMG(0x1003b210u), rd32(COW_IMG(0x1047b974u)), 6, t26, 0x208u, 0u, t27, eax, 0u);
                t29 = g->edx;
                if ((int32_t)t28 < 0)
                {
                    edx = t29;
                    goto L_1002a5ab;
                }
                edx = t29;
L_1002a56f: ;
                if (rd32(ebp + 0x34u) != 0u) goto L_1002a62f;
                eax = ebp + 0x34u;
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, eax);
                wr32(sp0 - 0x2cu, rd32(COW_IMG(0x10457540u)));
                wr32(sp0 - 0x30u, 0u);
                wr32(sp0 - 0x34u, 0x208u);
                t30 = ebx * 0xcu + 4u;
                wr32(sp0 - 0x38u, t30);
                g->eax = rd32(COW_IMG(0x10457540u));
                g->edx = t30;
                t31 = rd32(COW_IMG(0x10457540u));
                g->esp = sp0 - 0x20u;
                t32 = cow_thiscall(g, COW_IMG(0x1003b210u), rd32(COW_IMG(0x1047b974u)), 6, t30, 0x208u, 0u, t31, eax, 0u);
                t33 = g->edx;
                if ((int32_t)t32 >= 0)
                {
                    edx = t33;
                    goto L_1002a62f;
                }
                edx = t33;
L_1002a5ab: ;
                wr32(sp0 - 0x10u, 2u);
                esi = ebp + 0x24u;
                loc_10 = 2u;
L_1002a5b6: ;
                if (rd32(esi - 8u) == 0u)
                {
                    eax = rd32(esi - 8u);
                }
                else
                {
                    eax = rd32(esi - 8u);
                    edi = esi - 8u;
                    wr32(sp0 - 0x24u, edi);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    t34 = cow_stdcall(g, COW_IMG(0x1003b3c0u), 1, edi);
                    t35 = g->edx;
                    wr32(edi, 0u);
                    eax = t34;
                    edx = t35;
                    loc_10 = rd32(sp0 - 0x10u);
                }
                if (rd32(esi) != 0u)
                {
                    wr32(sp0 - 0x24u, esi);
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    cow_stdcall(g, COW_IMG(0x1003b3c0u), 1, esi);
                    t36 = g->edx;
                    wr32(esi, 0u);
                    edx = t36;
                    loc_10 = rd32(sp0 - 0x10u);
                }
                if (rd32(esi + 8u) != 0u)
                {
                    eax = rd32(esi + 8u);
                    edi = esi + 8u;
                    wr32(sp0 - 0x24u, edi);
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    cow_stdcall(g, COW_IMG(0x1003b3c0u), 1, edi);
                    t37 = g->edx;
                    wr32(edi, 0u);
                    edx = t37;
                    loc_10 = rd32(sp0 - 0x10u);
                }
                if (rd32(esi + 0x10u) != 0u)
                {
                    eax = rd32(esi + 0x10u);
                    edi = esi + 0x10u;
                    wr32(sp0 - 0x24u, edi);
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    cow_stdcall(g, COW_IMG(0x1003b3c0u), 1, edi);
                    t38 = g->edx;
                    wr32(edi, 0u);
                    edx = t38;
                    loc_10 = rd32(sp0 - 0x10u);
                }
                wr32(sp0 - 0x10u, loc_10 - 1u);
                if (loc_10 != 1u)
                {
                    esi = esi + 4u;
                    loc_10 = loc_10 - 1u;
                    goto L_1002a5b6;
                }
L_1002a62f: ;
                wr32(ebp + 0x14u, ebx);
            }
        }
    }
    t39 = rd32(rd32(sp0 - 0xcu)) + 4u;
    wr32(sp0 - 0xcu, t39);
    if (rd32(t39) != 0u)
    {
        eax = t39;
        ebp = rd32(t39);
        loc_8 = rd32(sp0 - 8u);
        loc_c = t39;
        goto L_1002a48c;
    }
    eax = rd32(sp0 - 8u);
L_1002a64d: ;
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    if (rd32(eax) != 0u)
    {
        esi = rd32(eax);
        edi = eax;
L_1002a66d: ;
        if (rd32(esi + 0xcu) == 0u)
        {
            eax = rd32(esi + 0xcu);
            g->eax = eax;
            g->esp = sp0 - 0x20u;
            t40 = cow_thiscall(g, rd32(rd32(esi) + 0x2cu), esi, 0);
            if (t40 != 0u)
            {
                eax = t40;
                t41 = rd32(esi + rd32(esi + 0x18u) * 4u + 0x1cu);
                wr32(eax + 0x44u, t41);
                t42 = rd32(esi + rd32(esi + 0x18u) * 4u + 0x24u);
                wr32(eax + 0x48u, t42);
                t43 = rd32(esi + rd32(esi + 0x18u) * 4u + 0x2cu);
                wr32(eax + 0x50u, t43);
                t44 = rd32(esi + rd32(esi + 0x18u) * 4u + 0x34u);
                wr32(eax + 0x54u, t44);
            }
            wr32(sp0 - 0x24u, sp0 - 8u);
            wr32(sp0 - 0x28u, sp0 - 0xcu);
            wr32(sp0 - 0x2cu, arg3);
            t45 = rd32(sp0 - 4u);
            wr32(sp0 - 0x30u, t45);
            wr32(sp0 - 0x34u, arg2);
            wr32(sp0 - 0x38u, arg1);
            g->edx = arg1;
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(rd32(rd32(edi)) + 0x1cu), rd32(edi), 6, arg1, arg2, t45, arg3, sp0 - 0xcu, sp0 - 8u);
            t46 = g->edx;
            edx = t46;
        }
        if (rd32(rd32(edi) + 4u) != 0u)
        {
            esi = rd32(rd32(edi) + 4u);
            edi = rd32(edi) + 4u;
            goto L_1002a66d;
        }
    }
    esi = 0u;
L_1002a6d1: ;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, esi);
    t47 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x2cu, t47);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(t47) + 0xb8u), rd32(t47), 3, t47, esi, 0u);
    t48 = g->edx;
    if ((int32_t)(esi + 1u) < 4)
    {
        edx = t48;
        esi = esi + 1u;
        goto L_1002a6d1;
    }
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002a3b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1002a3b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
