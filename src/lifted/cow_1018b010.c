/* f_0x1018b010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1018b010(Guest* g)
{
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(sp0 + 4u) == 0u)
    {
        eax = rd32(sp0 + 4u);
        goto L_1018b0a3;
    }
    eax = rd32(sp0 + 4u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1018a760u), COW_IMG(0x1065ca58u), 1, eax);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = (t1 & 0xffffff00u) | rd8(COW_IMG(0x1065caa6u));
    t5 = (t2 & 0xffffff00u) | rd8(COW_IMG(0x1065caa5u));
    t6 = (t3 & 0xffffff00u) | rd8(COW_IMG(0x1065caa4u));
    g->eax = t4;
    g->ecx = t5;
    g->edx = t6;
    t7 = cow_cdecl(g, COW_IMG(0x10014d90u), 3, t6, t5, t4);
    t8 = g->ecx;
    t9 = g->edx;
    t10 = (t7 & 0xffffff00u) | rd8(COW_IMG(0x1065ca92u));
    t11 = (t8 & 0xffffff00u) | rd8(COW_IMG(0x1065ca91u));
    t12 = (t9 & 0xffffff00u) | rd8(COW_IMG(0x1065ca90u));
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10014e00u), 3, t12, t11, t10);
    t13 = g->ecx;
    t14 = g->edx;
    g->eax = rd32(COW_IMG(0x1065ca94u));
    g->edx = t14;
    t15 = rd32(COW_IMG(0x1065ca94u));
    g->esp = sp0 - 0x1cu;
    t16 = cow_cdecl(g, COW_IMG(0x10014e80u), 1, t15);
    t17 = g->edx;
    g->edx = t17;
    g->esp = sp0 - 0x20u;
    t18 = cow_cdecl(g, COW_IMG(0x10014e60u), 1, rd32(COW_IMG(0x1065ca98u)));
    t19 = g->edx;
    if (rd32(COW_IMG(0x1065cb04u)) == 0u)
    {
        eax = t18;
    }
    else
    {
        eax = t18;
        ecx = rd32(COW_IMG(0x1065cb04u));
        edx = t19;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10188a10u), eax, ecx, edx, 1, 0);
        t20 = g->ecx;
        t21 = g->edx;
        g->edx = t21;
        t22 = cow_stdcall(g, COW_IMG(0x10188900u), 0);
        t23 = g->edx;
        if (t22 == 0u)
        {
            eax = t22;
            goto L_1018b0a1;
        }
        eax = t22;
        edx = t23;
        esi = t22;
L_1018b08e: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t24 = cow_thiscall(g, COW_IMG(0x101880c0u), esi, 1, COW_IMG(0x1065ca58u));
        t25 = g->edx;
        if (rd32(esi + 4u) != 0u)
        {
            eax = t24;
            edx = t25;
            esi = rd32(esi + 4u);
            goto L_1018b08e;
        }
        eax = t24;
    }
L_1018b0a1: ;
    return eax;
L_1018b0a3: ;
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t26 = cow_cdecl(g, COW_IMG(0x10014d90u), 3, 0x80u, 0x80u, 0x80u);
    t27 = g->ecx;
    t28 = g->edx;
    g->ecx = t27;
    g->edx = t28;
    g->esp = sp0 - 0x10u;
    t29 = cow_cdecl(g, COW_IMG(0x10014e00u), 3, 0x80u, 0x80u, 0x80u);
    t30 = g->ecx;
    t31 = g->edx;
    g->ecx = t30;
    g->edx = t31;
    g->esp = sp0 - 0x1cu;
    t32 = cow_cdecl(g, COW_IMG(0x10014e80u), 1, 0x43000000u);
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 + 4u, 0x43000000u);
    g->esp = sp0;
    g->edx = t34;
    return cow_tailcall(g, COW_IMG(0x10014e60u), t32, t33, t34);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018b010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018b010(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
