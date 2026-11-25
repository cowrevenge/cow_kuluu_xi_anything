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
    double d33;
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
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 188u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b2433u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp1 - 0x68u); in_esi = rd32(sp1 - 0x64u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x68u); g->esi = rd32(sp1 - 0x64u); goto E_102b2433;
    case 0x102b2447u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_102b2447;
    case 0x102b2451u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b2451;
    case 0x102b245bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp1 - 0x68u); in_esi = rd32(sp1 - 0x64u); in_ebx = rd32(sp1 - 0x60u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x60u); g->edi = rd32(sp1 - 0x68u); g->esi = rd32(sp1 - 0x64u); goto E_102b245b;
    case 0x102b2486u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b2486;
    case 0x102b24adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b24ad;
    case 0x102b24bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b24bc;
    case 0x102b24c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b24c8;
    case 0x102b24d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b24d3;
    case 0x102b24e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b24e1;
    case 0x102b24eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b24ea;
    case 0x102b24fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b24fd;
    case 0x102b2505u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b2505;
    case 0x102b2510u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b2510;
    case 0x102b251bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b251b;
    case 0x102b2524u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b2524;
    case 0x102b253cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b253c;
    case 0x102b2544u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b2544;
    case 0x102b254fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b254f;
    case 0x102b255au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102b255a;
    default: break;
    }
#endif

    COW_AT(102b2420)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x60u, in_ebx);
    wr32(sp1 - 0x64u, in_esi);
    wr32(sp1 - 0x68u, in_edi);
    if (arg2 != 0u) goto L_102b245b;
    COW_AT(102b2433)
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
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102b2447)
    wr32(sp1 - 0x78u, COW_IMG(0x103bebacu));
    g->esp = sp1 - 0x70u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bebacu), COW_IMG(0x103b379cu));
    COW_AT(102b2451)
    g->ebx = rd32(sp1 - 0x60u);
    g->esi = rd32(sp1 - 0x64u);
    g->edi = rd32(sp1 - 0x68u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102b245b: ;
    COW_AT(102b245b)
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
    edx = t7;
    ebx = t6;
    COW_AT(102b2486)
    wr32(sp1 - 0x7cu, ebx);
    edi = sp1 - 0x50u;
    eax = 0u;
    ecx = 0x14u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp1 - 0x80u, 2u);
    wr32(sp1 - 0x84u, COW_IMG(0x103bfbe4u));
    wr32(sp1 - 0x88u, sp1 - 0x50u);
    wr8(sp1 - 1u, 0xau);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = sp1 - 0x50u;
    g->esp = sp1 - 0x74u;
    t8 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp1 - 0x50u, COW_IMG(0x103bfbe4u), 2u, rd32(sp1 - 0x7cu), rd32(sp1 - 0x78u));
    t9 = g->ecx;
    eax = t8;
    ecx = t9;
    COW_AT(102b24ad)
    wr32(sp1 - 0x8cu, arg2);
    wr32(sp1 - 0x90u, 0x50u);
    wr32(sp1 - 0x94u, 1u);
    wr32(sp1 - 0x98u, sp1 - 0x50u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp1 - 0x50u;
    g->esp = sp1 - 0x88u;
    t10 = cow_cdecl(g, COW_IMG(0x10292200u), 4, sp1 - 0x50u, 1u, 0x50u, arg2);
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(102b24bc)
    wr32(sp1 - 0x9cu, ebx);
    wr32(sp1 - 0xa0u, COW_IMG(0x103bfbd4u));
    wr32(sp1 - 0xa4u, arg2);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x90u;
    t13 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103bfbd4u), ebx, rd32(sp1 - 0x98u), 1u);
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    COW_AT(102b24c8)
    wr32(sp1 - 0xa8u, COW_IMG(0x103bfbc8u));
    wr32(sp1 - 0xacu, arg2);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x98u;
    t16 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103bfbc8u), rd32(sp1 - 0xa4u), COW_IMG(0x103bfbd4u), rd32(sp1 - 0x9cu));
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    COW_AT(102b24d3)
    wr32(sp1 - 0x6cu, COW_IMG(0x103bf9c4u));
    wr32(sp1 - 0x70u, arg2);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x5cu;
    t19 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103bf9c4u), rd32(sp1 - 0x68u), rd32(sp1 - 0x64u), rd32(sp1 - 0x60u));
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(102b24e1)
    if ((int32_t)ebx <= 0) goto L_102b2505;
    edi = 0u;
