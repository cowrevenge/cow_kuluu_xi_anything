/* f_0x102b2420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b2420(Guest* g)
{
    double d24;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 188u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x60u, in_ebx);
    wr32(sp1 - 0x64u, in_esi);
    wr32(sp1 - 0x68u, in_edi);
    if (arg2 != 0u) goto L_102b245b;
    wr32(sp1 - 0x6cu, 0x330u);
    wr32(sp1 - 0x70u, COW_IMG(0x103bf904u));
    wr32(sp1 - 0x74u, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp1 - 0x6cu;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp1 - 0x78u, COW_IMG(0x103bebacu));
    g->esp = sp1 - 0x70u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bebacu), COW_IMG(0x103b379cu));
    return;
L_102b245b: ;
    wr32(sp1 - 0x6cu, arg2);
    wr32(sp1 - 0x70u, 1u);
    wr32(sp1 - 0x74u, 4u);
    wr32(sp1 - 0x78u, sp1 - 0x5cu);
    t4 = rd32(arg1 + 0x30u);
    wr32(sp1 - 0x58u, t4);
    t5 = rd32(arg1 + 0x38u);
    wr32(sp1 - 0x54u, t5);
    wr32(sp1 - 0x5cu, 2u);
    g->edx = t5;
    t6 = rd32(arg1 + 0x50u);
    g->esp = sp1 - 0x68u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp1 - 0x5cu, 4u, 1u, arg2);
    t7 = g->edx;
    wr32(sp1 - 0x7cu, t6);
    edi = sp1 - 0x50u;
    eax = 0u;
    ecx = 0x14u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp1 - 0x80u, 2u);
    wr32(sp1 - 0x84u, COW_IMG(0x103bfbe4u));
    wr32(sp1 - 0x88u, sp1 - 0x50u);
    g->ecx = sp1 - 0x50u;
    g->esp = sp1 - 0x74u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp1 - 0x50u, COW_IMG(0x103bfbe4u), 2u, t6, rd32(sp1 - 0x78u));
    t8 = g->ecx;
    wr32(sp1 - 0x8cu, arg2);
    wr32(sp1 - 0x90u, 0x50u);
    wr32(sp1 - 0x94u, 1u);
    wr32(sp1 - 0x98u, sp1 - 0x50u);
    g->ecx = t8;
    g->edx = sp1 - 0x50u;
    g->esp = sp1 - 0x88u;
    cow_cdecl(g, COW_IMG(0x10292200u), 4, sp1 - 0x50u, 1u, 0x50u, arg2);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp1 - 0x9cu, t6);
    wr32(sp1 - 0xa0u, COW_IMG(0x103bfbd4u));
    wr32(sp1 - 0xa4u, arg2);
    g->ebx = t6;
    g->ecx = t9;
    g->esp = sp1 - 0x90u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t10, 1, 5, arg2, COW_IMG(0x103bfbd4u), t6, rd32(sp1 - 0x98u), 1u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp1 - 0xa8u, COW_IMG(0x103bfbc8u));
    wr32(sp1 - 0xacu, arg2);
    g->ebx = t6;
    g->ecx = t11;
    g->esp = sp1 - 0x98u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t12, 1, 5, arg2, COW_IMG(0x103bfbc8u), arg2, COW_IMG(0x103bfbd4u), rd32(sp1 - 0x9cu));
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp1 - 0x6cu, COW_IMG(0x103bf9c4u));
    wr32(sp1 - 0x70u, arg2);
    g->ebx = t6;
    g->ecx = t13;
    g->esp = sp1 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t14, 1, 5, arg2, COW_IMG(0x103bf9c4u), in_edi, in_esi, in_ebx);
    t15 = g->ecx;
    t16 = g->edx;
    if ((int32_t)t6 <= 0)
    {
        ecx = t15;
        edx = t16;
        ebx = t6;
        goto L_102b2505;
    }
    edx = t16;
    ebx = t6;
    edi = 0u;
L_102b24ea: ;
    t17 = rd32(edi * 4u + rd32(sp1 - 0x58u));
    wr32(sp1 - 0x6cu, t17);
    wr32(sp1 - 0x70u, COW_IMG(0x103ba458u));
    wr32(sp1 - 0x74u, arg2);
    g->ebx = ebx;
    g->ecx = t17;
    g->esp = sp1 - 0x60u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103ba458u), t17, rd32(sp1 - 0x68u), rd32(sp1 - 0x64u));
    t18 = g->ecx;
    t19 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)ebx)
    {
        edx = t19;
        edi = edi + 1u;
        goto L_102b24ea;
    }
    ecx = t18;
    edx = t19;
L_102b2505: ;
    wr32(sp1 - 0x6cu, COW_IMG(0x103bb5c4u));
    wr32(sp1 - 0x70u, arg2);
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp1 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103bb5c4u), rd32(sp1 - 0x68u), rd32(sp1 - 0x64u), rd32(sp1 - 0x60u));
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp1 - 0x74u, COW_IMG(0x103bf9c0u));
    wr32(sp1 - 0x78u, arg2);
    g->ebx = ebx;
    g->ecx = t20;
    g->esp = sp1 - 0x64u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t21, 1, 5, arg2, COW_IMG(0x103bf9c0u), arg2, COW_IMG(0x103bb5c4u), rd32(sp1 - 0x68u));
    t22 = g->ecx;
    t23 = g->edx;
    if ((int32_t)ebx <= 0)
    {
        ecx = t22;
        edx = t23;
        goto L_102b2544;
    }
    ecx = t22;
    edi = 0u;
L_102b2524: ;
    d24 = (double)rdf32(edi * 4u + rd32(sp1 - 0x54u));
    wrf64(sp1 - 0x70u, d24);
    wr32(sp1 - 0x74u, COW_IMG(0x103bf9bcu));
    wr32(sp1 - 0x78u, arg2);
    g->ebx = ebx;
    g->ecx = ecx;
    t25 = rd32(sp1 - 0x54u);
    g->esp = sp1 - 0x64u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t25, 1, 5, arg2, COW_IMG(0x103bf9bcu), cow_dlo(d24), cow_dhi(d24), rd32(sp1 - 0x68u));
    t26 = g->ecx;
    t27 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)ebx)
    {
        ecx = t26;
        edi = edi + 1u;
        goto L_102b2524;
    }
    ecx = t26;
    edx = t27;
L_102b2544: ;
    wr32(sp1 - 0x6cu, COW_IMG(0x103bb5c4u));
    wr32(sp1 - 0x70u, arg2);
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp1 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103bb5c4u), rd32(sp1 - 0x68u), rd32(sp1 - 0x64u), rd32(sp1 - 0x60u));
    t28 = g->ecx;
    t29 = g->edx;
    wr32(sp1 - 0x74u, COW_IMG(0x103b3238u));
    wr32(sp1 - 0x78u, arg2);
    g->ebx = ebx;
    g->esp = sp1 - 0x64u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t29, 1, 5, arg2, COW_IMG(0x103b3238u), arg2, COW_IMG(0x103bb5c4u), rd32(sp1 - 0x68u));
    g->ebx = rd32(sp1 - 0x60u);
    g->esi = rd32(sp1 - 0x64u);
    g->edi = rd32(sp1 - 0x68u);
    g->ebp = rd32(sp0 - 4u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b2420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b2420(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
