/* f_0x10289940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10289940(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 116u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, 8u);
    wr32(sp0 - 0x24u, arg2);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x10u, g->ecx, g->edx, 1, 3, sp0 - 0x10u, arg2, 8u);
    t1 = rd32(sp0 - 8u);
    esi = sp0 - 0x10u;
    edi = COW_IMG(0x103b95b4u);
    ecx = 9u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        loc_8 = t1 & 0xffffff00u;
        goto L_1028998f;
    }
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    wr32(sp0 - 0x24u, COW_IMG(0x103b95c0u));
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x1cu;
    t2 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b95c0u), sp0 - 0x10u);
    return 0xffffffffu;
L_1028998f: ;
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, arg2 + 8u);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, arg1 + 0x14u);
    g->ecx = arg1 + 0x14u;
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x1028a110u), 13, arg1 + 0x14u, 4u, 1u, arg2 + 8u, 0u, in_ebp, in_edi, in_esi, in_ebx, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), loc_8, rd32(sp0 - 4u));
    t4 = g->ecx;
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, t3);
    wr32(sp0 - 0x40u, 1u);
    wr32(sp0 - 0x44u, 4u);
    wr32(sp0 - 0x48u, arg1 + 0x18u);
    g->ecx = t4;
    g->edx = arg1 + 0x18u;
    g->esp = sp0 - 0x14u;
    t5 = cow_cdecl(g, COW_IMG(0x1028a110u), 13, arg1 + 0x18u, 4u, 1u, t3, 0u, arg1 + 0x14u, 4u, 1u, arg2 + 8u, 0u, in_ebp, in_edi, in_esi);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, t5);
    wr32(sp0 - 0x54u, 1u);
    wr32(sp0 - 0x58u, 4u);
    wr32(sp0 - 0x5cu, sp0 + 8u);
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0x28u;
    t8 = cow_cdecl(g, COW_IMG(0x1028a110u), 13, sp0 + 8u, 4u, 1u, t5, 0u, arg1 + 0x18u, 4u, 1u, rd32(sp0 - 0x3cu), 0u, arg1 + 0x14u, 4u, 1u);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, t8);
    wr32(sp0 - 0x68u, 1u);
    wr32(sp0 - 0x6cu, 4u);
    wr32(sp0 - 0x70u, arg1 + 0x20u);
    g->ecx = t9;
    g->edx = t10;
    g->esp = sp0 - 0x3cu;
    t11 = cow_cdecl(g, COW_IMG(0x1028a110u), 13, arg1 + 0x20u, 4u, 1u, t8, 0u, sp0 + 8u, 4u, 1u, rd32(sp0 - 0x50u), 0u, arg1 + 0x18u, 4u, 1u);
    t12 = g->ecx;
    t13 = g->edx;
    if ((int32_t)rd32(arg1 + 0x20u) > 0)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        ebx = t11;
        edi = rd32(arg1 + 0x20u);
        wr32(sp0 - 0x24u, edi);
        wr32(sp0 - 0x28u, arg1);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x102897e0u), 6, arg1, edi, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
        t14 = g->ecx;
        t15 = g->edx;
        t16 = rd32(arg1 + 0x24u);
        wr32(arg1 + 0x1cu, arg2);
        if ((int32_t)arg2 <= 0) goto L_10289a1a;
        eax = arg2;
        ecx = t14;
        edx = t15;
        ebp = 0u;
        edi = t16;
L_102899fd: ;
        wr32(sp0 - 0x24u, edi);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x10289b60u), 1, edi);
        t17 = g->ecx;
        t18 = g->edx;
        wr32(sp0 - 0x28u, ebx);
        wr32(sp0 - 0x2cu, edi);
        g->ecx = t17;
        g->edx = t18;
        g->esp = sp0 - 0x10u;
        t19 = cow_cdecl(g, COW_IMG(0x10289e40u), 7, edi, ebx, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
        t20 = g->ecx;
        t21 = g->edx;
        if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x1cu))
        {
            eax = rd32(arg1 + 0x1cu);
            ecx = t20;
            edx = t21;
            ebx = t19;
            ebp = ebp + 1u;
            edi = edi + 0x10u;
            goto L_102899fd;
        }
    }
L_10289a1a: ;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x20u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10289940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10289940(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
