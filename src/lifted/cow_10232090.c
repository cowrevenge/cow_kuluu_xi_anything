/* f_0x10232090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10232090(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_190;
    uint32_t loc_194;
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
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
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
    cow_frame(g, sp0, 452u);

    wr32(sp0 - 0x198u, in_ebx);
    wr32(sp0 - 0x19cu, in_ebp);
    wr32(sp0 - 0x1a0u, in_esi);
    wr32(sp0 - 0x194u, self);
    if (arg2 == 0u)
    {
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 0x1a4u, in_edi);
        t1 = rd8(COW_IMG(0x103d3c84u));
        edi = sp0 - 0xffu;
        eax = 0u;
        ecx = 0x3fu;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
        wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
        edi = sp0 - 0x17fu;
        eax = 0u;
        ecx = 0xfu;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
        wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
        edi = sp0 - 0x13fu;
        eax = 0u;
        ecx = 0xfu;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
        wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
        wr32(sp0 - 0x18cu, 0u);
        wr32(sp0 - 0x188u, 0u);
        wr32(sp0 - 0x184u, 0u);
        if (rd32(arg2 + 0x1560u) == 0u)
        {
            edx = (in_edx & 0xffffff00u) | t1;
        }
        else
        {
            eax = rd32(arg2 + 0x1560u);
            edx = (in_edx & 0xffffff00u) | t1;
            if (rd32(eax) == 0u)
            {
                wr32(sp0 - 0x1a8u, 0x80804040u);
                wr32(sp0 - 0x1acu, 0x84u);
                wr32(sp0 - 0x1b0u, 0xcu);
                g->eax = eax;
                g->edx = edx;
                t2 = rd32(self + 8u);
                g->esp = sp0 - 0x1a8u;
                t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x84u);
                t4 = g->edx;
                wr32(sp0 - 0x1acu, t3);
                wr32(sp0 - 0x1b0u, 0xc8u);
                wr32(sp0 - 0x1b4u, 0xdcu);
                g->ebx = 0u;
                g->edi = t2 + 0xc4u;
                g->edx = t4;
                g->esp = sp0 - 0x1a4u;
                cow_thiscall(g, COW_IMG(0x101171b0u), t2 + 0xc4u, 4, 0xdcu, 0xc8u, t3, 0x80804040u);
                t5 = g->ecx;
                t6 = g->edx;
                ecx = t5;
                edx = t6;
            }
        }
        wr32(sp0 - 0x1a8u, arg1);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1a4u;
        t7 = cow_cdecl(g, COW_IMG(0x10230a80u), 1, arg1);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x190u, t7);
        if (rd32(arg2 + 0x1564u) == 0u)
        {
            eax = rd32(arg2 + 0x1564u);
            ecx = t8;
            edx = t9;
            ebx = 0u;
            loc_190 = t7;
        }
        else
        {
            eax = rd32(arg2 + 0x1564u);
            ecx = t8;
            edx = t9;
            loc_190 = t7;
            ebx = rd32(eax);
        }
        wr32(sp0 - 0x1a8u, arg1);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1a4u;
        t10 = cow_call_regs(g, COW_IMG(0x10230930u), eax, g->ecx, g->edx, 1, 1, arg1);
        t11 = g->ecx;
        t12 = g->edx;
        if ((uint8_t)t10 != 0u)
        {
            eax = t10;
            ecx = t11;
            edx = t12;
            edi = 0x80808080u;
        }
        else
        {
            ecx = t11;
            edx = t12;
            wr32(sp0 - 0x1a8u, arg2);
            wr32(sp0 - 0x1acu, arg1);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x19cu;
            t13 = cow_cdecl(g, COW_IMG(0x102309d0u), 4, arg1, arg2, rd32(sp0 - 0x1a4u), rd32(sp0 - 0x1a0u));
            t14 = g->ecx;
            t15 = g->edx;
            if ((uint8_t)t13 != 1u)
            {
                eax = t13;
                ecx = t14;
                edx = t15;
                edi = 0x80808080u;
            }
            else
            {
                edx = t15;
                wr32(sp0 - 0x1a8u, arg1);
                g->ecx = arg1;
                g->edx = edx;
                g->esp = sp0 - 0x1a4u;
                t16 = cow_cdecl(g, COW_IMG(0x102308a0u), 1, arg1);
                t17 = g->ecx;
                t18 = g->edx;
                if ((uint8_t)t16 != 0u)
                {
                    eax = t16;
                    ecx = t17;
                    edx = t18;
                    edi = 0x80808080u;
                }
                else
                {
                    eax = t16;
                    ecx = t17;
                    edx = t18;
                    wr32(sp0 - 0x190u, ebx);
                    edi = 0x802060a0u;
                    loc_190 = ebx;
                }
            }
        }
        if (rd32(rd32(sp0 - 0x194u) + 0x68u) != 4u)
        {
            ebp = rd32(sp0 - 0x194u);
        }
        else
        {
            ebp = rd32(sp0 - 0x194u);
            wr32(sp0 - 0x1a8u, arg2);
            wr32(sp0 - 0x1acu, arg1);
            g->ecx = ecx;
            g->edx = arg1;
            g->esp = sp0 - 0x19cu;
            t19 = cow_cdecl(g, COW_IMG(0x102309d0u), 4, arg1, arg2, rd32(sp0 - 0x1a4u), rd32(sp0 - 0x1a0u));
            t20 = g->ecx;
            t21 = g->edx;
            if ((uint8_t)t19 == 0u)
            {
                eax = t19;
                ecx = t20;
                edx = t21;
            }
            else
            {
                eax = t19;
                ecx = t20;
                edx = t21;
                if (rd32(sp0 - 0x190u) == ebx)
                {
                    edi = 0x802060a0u;
                }
            }
        }
        wr32(sp0 - 0x1a8u, 0x81u);
        wr32(sp0 - 0x1acu, 0xcu);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1a4u;
        t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x81u);
        t23 = g->ecx;
        t24 = g->edx;
        wr32(sp0 - 0x1b0u, t22);
        wr32(sp0 - 0x1b4u, COW_IMG(0x10386a14u));
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        g->ebx = ebx;
        g->edx = t24;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10386a14u), t22, 0xcu, 0x81u);
        t25 = g->edx;
        wr32(sp0 - 0x1a8u, 0x80808080u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        wr32(sp0 - 0x1b0u, 0xb4u);
        wr32(sp0 - 0x1b4u, 0x14u);
        g->ebx = ebx;
        g->edi = edi;
        t26 = rd32(ebp + 8u);
        cow_thiscall(g, COW_IMG(0x101171b0u), t26 + 0xc4u, 4, 0x14u, 0xb4u, sp0 - 0x100u, 0x80808080u);
        t27 = g->ecx;
        wr32(sp0 - 0x1a8u, ebx);
        t28 = rd32(sp0 - 0x190u);
        wr32(sp0 - 0x1acu, t28);
        wr32(sp0 - 0x1b0u, COW_IMG(0x10357fbcu));
        wr32(sp0 - 0x1b4u, sp0 - 0x100u);
        g->ebx = ebx;
        g->edx = t28;
        g->esp = sp0 - 0x1a0u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10357fbcu), t28, ebx, rd32(sp0 - 0x1a4u));
        t29 = g->edx;
        wr32(sp0 - 0x1a8u, edi);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        wr32(sp0 - 0x1b0u, 0xb4u);
        wr32(sp0 - 0x1b4u, 0xb4u);
        g->ebx = ebx;
        g->edi = edi;
        g->edx = t29;
        t30 = rd32(ebp + 8u);
        g->esp = sp0 - 0x1a4u;
        t31 = cow_thiscall(g, COW_IMG(0x101171b0u), t30 + 0xc4u, 4, 0xb4u, 0xb4u, sp0 - 0x100u, edi);
        t32 = g->ecx;
        t33 = g->edx;
        wr32(sp0 - 0x1a8u, 0x83u);
        wr32(sp0 - 0x1acu, 0xcu);
        g->ecx = t32;
        t34 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x83u);
        t35 = g->ecx;
        wr32(sp0 - 0x1b0u, t34);
        wr32(sp0 - 0x1b4u, COW_IMG(0x1034f7e0u));
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        g->ebx = ebx;
        g->edx = sp0 - 0x100u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1034f7e0u), t34, 0xcu, 0x83u);
        t36 = g->edx;
        wr32(sp0 - 0x1a8u, 0x80808080u);
        wr32(sp0 - 0x1acu, sp0 - 0x100u);
        wr32(sp0 - 0x1b0u, 0xc8u);
        wr32(sp0 - 0x1b4u, 0x14u);
        g->ebx = ebx;
        g->edi = edi;
        g->edx = t36;
        cow_thiscall(g, COW_IMG(0x101171b0u), rd32(ebp + 8u) + 0xc4u, 4, 0x14u, 0xc8u, sp0 - 0x100u, 0x80808080u);
        t37 = g->edx;
        if (rd32(arg2 + 0x1568u) == 0u)
        {
            edx = t37;
            wr32(sp0 - 0x194u, 0u);
            loc_194 = 0u;
        }
        else
        {
            eax = rd32(arg2 + 0x1568u);
            wr32(sp0 - 0x194u, rd32(eax));
            edx = rd32(eax);
            loc_194 = rd32(eax);
        }
        if (rd32(arg2 + 0x156cu) == 0u)
        {
            wr32(sp0 - 0x190u, 0u);
            loc_190 = 0u;
        }
        else
        {
            eax = rd32(arg2 + 0x156cu);
            wr32(sp0 - 0x190u, rd32(eax));
            loc_190 = rd32(eax);
        }
        if (rd32(arg2 + 0x1570u) == 0u)
        {
            eax = rd32(arg2 + 0x1570u);
            edi = 0u;
        }
        else
        {
            eax = rd32(arg2 + 0x1570u);
            edi = rd32(eax);
        }
        if (rd32(arg2 + 0x1574u) == 0u)
        {
            ebx = 0u;
        }
        else
        {
            esi = rd32(arg2 + 0x1574u);
            ebx = rd32(esi);
        }
        if (edi == 0u)
        {
            ecx = 0u;
            esi = rd32(sp0 - 0x184u);
        }
        else
        {
            wr32(sp0 - 0x1a8u, 0x7du);
            wr32(sp0 - 0x1acu, 0xcu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1a4u;
            t38 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x7du);
            t39 = g->edx;
            wr32(sp0 - 0x1b0u, t38);
            wr32(sp0 - 0x1b4u, edi);
            wr32(sp0 - 0x1b8u, COW_IMG(0x10386a0cu));
            wr32(sp0 - 0x1bcu, sp0 - 0x180u);
            g->ebx = ebx;
            g->ecx = sp0 - 0x180u;
            g->esp = sp0 - 0x1a8u;
            t40 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x180u, COW_IMG(0x10386a0cu), edi, t38, 0xcu);
            t41 = g->ecx;
            wr32(sp0 - 0x18cu, sp0 - 0x180u);
            eax = t40;
            ecx = t41;
            edx = sp0 - 0x180u;
            esi = 1u;
        }
        if (ebx == 0u)
        {
            edi = rd32(sp0 - 0x1a4u);
        }
        else
        {
            edi = rd32(sp0 - 0x1a4u);
            wr32(sp0 - 0x1a4u, 0x7eu);
            wr32(sp0 - 0x1a8u, 0xcu);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x1a0u;
            t42 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x7eu);
            t43 = g->ecx;
            t44 = g->edx;
            wr32(sp0 - 0x1acu, t42);
            wr32(sp0 - 0x1b0u, ebx);
            wr32(sp0 - 0x1b4u, COW_IMG(0x10386a0cu));
            wr32(sp0 - 0x1b8u, sp0 - 0x140u);
            g->ebx = ebx;
            g->edx = t44;
            g->esp = sp0 - 0x1a4u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x140u, COW_IMG(0x10386a0cu), ebx, t42, 0xcu);
            t45 = g->edx;
            wr32(esi * 4u + sp0 - 0x18cu, sp0 - 0x140u);
            edx = t45;
        }
        if (rd32(sp0 - 0x188u) != 0u)
        {
            ecx = rd32(sp0 - 0x188u);
        }
        else
        {
            ecx = COW_IMG(0x103d3c84u);
        }
        if (sp0 != 0x180u)
        {
            eax = sp0 - 0x180u;
        }
        else
        {
            eax = COW_IMG(0x103d3c84u);
        }
        wr32(sp0 - 0x1a4u, ecx);
        wr32(sp0 - 0x1a8u, eax);
        wr32(sp0 - 0x1acu, 0x7cu);
        wr32(sp0 - 0x1b0u, 0xcu);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x1a8u;
        t46 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x7cu);
        t47 = g->ecx;
        wr32(sp0 - 0x1acu, t46);
        t48 = rd32(sp0 - 0x190u);
        wr32(sp0 - 0x1b0u, t48);
        wr32(sp0 - 0x1b4u, 0x7bu);
        wr32(sp0 - 0x1b8u, 0xcu);
        g->edx = t48;
        g->esp = sp0 - 0x1b0u;
        t49 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x7bu);
        t50 = g->edx;
        wr32(sp0 - 0x1b4u, t49);
        t51 = rd32(sp0 - 0x194u);
        wr32(sp0 - 0x1b8u, t51);
        wr32(sp0 - 0x1bcu, COW_IMG(0x103869f8u));
        wr32(sp0 - 0x1c0u, sp0 - 0x100u);
        g->ebx = ebx;
        g->esp = sp0 - 0x1acu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x103869f8u), t51, t49, rd32(sp0 - 0x1b0u));
        wr32(sp0 - 0x1a4u, 0x80808080u);
        wr32(sp0 - 0x1a8u, sp0 - 0x100u);
        wr32(sp0 - 0x1acu, 0xdcu);
        wr32(sp0 - 0x1b0u, 0x14u);
        g->ebx = ebx;
        g->edi = edi;
        g->esp = sp0 - 0x1a0u;
        cow_thiscall(g, COW_IMG(0x101171b0u), rd32(ebp + 8u) + 0xc4u, 4, 0x14u, 0xdcu, sp0 - 0x100u, 0x80808080u);
    }
    g->ebx = in_ebx;
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10232090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10232090(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
