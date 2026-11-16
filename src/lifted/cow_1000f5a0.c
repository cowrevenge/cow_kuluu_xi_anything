/* f_0x1000f5a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1000f5a0(Guest* g)
{
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 1u) goto L_1000f6ac;
    t1 = rd32(COW_IMG(0x10329184u));
    wr32(COW_IMG(0x10456760u), COW_IMG(0x1034f2a8u));
    wr32(COW_IMG(0x103d3c80u), COW_IMG(0x104566f0u));
    wr32(COW_IMG(0x104566f0u), 0x84u);
    wr32(COW_IMG(0x10456754u), 0x300u);
    wr32(COW_IMG(0x10456700u), COW_IMG(0x10350000u));
    wr32(COW_IMG(0x104566f8u), arg1);
    wr32(COW_IMG(0x104566fcu), arg1);
    wr32(COW_IMG(0x104566f4u), arg1);
    wr32(COW_IMG(0x10456704u), 0u);
    wr32(COW_IMG(0x10456708u), 0u);
    g->eax = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, t1, self, 1, COW_IMG(0x1045670cu));
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, t1, t3, 1, COW_IMG(0x10456724u));
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, t1, t6, 1, COW_IMG(0x1045673cu));
    t9 = g->ecx;
    t10 = g->edx;
    t11 = rd32(COW_IMG(0x10456700u));
    wr32(COW_IMG(0x10456758u), 0u);
    wr8(COW_IMG(0x1045675cu), 1u);
    wr32(COW_IMG(0x10456764u), 0u);
    wr32(COW_IMG(0x1045676cu), 0u);
    wr32(COW_IMG(0x10456768u), 0u);
    wr32(COW_IMG(0x10456770u), 0u);
    if (t11 != 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        esi = t11;
        if (rd32(esi) == 0u) goto L_1000f66e;
L_1000f654: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t12 = cow_thiscall(g, rd32(esi + 0x20u), ecx, 1, 1u);
        t13 = g->ecx;
        t14 = g->edx;
        if (rd32(COW_IMG(0x104566f0u)) != 0x64u)
        {
            eax = t12;
            ecx = t13;
            edx = t14;
            esi = esi + 0x24u;
        }
        else
        {
            eax = t12;
            ecx = t13;
            edx = t14;
            esi = esi + 0x1cu;
        }
        if (rd32(esi) != 0u) goto L_1000f654;
    }
L_1000f66e: ;
    t15 = rd32(COW_IMG(0x10329ae8u));
    t16 = rd32(COW_IMG(0x10329aecu));
    wr32(COW_IMG(0x103d3c70u), rd32(COW_IMG(0x10329ae4u)));
    t17 = rd32(COW_IMG(0x10329af0u));
    wr32(COW_IMG(0x103d3c74u), t15);
    wr32(COW_IMG(0x103d3c78u), t16);
    wr32(COW_IMG(0x103d3c7cu), t17);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(COW_IMG(0x10329180u)), t15, 1, arg1);
    return 1u;
L_1000f6ac: ;
    if (arg2 == 0u)
    {
        if (rd32(COW_IMG(0x10456700u)) == 0u)
        {
            eax = arg2;
            ecx = self;
            edx = in_edx;
        }
        else
        {
            esi = rd32(COW_IMG(0x10456700u));
            if (rd32(esi) == 0u)
            {
                eax = arg2;
                ecx = self;
                edx = in_edx;
                goto L_1000f6eb;
            }
            ecx = self;
            edx = in_edx;
L_1000f6c2: ;
            if (rd32(esi + 0x10u) == 0u)
            {
                eax = rd32(esi + 0x10u);
            }
            else
            {
                eax = rd32(esi + 0x10u);
                g->eax = eax;
                g->edx = edx;
                t18 = rd32(eax);
                g->esp = sp0 - 0xcu;
                t19 = cow_thiscall(g, rd32(t18 + 8u), t18, 1, eax);
                t20 = g->ecx;
                t21 = g->edx;
                eax = t19;
                ecx = t20;
                edx = t21;
            }
            wr32(esi + 0x10u, 0u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t22 = cow_thiscall(g, rd32(esi + 0x20u), ecx, 1, 0u);
            t23 = g->ecx;
            t24 = g->edx;
            if (rd32(COW_IMG(0x104566f0u)) != 0x64u)
            {
                eax = t22;
                ecx = t23;
                edx = t24;
                esi = esi + 0x24u;
            }
            else
            {
                eax = t22;
                ecx = t23;
                edx = t24;
                esi = esi + 0x1cu;
            }
            if (rd32(esi) != 0u) goto L_1000f6c2;
        }
L_1000f6eb: ;
        g->eax = eax;
        g->edx = edx;
        t25 = rd32(COW_IMG(0x103292f4u));
        g->esp = sp0 - 0xcu;
        t26 = cow_thiscall(g, t25, ecx, 1, COW_IMG(0x1045670cu));
        t27 = g->ecx;
        t28 = g->edx;
        g->edx = t28;
        t29 = cow_thiscall(g, t25, t27, 1, COW_IMG(0x10456724u));
        t30 = g->ecx;
        t31 = g->edx;
        g->edx = t31;
        t32 = cow_thiscall(g, t25, t30, 1, COW_IMG(0x1045673cu));
        t33 = g->ecx;
        t34 = g->edx;
        if (rd32(COW_IMG(0x10456770u)) == 0u)
        {
            ecx = t33;
            edx = t34;
            goto L_1000f728;
        }
        eax = t32;
        ecx = t33;
        esi = rd32(COW_IMG(0x10456770u));
L_1000f710: ;
        t35 = rd32(esi + 4u);
        g->eax = eax;
        g->edx = t35;
        g->esp = sp0 - 0xcu;
        t36 = cow_thiscall(g, rd32(esi), ecx, 1, t35);
        t37 = g->ecx;
        t38 = g->edx;
        t39 = rd32(esi + 8u);
        t40 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t37, t38, 1, 1, esi);
        t41 = g->ecx;
        t42 = g->edx;
        if (t39 != 0u)
        {
            eax = t40;
            ecx = t41;
            esi = t39;
            goto L_1000f710;
        }
        ecx = t41;
        edx = t42;
L_1000f728: ;
        if (rd32(COW_IMG(0x10456708u)) != 0u)
        {
            if (rd8(COW_IMG(0x1045675cu)) != 0u)
            {
                if (rd32(COW_IMG(0x10456768u)) == 0u)
                {
                    eax = rd32(COW_IMG(0x10456768u));
                    edi = rd32(COW_IMG(0x10329178u));
                }
                else
                {
                    edi = rd32(COW_IMG(0x10329178u));
                    esi = 0u;
L_1000f749: ;
                    t43 = rd32(esi * 4u + rd32(COW_IMG(0x10456768u)));
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    cow_thiscall(g, edi, t43, 1, t43);
                    t44 = g->ecx;
                    t45 = g->edx;
                    if (esi + 1u <= rd32(COW_IMG(0x10456764u)))
                    {
                        edx = t45;
                        esi = esi + 1u;
                        goto L_1000f749;
                    }
                    eax = rd32(COW_IMG(0x10456764u));
                    ecx = t44;
                }
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, edi, ecx, 1, rd32(COW_IMG(0x10456708u)));
            }
        }
    }
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000f5a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000f5a0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