L_102b24ea: ;
    COW_AT(102b24ea)
    t22 = rd32(edi * 4u + rd32(sp1 - 0x58u));
    wr32(sp1 - 0x6cu, t22);
    wr32(sp1 - 0x70u, COW_IMG(0x103ba458u));
    wr32(sp1 - 0x74u, arg2);
    g->ebx = ebx;
    g->eax = rd32(sp1 - 0x58u);
    g->ecx = t22;
    t23 = rd32(sp1 - 0x58u);
    g->esp = sp1 - 0x60u;
    t24 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103ba458u), t22, rd32(sp1 - 0x68u), rd32(sp1 - 0x64u));
    t25 = g->ecx;
    t26 = g->edx;
    eax = t24;
    ecx = t25;
    edx = t26;
    COW_AT(102b24fd)
    if ((int32_t)(edi + 1u) < (int32_t)ebx)
    {
        edi = edi + 1u;
        goto L_102b24ea;
    }
L_102b2505: ;
    COW_AT(102b2505)
    wr32(sp1 - 0x6cu, COW_IMG(0x103bb5c4u));
    wr32(sp1 - 0x70u, arg2);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x5cu;
    t27 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103bb5c4u), rd32(sp1 - 0x68u), rd32(sp1 - 0x64u), rd32(sp1 - 0x60u));
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    COW_AT(102b2510)
    wr32(sp1 - 0x74u, COW_IMG(0x103bf9c0u));
    wr32(sp1 - 0x78u, arg2);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x64u;
    t30 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103bf9c0u), rd32(sp1 - 0x70u), COW_IMG(0x103bb5c4u), rd32(sp1 - 0x68u));
    t31 = g->ecx;
    t32 = g->edx;
    eax = t30;
    ecx = t31;
    edx = t32;
    COW_AT(102b251b)
    if ((int32_t)ebx <= 0) goto L_102b2544;
    edi = 0u;
L_102b2524: ;
    COW_AT(102b2524)
    d33 = (double)rdf32(edi * 4u + rd32(sp1 - 0x54u));
    wrf64(sp1 - 0x70u, d33);
    wr32(sp1 - 0x74u, COW_IMG(0x103bf9bcu));
    wr32(sp1 - 0x78u, arg2);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    t34 = rd32(sp1 - 0x54u);
    g->esp = sp1 - 0x64u;
    t35 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t34, 1, 5, arg2, COW_IMG(0x103bf9bcu), cow_dlo(d33), cow_dhi(d33), rd32(sp1 - 0x68u));
    t36 = g->ecx;
    t37 = g->edx;
    eax = t35;
    ecx = t36;
    edx = t37;
    COW_AT(102b253c)
    if ((int32_t)(edi + 1u) < (int32_t)ebx)
    {
        edi = edi + 1u;
        goto L_102b2524;
    }
L_102b2544: ;
    COW_AT(102b2544)
    wr32(sp1 - 0x6cu, COW_IMG(0x103bb5c4u));
    wr32(sp1 - 0x70u, arg2);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp1 - 0x5cu;
    t38 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103bb5c4u), rd32(sp1 - 0x68u), rd32(sp1 - 0x64u), rd32(sp1 - 0x60u));
    t39 = g->ecx;
    t40 = g->edx;
    eax = t38;
    ecx = t39;
    edx = t40;
    COW_AT(102b254f)
    wr32(sp1 - 0x74u, COW_IMG(0x103b3238u));
    wr32(sp1 - 0x78u, arg2);
    g->ebx = ebx;
    g->esp = sp1 - 0x64u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b3238u), rd32(sp1 - 0x70u), COW_IMG(0x103bb5c4u), rd32(sp1 - 0x68u));
    COW_AT(102b255a)
    g->ebx = rd32(sp1 - 0x60u);
    g->esi = rd32(sp1 - 0x64u);
    g->edi = rd32(sp1 - 0x68u);
    g->ebp = rd32(sp0 - 4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b2420(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    switch (at)
    {
    case 0x102b2433u:
    {
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x68u);
        in_esi = rd32(sp1 - 0x64u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x68u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x60u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102b2447u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x74u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x74u, COW_IMG(0x103b379cu));
        (void)sp0;
        return 1;
    }
    case 0x102b2451u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102b245bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x68u);
        in_esi = rd32(sp1 - 0x64u);
        in_ebx = rd32(sp1 - 0x60u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x68u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b2486u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x78u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b24adu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x88u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b24bcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x98u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        wr32(sp1 - 0x94u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102b24c8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0xa4u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        wr32(sp1 - 0xa0u, COW_IMG(0x103bfbd4u));
        (void)sp0;
        return 1;
    }
    case 0x102b24d3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0xacu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b24e1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x70u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b24eau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x68u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b24fdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x74u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b2505u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x68u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b2510u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x70u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        wr32(sp1 - 0x6cu, COW_IMG(0x103bb5c4u));
        (void)sp0;
        return 1;
    }
    case 0x102b251bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x78u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b2524u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x68u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b253cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x78u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b2544u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x68u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b254fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x70u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        wr32(sp1 - 0x6cu, COW_IMG(0x103bb5c4u));
        (void)sp0;
        return 1;
    }
    case 0x102b255au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp1 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b2420(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b2420(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
