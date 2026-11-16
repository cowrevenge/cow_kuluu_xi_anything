/* f_0x10293a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10293a20(Guest* g)
{
    double d4;
    double d8;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 176u);

    wr32(sp0 - 0x5cu, in_esi);
    if (rd32(sp0 + 8u) != 0u)
    {
        esi = rd32(sp0 + 8u);
        goto L_10293a52;
    }
    wr32(sp0 - 0x60u, 0x525u);
    wr32(sp0 - 0x64u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x68u, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x60u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb254u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x6cu, COW_IMG(0x103bb514u));
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb514u), COW_IMG(0x103b379cu));
    return;
L_10293a52: ;
    wr32(sp0 - 0x60u, in_ebx);
    wr32(sp0 - 0x64u, in_ebp);
    wr32(sp0 - 0x68u, in_edi);
    wr32(sp0 - 0x6cu, esi);
    wr32(sp0 - 0x70u, 1u);
    wr32(sp0 - 0x74u, 4u);
    wr32(sp0 - 0x78u, sp0 - 0x58u);
    wr32(sp0 - 0x58u, 3u);
    g->esp = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x58u, 4u, 1u, esi);
    d4 = (double)rdf32(arg1 + 0x30u);
    wrf64(sp0 - 0x70u, d4);
    t5 = rd32(arg1 + 0x34u) != 0u;
    wr32(sp0 - 0x54u, t5);
    t6 = rd32(arg1 + 0x24u);
    wr32(sp0 - 0x74u, t6);
    t7 = rd32(arg1 + 0x1cu);
    wr32(sp0 - 0x78u, t7);
    d8 = (double)rdf32(arg1 + 0x20u);
    wrf64(sp0 - 0x80u, d8);
    wr32(sp0 - 0x84u, 3u);
    wr32(sp0 - 0x88u, COW_IMG(0x103bb4d4u));
    wr32(sp0 - 0x8cu, sp0 - 0x50u);
    g->ebx = arg1;
    g->ecx = 3u;
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x78u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x50u, COW_IMG(0x103bb4d4u), 3u, cow_dlo(d8), cow_dhi(d8));
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x90u, esi);
    wr32(sp0 - 0x94u, 0x50u);
    wr32(sp0 - 0x98u, 1u);
    wr32(sp0 - 0x9cu, sp0 - 0x50u);
    g->ecx = t9;
    g->edx = t10;
    g->esp = sp0 - 0x8cu;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x50u, 1u, 0x50u, esi);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0xa0u, esi);
    wr32(sp0 - 0xa4u, 1u);
    wr32(sp0 - 0xa8u, 4u);
    wr32(sp0 - 0xacu, arg1 + 0x20u);
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x9cu;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, arg1 + 0x20u, 4u, 1u, esi);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x6cu, esi);
    wr32(sp0 - 0x70u, 1u);
    wr32(sp0 - 0x74u, 4u);
    wr32(sp0 - 0x78u, arg1 + 0x1cu);
    g->ecx = t13;
    g->edx = t14;
    g->esp = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, arg1 + 0x1cu, 4u, 1u, esi);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x7cu, esi);
    wr32(sp0 - 0x80u, 1u);
    wr32(sp0 - 0x84u, 4u);
    wr32(sp0 - 0x88u, arg1 + 0x24u);
    g->ecx = t15;
    g->edx = t16;
    g->esp = sp0 - 0x78u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, arg1 + 0x24u, 4u, 1u, esi);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x8cu, esi);
    wr32(sp0 - 0x90u, 1u);
    wr32(sp0 - 0x94u, 4u);
    wr32(sp0 - 0x98u, arg1 + 0x30u);
    g->edx = t18;
    g->esp = sp0 - 0x88u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, arg1 + 0x30u, 4u, 1u, esi);
    t19 = g->edx;
    wr32(sp0 - 0x9cu, esi);
    wr32(sp0 - 0xa0u, 1u);
    wr32(sp0 - 0xa4u, 4u);
    wr32(sp0 - 0xa8u, sp0 - 0x54u);
    g->edx = t19;
    g->esp = sp0 - 0x98u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x54u, 4u, 1u, esi);
    t20 = g->edx;
    if (rd32(sp0 - 0x54u) == 0u)
    {
        ecx = rd32(sp0 - 0x54u);
        edi = rd32(arg1 + 0x24u) * rd32(arg1 + 0x1cu);
        wr32(sp0 - 0x6cu, esi);
        wr32(sp0 - 0x70u, edi);
        wr32(sp0 - 0x74u, 4u);
        t35 = rd32(arg1 + 0x2cu);
        wr32(sp0 - 0x78u, t35);
        g->edx = t35;
        g->esp = sp0 - 0x68u;
        cow_cdecl(g, COW_IMG(0x10292200u), 4, t35, 4u, edi, esi);
        t36 = g->edx;
        edx = t36;
    }
    else
    {
        eax = rd32(arg1 + 0x1cu);
        ecx = rd32(sp0 - 0x54u);
        edx = t20;
        wr32(sp0 + 8u, 0u);
        if ((int32_t)eax <= 0) goto L_10293b9f;
L_10293b25: ;
        wr32(sp0 - 0x6cu, esi);
        wr32(sp0 - 0x70u, 1u);
        wr32(sp0 - 0x74u, 4u);
        t21 = rd32(rd32(arg1 + 0x34u) + rd32(sp0 + 8u) * 4u) + 8u;
        wr32(sp0 - 0x78u, t21);
        g->edx = rd32(arg1 + 0x34u);
        t22 = rd32(arg1 + 0x34u);
        t23 = rd32(rd32(arg1 + 0x34u) + rd32(sp0 + 8u) * 4u);
        g->esp = sp0 - 0x68u;
        cow_cdecl(g, COW_IMG(0x10292200u), 4, t21, 4u, 1u, esi);
        t24 = g->edx;
        wr32(sp0 - 0x7cu, esi);
        wr32(sp0 - 0x80u, 1u);
        wr32(sp0 - 0x84u, 4u);
        wr32(sp0 - 0x88u, t23 + 0xcu);
        g->ecx = t23 + 0xcu;
        g->esp = sp0 - 0x78u;
        cow_cdecl(g, COW_IMG(0x10292200u), 4, t23 + 0xcu, 4u, 1u, esi);
        t25 = g->ecx;
        wr32(sp0 - 0x8cu, esi);
        wr32(sp0 - 0x90u, 1u);
        wr32(sp0 - 0x94u, 4u);
        wr32(sp0 - 0x98u, t23 + 0x10u);
        g->ecx = t25;
        g->edx = t23 + 0x10u;
        g->esp = sp0 - 0x88u;
        cow_cdecl(g, COW_IMG(0x10292200u), 4, t23 + 0x10u, 4u, 1u, esi);
        t26 = g->ecx;
        t27 = g->edx;
        wr32(sp0 - 0x9cu, esi);
        wr32(sp0 - 0xa0u, 1u);
        wr32(sp0 - 0xa4u, 4u);
        wr32(sp0 - 0xa8u, t23);
        g->edx = t27;
        g->esp = sp0 - 0x98u;
        cow_cdecl(g, COW_IMG(0x10292200u), 4, t23, 4u, 1u, esi);
        t28 = g->edx;
        wr32(sp0 - 0x6cu, esi);
        t29 = rd32(t23 + 8u);
        wr32(sp0 - 0x70u, t29);
        wr32(sp0 - 0x74u, 1u);
        t30 = rd32(t23 + 4u);
        wr32(sp0 - 0x78u, t30);
        g->edx = t28;
        g->esp = sp0 - 0x68u;
        cow_cdecl(g, COW_IMG(0x10292200u), 4, t30, 1u, t29, esi);
        t31 = g->edx;
        t32 = rd32(sp0 + 8u) + 1u;
        t33 = rd32(arg1 + 0x1cu);
        t34 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, t32);
        if ((int32_t)(t34 + 1u) < (int32_t)t33)
        {
            ecx = t33;
            goto L_10293b25;
        }
        edx = t31;
    }
L_10293b9f: ;
    wr32(sp0 - 0x6cu, esi);
    t37 = rd32(arg1 + 0x1cu);
    wr32(sp0 - 0x70u, t37);
    wr32(sp0 - 0x74u, 4u);
    t38 = rd32(arg1 + 0x4cu);
    wr32(sp0 - 0x78u, t38);
    g->esp = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, t38, 4u, t37, esi);
    g->ebx = rd32(sp0 - 0x60u);
    g->esi = rd32(sp0 - 0x5cu);
    g->edi = rd32(sp0 - 0x68u);
    g->ebp = rd32(sp0 - 0x64u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10293a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10293a20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
