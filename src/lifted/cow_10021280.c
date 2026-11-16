/* f_0x10021280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10021280(Guest* g)
{
    double d38;
    double d39;
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 124u);

    wr32(sp0 - 0x64u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x64u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        esi = t1;
        goto L_100212cc;
    }
    ecx = t4;
    edx = t5;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x64u;
    t6 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x68u, t6 + 0x44u);
    wr32(sp0 - 0x6cu, arg1);
    g->ecx = t7;
    g->edx = t8;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg1, t6 + 0x44u);
    t9 = g->ecx;
    t10 = g->edx;
    g->edx = t10;
    g->esp = sp0 - 0x6cu;
    t11 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t12 = g->edx;
    wr32(sp0 - 0x70u, t11 + 0x50u);
    wr32(sp0 - 0x74u, arg2);
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg2, t11 + 0x50u);
    return;
L_100212cc: ;
    if (rd8(COW_IMG(0x10487f80u)) == 0u) goto L_100212ed;
    wr32(sp0 - 0x68u, arg2);
    wr32(sp0 - 0x6cu, arg1);
    wr32(sp0 - 0x70u, esi);
    g->esp = sp0 - 0x68u;
    cow_call_regs(g, COW_IMG(0x10020ba0u), arg1, g->ecx, g->edx, 1, 2, esi, arg1);
    return;
L_100212ed: ;
    wr32(sp0 - 0x68u, in_edi);
    g->edx = edx;
    g->esp = sp0 - 0x68u;
    t13 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t14 = g->edx;
    t15 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    g->edx = rd32(esi);
    t16 = rd32(esi);
    t17 = cow_thiscall(g, rd32(t16 + 0x1c0u), esi, 0);
    t18 = g->edx;
    t19 = rd32(t17 + 4u);
    wr32(sp0 - 0x6cu, t19);
    cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t19);
    wr32(sp0 - 0x6cu, sp0 - 0x50u);
    wr32(sp0 - 0x70u, 2u);
    g->eax = sp0 - 0x50u;
    g->edx = rd32(esi);
    t20 = rd32(esi);
    t21 = cow_thiscall(g, rd32(t20 + 0x1c8u), esi, 2, 2u, sp0 - 0x50u);
    t22 = g->edx;
    wr32(sp0 - 0x6cu, COW_IMG(0x10351260u));
    wr32(sp0 - 0x70u, sp0 - 0x60u);
    t23 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x60u, COW_IMG(0x10351260u));
    wr32(sp0 - 0x6cu, sp0 - 0x60u);
    g->edx = sp0 - 0x60u;
    cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, sp0 - 0x60u);
    t24 = g->edx;
    g->eax = rd32(esi);
    g->edx = t24;
    t25 = rd32(esi);
    t26 = cow_thiscall(g, rd32(t25 + 0x1bcu), esi, 0);
    t27 = g->edx;
    wr32(sp0 - 0x6cu, t26);
    wr32(sp0 - 0x70u, sp0 - 0x60u);
    cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x60u, t26);
    t28 = rd32(sp0 - 0x4cu);
    wr32(sp0 - 0x5cu, t28);
    wr32(sp0 - 0x74u, sp0 - 0x60u);
    wr32(sp0 - 0x78u, arg1);
    g->eax = sp0 - 0x60u;
    g->esp = sp0 - 0x70u;
    t29 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg1, sp0 - 0x60u);
    g->edx = rd32(esi);
    t30 = rd32(esi);
    g->esp = sp0 - 0x68u;
    t31 = cow_thiscall(g, rd32(t30 + 0x1bcu), esi, 0);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0x6cu, t31);
    wr32(sp0 - 0x70u, arg2);
    g->edx = t33;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg2, t31);
    t34 = g->edx;
    wr32(sp0 - 0x6cu, 1u);
    g->eax = rd32(esi);
    g->edx = t34;
    t35 = rd32(esi);
    t36 = cow_thiscall(g, rd32(t35 + 0x3c8u), esi, 1, 1u);
    t37 = g->edx;
    if (t36 == 0u)
    {
        eax = t36;
        edx = t37;
        goto L_100213bf;
    }
    eax = t36;
    edx = t37;
    d38 = fr(g, (double)rdf32(arg2 + 4u) - fr(g, fr(g, (double)rdf32(eax + 4u) - (double)rdf32(eax)) * (double)rdf32(COW_IMG(0x10329a30u))));
    wrf32(arg2 + 4u, (float)d38);
    g->esp = sp0 - 0x68u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->esi = rd32(sp0 - 0x64u);
    g->edi = rd32(sp0 - 0x68u);
    return;
L_100213bf: ;
    d39 = fr(g, (double)rdf32(arg2 + 4u) - (double)rdf32(COW_IMG(0x1032a404u)));
    wrf32(arg2 + 4u, (float)d39);
    g->esp = sp0 - 0x68u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->esi = rd32(sp0 - 0x64u);
    g->edi = rd32(sp0 - 0x68u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10021280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10021280(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
