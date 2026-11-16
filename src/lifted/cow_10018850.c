/* f_0x10018850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10018850(Guest* g)
{
    double d11;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 300u);

    wr32(sp0 - 0x108u, in_esi);
    wr32(sp0 - 0x10cu, in_edi);
    if (rd32(self + 0x108u) > 3u) goto L_10018a34;
    eax = rd32(self + 0x108u);
    t1 = rd32(COW_IMG(0x10018a40u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10018874u: goto L_10018874;
    case 0x10018961u: goto L_10018961;
    case 0x10018a01u: goto L_10018a01;
    case 0x10018a10u: goto L_10018a10;
    default: rt_fatal(g, COW_IMG(0x1001886du), "switch");
    }
    return;
L_10018874: ;
    if (rd32(COW_IMG(0x10350e54u) + rd32(COW_IMG(0x10456d20u)) * 4u) == 0u) goto L_10018a2a;
    eax = rd32(COW_IMG(0x10350e54u) + rd32(COW_IMG(0x10456d20u)) * 4u);
    wr32(sp0 - 0x110u, eax);
    wr32(sp0 - 0x114u, self + 4u);
    wr32(sp0 - 0x118u, COW_IMG(0x10350670u));
    wr32(sp0 - 0x11cu, 0x104u);
    wr32(sp0 - 0x120u, sp0 - 0x104u);
    g->eax = eax;
    g->ecx = sp0 - 0x104u;
    g->esp = sp0 - 0x108u;
    t27 = cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 0x104u, 0x104u, COW_IMG(0x10350670u), self + 4u, eax, in_edi);
    t28 = g->ecx;
    wr32(sp0 - 0x124u, sp0 - 0x104u);
    g->edi = self + 4u;
    g->ecx = t28;
    g->edx = sp0 - 0x104u;
    g->esp = sp0 - 0x118u;
    t29 = cow_cdecl(g, COW_IMG(0x1021d3d0u), 3, sp0 - 0x104u, sp0 - 0x104u, 0x104u);
    t30 = g->ecx;
    t31 = g->edx;
    if ((uint8_t)t29 != 0u)
    {
        ecx = t30;
        edx = t31;
        goto L_100188c5;
    }
    wr32(self + 0x108u, 2u);
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    return;
L_100188c5: ;
    if (rd32(COW_IMG(0x1046393cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1046393cu));
    }
    else
    {
        wr32(sp0 - 0x110u, COW_IMG(0x10350fc8u));
        wr32(sp0 - 0x114u, self + 4u);
        wr32(sp0 - 0x118u, COW_IMG(0x10350670u));
        wr32(sp0 - 0x11cu, 0x104u);
        wr32(sp0 - 0x120u, sp0 - 0x104u);
        g->eax = sp0 - 0x104u;
        g->edx = edx;
        g->esp = sp0 - 0x108u;
        t32 = cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 0x104u, 0x104u, COW_IMG(0x10350670u), self + 4u, COW_IMG(0x10350fc8u), rd32(sp0 - 0x10cu));
        t33 = g->edx;
        wr32(sp0 - 0x124u, COW_IMG(0x1034f2d0u));
        wr32(sp0 - 0x128u, sp0 - 0x104u);
        g->ecx = sp0 - 0x104u;
        g->edx = t33;
        g->esp = sp0 - 0x114u;
        t34 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, sp0 - 0x104u, COW_IMG(0x1034f2d0u), sp0 - 0x104u, 0x104u, COW_IMG(0x10350670u));
        t35 = g->ecx;
        t36 = g->edx;
        if (t34 == 0u)
        {
            eax = t34;
        }
        else
        {
            eax = t34;
            ecx = t35;
            edx = t36;
            wr32(sp0 - 0x110u, eax);
            g->edi = self + 4u;
            g->eax = eax;
            g->esp = sp0 - 0x104u;
            t37 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, eax, rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u));
            eax = t37;
        }
        wr32(sp0 - 0x110u, 0u);
        wr32(sp0 - 0x114u, 0x7fu);
        wr32(sp0 - 0x118u, sp0 - 0x104u);
        g->esi = self;
        g->eax = eax;
        t38 = rd32(COW_IMG(0x1046393cu));
        g->esp = sp0 - 0x10cu;
        t39 = cow_fastcall(g, COW_IMG(0x10246410u), t38, sp0 - 0x104u, 3, sp0 - 0x104u, 0x7fu, 0u);
        t40 = g->ecx;
        t41 = g->edx;
        eax = t39;
        ecx = t40;
        edx = t41;
    }
    g->eax = eax;
    g->esp = sp0 - 0x10cu;
    t42 = cow_call_regs(g, COW_IMG(0x1021d440u), g->eax, g->ecx, edx, 1, 0);
    t43 = g->edx;
    if ((uint8_t)t42 != 0u) goto L_1001894e;
    eax = t42;
    edx = t43;
    wr32(self + 0x108u, 4u);
    if (rd32(COW_IMG(0x1046393cu)) == 0u) goto L_10018a34;
    ecx = rd32(COW_IMG(0x1046393cu));
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x114u, 0xffffffffu);
    g->esp = sp0 - 0x10cu;
    cow_stdcall(g, COW_IMG(0x102467c0u), 2, 0xffffffffu, 0u);
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    return;
L_1001894e: ;
    wr32(self + 0x108u, 1u);
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    return;
L_10018961: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10cu;
    cow_stdcall(g, COW_IMG(0x1021d4a0u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    d11 = cow_take_float(g);
    if (rd32(self + 0x120u) == 0u)
    {
        eax = rd32(self + 0x120u);
        ecx = t9;
        edx = t10;
        x0 = fr(g, d11 * (double)rdf32(COW_IMG(0x10329fd8u)));
    }
    else
    {
        eax = rd32(self + 0x120u);
        edx = t10;
        x0 = fr(g, d11 * (double)rdf32(COW_IMG(0x10329fd8u)));
        wrf32(eax + 0x10u, (float)x0);
        g->eax = eax;
        g->edx = edx;
        t12 = rd32(self + 0x120u);
        g->esp = sp0 - 0x10cu;
        t13 = cow_thiscall(g, COW_IMG(0x10018b50u), t12, 0);
        t14 = g->ecx;
        t15 = g->edx;
        eax = t13;
        ecx = t14;
        edx = t15;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    t16 = cow_stdcall(g, COW_IMG(0x1021d490u), 0);
    t17 = g->ecx;
    t18 = g->edx;
    if (t16 != 2u)
    {
        eax = t16;
        edx = t18;
        goto L_100189bf;
    }
    eax = t16;
    ecx = t17;
    edx = t18;
    wr32(COW_IMG(0x10456d20u), rd32(COW_IMG(0x10456d20u)) + 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    t19 = cow_stdcall(g, COW_IMG(0x1021d460u), 0);
    t20 = g->edx;
    if (rd32(self + 0x120u) != 0u)
    {
        eax = t19;
        ecx = rd32(self + 0x120u);
        edx = t20;
        g->esp = sp0 - 0x10cu;
        cow_thiscall(g, COW_IMG(0x10018b30u), ecx, 0);
    }
    wr32(self + 0x108u, 2u);
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    return;
L_100189bf: ;
    wr32(sp0 - 0x110u, 0u);
    g->eax = eax;
    g->edx = edx;
    t21 = rd32(COW_IMG(0x10455c20u));
    g->esp = sp0 - 0x10cu;
    t22 = cow_thiscall(g, COW_IMG(0x10008830u), t21, 1, 0u);
    t23 = g->ecx;
    t24 = g->edx;
    if ((uint8_t)t22 == 0u) goto L_10018a34;
    eax = t22;
    ecx = t23;
    edx = t24;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    t25 = cow_stdcall(g, COW_IMG(0x1021d460u), 0);
    t26 = g->edx;
    wr32(self + 0x108u, 3u);
    wr32(self + 0x110u, 0xf0u);
    if (rd32(COW_IMG(0x1046393cu)) == 0u) goto L_10018a34;
    eax = t25;
    ecx = rd32(COW_IMG(0x1046393cu));
    edx = t26;
    wr32(sp0 - 0x110u, 0x3cu);
    wr32(sp0 - 0x114u, 0xffffffffu);
    g->esp = sp0 - 0x10cu;
    cow_stdcall(g, COW_IMG(0x102467c0u), 2, 0xffffffffu, 0x3cu);
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    return;
L_10018a01: ;
    wr32(self + 0x108u, 3u);
    return;
L_10018a10: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10cu;
    t2 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    d5 = cow_take_float(g);
    fpush(g, d5);
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
    t7 = rd32(self + 0x110u) - t6;
    t8 = rd32(self + 0x110u);
    wr32(self + 0x110u, t7);
    if ((int32_t)(t8 - t6) >= 0) goto L_10018a34;
L_10018a2a: ;
    wr32(self + 0x108u, 4u);
L_10018a34: ;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10018850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10018850(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
