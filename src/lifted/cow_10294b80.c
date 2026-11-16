/* f_0x10294b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10294b80(Guest* g)
{
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_4_f;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 4u);
    t2 = rd32(t1 + 0x2cu);
    t3 = rd32(t1 + 0x28u);
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x10295670u), 1, t1);
    t5 = rd32(t1 + 0x30u);
    wr32(sp0 + 4u, t4);
    edi = t5;
    eax = 0u;
    ecx = t4;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((int32_t)t4 <= 0)
    {
        edx = t4;
        goto L_10294c87;
    }
    edx = t4;
    ebx = t2;
    ebp = t3;
    esi = t1;
    if (ebp == 0u) goto L_10294c5e;
    d6 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(esi + 0x20u)) / (double)rdf32(esi + 0x24u));
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t7 = cow_call_regs(g, COW_IMG(0x10284f70u), g->eax, g->ecx, edx, 1, 3, ebp, cow_f2bits(d6), in_edi);
    t8 = g->ecx;
    t9 = g->edx;
    if (ebx == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        loc_4_f = d6;
        goto L_10294c35;
    }
    eax = t7;
    edx = t9;
    loc_4_f = d6;
    if ((int32_t)rd32(ebx + 0x1cu) <= 0)
    {
        ecx = rd32(ebx + 0x1cu);
        goto L_10294c35;
    }
    ecx = rd32(ebx + 0x1cu);
    if (ecx != rd32(ebp + 0x1cu)) goto L_10294c04;
    t10 = rd32(esi + 0x30u);
    t11 = rd32(sp0 + 4u);
    g->edx = arg2;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10294cc0u), t11, g->ecx, g->edx, 1, 5, ebx, t11, eax, arg2, t10);
    t12 = g->edx;
    g->edx = t12;
    return rd32(esi + 0x30u);
L_10294c04: ;
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb674u));
    t14 = rd32(ebp + 0x1cu);
    t15 = rd32(ebx + 0x1cu);
    g->edx = t15;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb788u), t15);
    t16 = g->edx;
    g->edx = t16;
    return 0u;
L_10294c35: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t17 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb674u));
    t18 = g->ecx;
    t19 = g->edx;
    g->edx = t19;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb774u), COW_IMG(0x103b379cu));
    t20 = g->edx;
    g->edx = t20;
    return 0u;
L_10294c5e: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t21 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb674u));
    t22 = g->ecx;
    t23 = g->edx;
    g->edx = t23;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb75cu), COW_IMG(0x103b379cu));
    t24 = g->edx;
    g->edx = t24;
    return 0u;
L_10294c87: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb674u));
    t25 = g->ecx;
    t26 = g->edx;
    t27 = rd32(sp0 + 4u);
    g->edx = t26;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb73cu), t27);
    t28 = g->edx;
    g->edx = t28;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10294b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10294b80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
