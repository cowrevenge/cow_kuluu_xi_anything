/* f_0x10294890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10294890(Guest* g)
{
    double d6;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
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

    wr32(sp0 - 0x54u, in_esi);
    if (rd32(sp0 + 8u) != 0u)
    {
        esi = rd32(sp0 + 8u);
        goto L_102948c2;
    }
    wr32(sp0 - 0x58u, 0x24du);
    wr32(sp0 - 0x5cu, COW_IMG(0x103bb558u));
    wr32(sp0 - 0x60u, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x58u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb558u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x64u, COW_IMG(0x103bb514u));
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb514u), COW_IMG(0x103b379cu));
    return;
L_102948c2: ;
    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_ebp);
    wr32(sp0 - 0x60u, in_edi);
    wr32(sp0 - 0x64u, esi);
    wr32(sp0 - 0x68u, 1u);
    wr32(sp0 - 0x6cu, 4u);
    wr32(sp0 - 0x70u, sp0 + 8u);
    wr32(sp0 + 8u, 4u);
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 + 8u, 4u, 1u, esi);
    t4 = rd32(arg1 + 0x24u);
    wr32(sp0 - 0x64u, t4);
    t5 = rd32(arg1 + 0x1cu);
    wr32(sp0 - 0x68u, t5);
    d6 = (double)rdf32(arg1 + 0x20u);
    wrf64(sp0 - 0x70u, d6);
    t7 = rd32(sp0 + 8u);
    wr32(sp0 - 0x74u, t7);
    wr32(sp0 - 0x78u, COW_IMG(0x103bb638u));
    wr32(sp0 - 0x7cu, sp0 - 0x50u);
    g->ecx = sp0 - 0x50u;
    g->esp = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x50u, COW_IMG(0x103bb638u), t7, cow_dlo(d6), cow_dhi(d6));
    t8 = g->ecx;
    wr32(sp0 - 0x80u, esi);
    wr32(sp0 - 0x84u, 0x50u);
    wr32(sp0 - 0x88u, 1u);
    wr32(sp0 - 0x8cu, sp0 - 0x50u);
    g->ecx = t8;
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x7cu;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 0x50u, 1u, 0x50u, esi);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x90u, esi);
    wr32(sp0 - 0x94u, 1u);
    wr32(sp0 - 0x98u, 4u);
    wr32(sp0 - 0x9cu, arg1 + 0x20u);
    g->ecx = t9;
    g->edx = t10;
    g->esp = sp0 - 0x8cu;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, arg1 + 0x20u, 4u, 1u, esi);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0xa0u, esi);
    wr32(sp0 - 0xa4u, 1u);
    wr32(sp0 - 0xa8u, 4u);
    wr32(sp0 - 0xacu, arg1 + 0x1cu);
    g->esp = sp0 - 0x9cu;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, arg1 + 0x1cu, 4u, 1u, esi);
    t13 = rd32(arg1 + 0x34u);
    wr32(sp0 - 0x64u, t13);
    t14 = rd32(arg1 + 0x1cu);
    wr32(sp0 - 0x68u, t14);
    t15 = rd32(arg1 + 0x24u);
    wr32(sp0 - 0x6cu, t15);
    t16 = rd32(arg1 + 0x2cu);
    wr32(sp0 - 0x70u, t16);
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x1027d300u), 4, t16, t15, t14, t13);
    wr32(sp0 - 0x74u, esi);
    t17 = rd32(arg1 + 0x1cu);
    wr32(sp0 - 0x78u, t17);
    wr32(sp0 - 0x7cu, 4u);
    t18 = rd32(arg1 + 0x34u);
    wr32(sp0 - 0x80u, t18);
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0x70u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, t18, 4u, t17, esi);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x84u, esi);
    wr32(sp0 - 0x88u, 1u);
    wr32(sp0 - 0x8cu, 4u);
    wr32(sp0 - 0x90u, arg1 + 0x24u);
    g->edx = t20;
    g->esp = sp0 - 0x80u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, arg1 + 0x24u, 4u, 1u, esi);
    t21 = g->edx;
    wr32(sp0 - 0x94u, esi);
    t22 = rd32(arg1 + 0x24u) * rd32(arg1 + 0x1cu);
    wr32(sp0 - 0x98u, t22);
    wr32(sp0 - 0x9cu, 4u);
    t23 = rd32(arg1 + 0x2cu);
    wr32(sp0 - 0xa0u, t23);
    g->esp = sp0 - 0x90u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, t23, 4u, t22, esi);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10294890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10294890(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
