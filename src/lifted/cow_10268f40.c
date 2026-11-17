/* f_0x10268f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10268f40(Guest* g)
{
    uint32_t al_m10;
    uint32_t al_m1c;
    uint32_t al_m20;
    uint32_t al_m8;
    uint32_t al_mc;
    double d1;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t sf;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x1cu, in_esi);
    wr32(sp1 - 0x20u, in_edi);
    g->edx = in_edx;
    d1 = fr(g, rdf64(sp0 + 8u) * rdf64(COW_IMG(0x10340ad0u)));
    fpush(g, d1);
    g->esp = sp1 - 0x20u;
    t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t3 = g->edx;
    wr32(sp1 - 0x10u, t2);
    wr32(sp1 - 8u, t2);
    wr32(sp1 - 0xcu, t3);
    if (rd32(rd32(arg1 + 4u) + 0x60u) == 0u)
    {
        edx = rd32(rd32(arg1 + 4u) + 0x60u);
        loc_4 = in_ebp;
        al_m1c = in_esi;
        al_m20 = in_edi;
        al_m10 = t2;
        al_mc = t3;
        goto L_10268fc9;
    }
    eax = rd32(arg1 + 4u);
    ecx = t3;
    edx = rd32(rd32(arg1 + 4u) + 0x60u);
    edi = t3;
    al_m10 = t2;
    al_m8 = t2;
    al_mc = t3;
    if (rd32(arg1 + 0x24u) == 0u) goto L_10268f93;
    if (rd32(eax + 0x64u) == 0u)
    {
        loc_4 = in_ebp;
        al_m1c = in_esi;
        al_m20 = in_edi;
        goto L_10268fc9;
    }
    t4 = al_m10 + rd32(eax + 0x68u);
    wr32(sp1 - 8u, t4);
    edi = ecx + rd32(eax + 0x6cu) + (al_m10 + rd32(eax + 0x68u) < rd32(eax + 0x68u));
    al_m8 = t4;
L_10268f93: ;
    wr32(sp1 - 0x18u, 0u);
    wr32(sp1 - 0x14u, 0u);
    wr32(sp1 - 0x24u, sp1 - 0x18u);
    wr32(sp1 - 0x28u, edx);
    g->edx = edx;
    g->esp = sp1 - 0x20u;
    cow_thiscall(g, rd32(rd32(edx) + 0xcu), sp1 - 0x18u, 2, edx, sp1 - 0x18u);
    t5 = g->edx;
    if ((int32_t)edi > 0)
    {
        edx = t5;
        loc_4 = in_ebp;
        al_m1c = in_esi;
        al_m20 = in_edi;
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        goto L_10268fc9;
    }
    edx = t5;
    sf = (int32_t)edi < 0;
    if (sf) goto L_10268fbc;
    if (rd32(sp1 - 8u) != 0u)
    {
        edx = rd32(sp1 - 8u);
        loc_4 = rd32(sp0 - 4u);
        al_m1c = rd32(sp1 - 0x1cu);
        al_m20 = rd32(sp1 - 0x20u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        goto L_10268fc9;
    }
    edx = rd32(sp1 - 8u);
L_10268fbc: ;
    g->esi = rd32(sp1 - 0x1cu);
    g->edi = rd32(sp1 - 0x20u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return 0x80040233u;
L_10268fc9: ;
    wr32(sp1 - 0x24u, arg1 - 0xcu);
    g->eax = rd32(rd32(arg1 + 4u));
    g->edx = edx;
    t6 = rd32(rd32(arg1 + 4u));
    g->esp = sp1 - 0x20u;
    t7 = cow_thiscall(g, rd32(t6 + 0xcu), rd32(arg1 + 4u), 1, arg1 - 0xcu);
    t8 = g->edx;
    if ((int32_t)t7 < 0)
    {
        eax = t7;
        edx = t8;
    }
    else
    {
        t9 = rd32(sp1 - 0x10u);
        t10 = rd32(sp1 - 0xcu);
        wr32(arg1 + 0xcu, t9);
        t11 = rd32(arg1 + 4u);
        wr32(arg1 + 0x10u, t10);
        wr32(sp1 - 0x24u, arg1 - 0xcu);
        g->eax = rd32(t11);
        g->edx = t10;
        t12 = rd32(t11);
        g->esp = sp1 - 0x20u;
        t13 = cow_thiscall(g, rd32(t12 + 8u), t11, 1, arg1 - 0xcu);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    g->esi = rd32(sp1 - 0x1cu);
    g->edi = rd32(sp1 - 0x20u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10268f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10268f40(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
