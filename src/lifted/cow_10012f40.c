/* f_0x10012f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10012f40(Guest* g)
{
    double d36;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10456910u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10456910u));
        if (!((double)rdf32(COW_IMG(0x1045689cu)) <= (double)rdf32(COW_IMG(0x103295d8u))))
        {
            if (rd32(COW_IMG(0x10456920u)) == 1u)
            {
                t2 = rd32(COW_IMG(0x104566e8u));
                wr32(COW_IMG(0x10456924u), 1u);
                g->edx = in_edx;
                g->esp = sp0 - 0xcu;
                t3 = cow_thiscall(g, COW_IMG(0x1000d660u), t2, 0);
                t4 = g->edx;
                if ((uint8_t)t3 == 0u)
                {
                    eax = t3;
                    edx = t4;
                }
                else
                {
                    eax = t3;
                    edx = t4;
                    wr32(COW_IMG(0x10456928u), 1u);
                }
            }
            else
            {
                eax = rd32(COW_IMG(0x10456920u)) - 1u;
                if (eax != 1u)
                {
                    eax = eax - 1u;
                    edx = in_edx;
                }
                else
                {
                    t1 = rd32(COW_IMG(0x10456928u));
                    wr32(COW_IMG(0x10456924u), 2u);
                    if (t1 != 1u)
                    {
                        eax = t1;
                        edx = in_edx;
                    }
                    else
                    {
                        eax = t1;
                        wr32(COW_IMG(0x10456928u), 2u);
                        edx = in_edx;
                    }
                }
            }
            esi = 0u;
L_10012fb4: ;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10009920u), rd32(COW_IMG(0x1045666cu)), 0);
            t5 = g->edx;
            t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(t6) + 0xc8u), rd32(t6), 3, t6, 7u, 0u);
            t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(t7) + 0xc8u), rd32(t7), 3, t7, 0xeu, 0u);
            t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(t8) + 0xc8u), rd32(t8), 3, t8, 9u, 1u);
            t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(t9) + 0xfcu), rd32(t9), 4, t9, 0u, 0xbu, 0u);
            t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(t10) + 0xfcu), rd32(t10), 4, t10, 0u, 0xdu, 3u);
            t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(t11) + 0xfcu), rd32(t11), 4, t11, 0u, 0xeu, 3u);
            t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(t12) + 0xfcu), rd32(t12), 4, t12, 0u, 0x10u, 2u);
            t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(t13) + 0xfcu), rd32(t13), 4, t13, 0u, 0x11u, 2u);
            t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(t14) + 0xfcu), rd32(t14), 4, t14, 0u, 1u, 2u);
            t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(t15) + 0xfcu), rd32(t15), 4, t15, 0u, 2u, 2u);
            t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t16, 0u, 4u, 2u);
            t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(t17) + 0xfcu), rd32(t17), 4, t17, 0u, 5u, 0u);
            t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(t18) + 0xfcu), rd32(t18), 4, t18, 1u, 4u, 1u);
            t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            g->edx = rd32(COW_IMG(0x1045666cu));
            t20 = rd32(COW_IMG(0x1045666cu));
            cow_thiscall(g, rd32(rd32(t19) + 0xfcu), rd32(t19), 4, t19, 1u, 1u, 1u);
            t21 = g->edx;
            if (rd32(COW_IMG(0x10456924u) + esi * 4u) == 1u)
            {
                edx = t21;
                goto L_10013114;
            }
            eax = rd32(COW_IMG(0x10456924u) + esi * 4u) - 1u;
            edx = t21;
            if (eax == 1u) goto L_1001316f;
            eax = eax - 1u;
L_10013257: ;
            if ((int32_t)(esi + 1u) < 2)
            {
                esi = esi + 1u;
                goto L_10012fb4;
            }
            t48 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, rd32(rd32(t48) + 0xc8u), rd32(t48), 3, t48, 7u, 1u);
            t49 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(t49) + 0xc8u), rd32(t49), 3, t49, 0xeu, 1u);
            t50 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(t50) + 0xc8u), rd32(t50), 3, t50, 9u, 2u);
        }
    }
    return;
L_10013114: ;
    if (rd32(COW_IMG(0x10456910u) + esi * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10456910u) + esi * 4u);
        if (rd32(esi * 4u + rd32(COW_IMG(0x1045666cu)) + 0x194u) == 0u)
        {
            edx = rd32(esi * 4u + rd32(COW_IMG(0x1045666cu)) + 0x194u);
        }
        else
        {
            ecx = rd32(COW_IMG(0x1045666cu));
            t22 = rd32(COW_IMG(0x10456918u) + esi * 4u);
            g->edx = t22;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10009e20u), ecx, 3, eax, t22, 0u);
            t23 = g->edx;
            t24 = rd32(esi * 4u + rd32(COW_IMG(0x1045666cu)) + 0x194u);
            g->eax = t24;
            g->edx = t23;
            t25 = cow_thiscall(g, COW_IMG(0x1000a4f0u), rd32(COW_IMG(0x1045666cu)), 3, t24, 0x80808080u, 0xffffffffu);
            t26 = g->edx;
            cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), t26, 2, 0u, 0u);
            t27 = g->edx;
            edx = t27;
        }
    }
    wr32(COW_IMG(0x10456920u), 2u);
L_1001316f: ;
    if (rd32(COW_IMG(0x10456910u) + esi * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10456910u) + esi * 4u);
    }
    else
    {
        if (rd32(esi * 4u + rd32(COW_IMG(0x1045666cu)) + 0x194u) == 0u)
        {
            eax = rd32(COW_IMG(0x1045666cu));
        }
        else
        {
            eax = rd32(COW_IMG(0x1045666cu));
            t28 = rd32(eax + 0xcu);
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, rd32(rd32(t28) + 0xc8u), rd32(t28), 3, t28, 0x1bu, 1u);
            t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            cow_thiscall(g, rd32(rd32(t29) + 0xc8u), rd32(t29), 3, t29, 0x13u, 5u);
            t30 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            g->eax = t30;
            g->edx = rd32(COW_IMG(0x1045666cu));
            t31 = rd32(t30);
            t32 = rd32(COW_IMG(0x1045666cu));
            t33 = cow_thiscall(g, rd32(t31 + 0xc8u), t31, 3, t30, 0x14u, 6u);
            t34 = g->ecx;
            t35 = g->edx;
            d36 = fr(g, (double)rdf32(COW_IMG(0x1045689cu)) * (double)rdf32(COW_IMG(0x10329a20u)));
            fpush(g, d36);
            t37 = cow_call_regs(g, COW_IMG(0x10311c6cu), t33, g->ecx, g->edx, 1, 0);
            if (esi != 0u)
            {
                ecx = rd32(COW_IMG(0x1045666cu));
                edi = t37 << 0x18u | 0x808080u;
                t38 = rd32(ecx + esi * 4u + 0x19cu);
                t39 = rd32(ecx + esi * 4u + 0x194u);
                g->edx = t39;
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, COW_IMG(0x10009e20u), ecx, 3, t39, t38, 0u);
                t40 = g->edx;
                t41 = rd32(COW_IMG(0x10456910u) + esi * 4u);
                g->eax = t41;
                g->edx = t40;
                t42 = cow_thiscall(g, COW_IMG(0x1000a4f0u), rd32(COW_IMG(0x1045666cu)), 3, t41, edi, 0xffffffffu);
                t43 = g->edx;
                cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), t43, 2, 0u, 0u);
            }
            else
            {
                eax = t37;
                ecx = rd32(COW_IMG(0x1045666cu));
                edi = t37 << 0x18u | 0x808080u;
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, COW_IMG(0x1000a4f0u), ecx, 3, rd32(COW_IMG(0x10456910u)), edi, 0xffffffffu);
            }
            t44 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            g->eax = t44;
            g->edx = rd32(t44);
            t45 = rd32(t44);
            g->esp = sp0 - 0xcu;
            t46 = cow_thiscall(g, rd32(t45 + 0xc8u), rd32(COW_IMG(0x1045666cu)), 3, t44, 0x1bu, 0u);
            t47 = g->edx;
            eax = t46;
            edx = t47;
        }
    }
    goto L_10013257;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10012f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10012f40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
