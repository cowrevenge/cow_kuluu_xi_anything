/* f_0x101bcf80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_101bcf80(Guest* g)
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
    uint32_t loc_2048;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 8316u);

    wr32(sp0 - 0x2044u, self);
    if (rd8(self + 5u) != 0u) goto L_101bcfa0;
    return 0u;
L_101bcfa0: ;
    wr32(sp0 - 0x204cu, in_ebx);
    wr32(sp0 - 0x2050u, in_ebp);
    wr32(sp0 - 0x2054u, in_esi);
    wr32(sp0 - 0x2058u, in_edi);
    wr32(sp0 - 0x205cu, 0x10u);
    wr32(sp0 - 0x2060u, sp0 - 0x2040u);
    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t1 = ~ecx - 1u;
    wr32(sp0 - 0x2064u, t1);
    wr32(sp0 - 0x2068u, arg1);
    g->esp = sp0 - 0x203cu;
    cow_call_regs(g, COW_IMG(0x1011dee0u), g->eax, t1, arg1, 1, 11, arg1, t1, sp0 - 0x2040u, 0x10u, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x2048u), self, rd32(sp0 - 0x2040u));
    wr32(sp0 - 0x206cu, 0x400u);
    wr32(sp0 - 0x2070u, sp0 - 0x2000u);
    edi = arg2;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t2 = ~ecx - 1u;
    wr32(sp0 - 0x2074u, t2);
    wr32(sp0 - 0x2078u, arg2);
    g->esp = sp0 - 0x204cu;
    cow_call_regs(g, COW_IMG(0x1011dee0u), g->eax, t2, arg2, 1, 11, arg2, t2, sp0 - 0x2000u, 0x400u, arg1, rd32(sp0 - 0x2064u), sp0 - 0x2040u, 0x10u, in_edi, in_esi, in_ebp);
    edi = sp0 - 0x2020u;
    eax = 0u;
    ecx = 8u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = sp0 - 0x1800u;
    ecx = 0x200u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = sp0 - 0x800u;
    ecx = 0x200u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = sp0 - 0x1000u;
    ecx = 0x200u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd8(self + 4u) == 0u)
    {
        ebx = 0u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 4u);
        wr32(sp0 - 0x2048u, 0u);
        edx = self;
        edi = 0u;
        loc_2048 = 0u;
L_101bd03e: ;
        if (rd16(edi * 2u + sp0 - 0x2040u) == 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(edi * 2u + sp0 - 0x2040u);
            goto L_101bd086;
        }
        eax = (eax & 0xffff0000u) | rd16(edi * 2u + sp0 - 0x2040u);
        wr32(sp0 - 0x205cu, eax);
        g->ecx = rd32(sp0 - 0x2044u);
        g->edx = edx;
        t3 = rd32(sp0 - 0x2044u);
        g->esp = sp0 - 0x2058u;
        t4 = cow_call_regs(g, COW_IMG(0x101be030u), eax, g->ecx, g->edx, 0, 1, eax);
        t5 = g->ecx;
        t6 = g->edx;
        if ((uint8_t)t4 == 0u)
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            edi = rd32(sp0 - 0x2048u);
            wr16(edi * 2u + sp0 - 0x2020u, rd16(edi * 2u + sp0 - 0x2040u));
        }
        else
        {
            eax = t4;
            edx = t6;
            edi = rd32(sp0 - 0x2048u);
            t7 = (eax & 0xffff0000u) | rd16(edi * 2u + sp0 - 0x2040u);
            wr32(sp0 - 0x205cu, t7);
            g->eax = t7;
            g->edx = edx;
            g->esp = sp0 - 0x2058u;
            t8 = cow_stdcall(g, COW_IMG(0x101be0b0u), 1, t7);
            t9 = g->edx;
            wr16(edi * 2u + sp0 - 0x2020u, (uint16_t)t8);
            eax = t8;
            edx = t9;
        }
        wr32(sp0 - 0x2048u, edi + 1u);
        if (edi + 1u < 0x10u)
        {
            loc_2048 = edi + 1u;
            edi = edi + 1u;
            goto L_101bd03e;
        }
L_101bd08d: ;
        wr32(sp0 - 0x2048u, 0u);
        ebx = 0u;
        ebp = 0u;
        esi = 0u;
        edi = 0u;
        loc_2048 = 0u;
L_101bd093: ;
        if (rd16(edi * 2u + sp0 - 0x2000u) == 0u) goto L_101bd13b;
        eax = (eax & 0xffff0000u) | rd16(edi * 2u + sp0 - 0x2000u);
        wr32(sp0 - 0x205cu, eax);
        g->eax = eax;
        g->esp = sp0 - 0x2050u;
        t10 = cow_call_regs(g, COW_IMG(0x10312beeu), g->eax, 0u, edx, 1, 3, eax, rd32(sp0 - 0x2058u), rd32(sp0 - 0x2054u));
        t11 = g->edx;
        if (t10 == 0u)
        {
            eax = t10;
            edx = t11;
            t13 = (eax & 0xffff0000u) | rd16(edi * 2u + sp0 - 0x2000u);
            wr32(sp0 - 0x205cu, t13);
            g->ecx = rd32(sp0 - 0x2044u);
            g->edx = edx;
            t14 = rd32(sp0 - 0x2044u);
            g->esp = sp0 - 0x2058u;
            t15 = cow_call_regs(g, COW_IMG(0x101be030u), t13, g->ecx, g->edx, 0, 1, t13);
            t16 = g->ecx;
            t17 = g->edx;
            if ((uint8_t)t15 == 0u)
            {
                eax = t15;
                edx = t17;
                edi = rd32(sp0 - 0x2048u);
                t22 = rd16(edi * 2u + sp0 - 0x2000u);
                wr16(esi * 2u + sp0 - 0x1800u, (uint16_t)t22);
                wr16(ebp * 2u + sp0 - 0x800u, (uint16_t)t22);
                wr16(ebx * 2u + sp0 - 0x1000u, (uint16_t)t22);
                eax = (eax & 0xffff0000u) | t22;
                ebx = ebx + 1u;
                ebp = ebp + 1u;
                esi = esi + 1u;
            }
            else
            {
                eax = t15;
                ecx = t16;
                edx = t17;
                edi = rd32(sp0 - 0x2048u);
                t18 = (ecx & 0xffff0000u) | rd16(edi * 2u + sp0 - 0x2000u);
                wr32(sp0 - 0x205cu, t18);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x2058u;
                t19 = cow_stdcall(g, COW_IMG(0x101be0b0u), 1, t18);
                t20 = g->edx;
                t21 = rd16(edi * 2u + sp0 - 0x2000u);
                wr16(esi * 2u + sp0 - 0x1800u, (uint16_t)t19);
                wr16(ebx * 2u + sp0 - 0x1000u, (uint16_t)t19);
                wr16(ebp * 2u + sp0 - 0x800u, (uint16_t)t21);
                eax = t19;
                edx = (t20 & 0xffff0000u) | t21;
                ebx = ebx + 1u;
                ebp = ebp + 1u;
                esi = esi + 1u;
            }
        }
        else
        {
            eax = t10;
            edx = t11;
            t12 = rd16(edi * 2u + sp0 - 0x2000u);
            wr16(esi * 2u + sp0 - 0x1800u, (uint16_t)t12);
            edx = (edx & 0xffff0000u) | t12;
            esi = esi + 1u;
        }
        wr32(sp0 - 0x2048u, edi + 1u);
        if (edi + 1u < 0x400u)
        {
            loc_2048 = edi + 1u;
            edi = edi + 1u;
            goto L_101bd093;
        }
    }
L_101bd153: ;
    wr32(sp0 - 0x205cu, sp0 - 0x1000u);
    wr32(sp0 - 0x2060u, sp0 - 0x800u);
    wr32(sp0 - 0x2064u, sp0 - 0x1800u);
    wr32(sp0 - 0x2068u, sp0 - 0x2000u);
    wr32(sp0 - 0x206cu, sp0 - 0x2020u);
    wr32(sp0 - 0x2070u, sp0 - 0x2040u);
    g->ebx = ebx;
    g->esp = sp0 - 0x2058u;
    t23 = cow_call_regs(g, COW_IMG(0x101bd360u), sp0 - 0x2000u, rd32(sp0 - 0x2044u), g->edx, 0, 6, sp0 - 0x2040u, sp0 - 0x2020u, sp0 - 0x2000u, sp0 - 0x1800u, sp0 - 0x800u, sp0 - 0x1000u);
    if ((uint8_t)t23 != 1u)
    {
        ebx = rd32(sp0 - 0x204cu);
        ebp = rd32(sp0 - 0x2050u);
        esi = rd32(sp0 - 0x2054u);
        edi = rd32(sp0 - 0x2058u);
        goto L_101bd199;
    }
    ebx = rd32(sp0 - 0x204cu);
    ebp = rd32(sp0 - 0x2050u);
    esi = rd32(sp0 - 0x2054u);
    edi = rd32(sp0 - 0x2058u);
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    return 2u;
L_101bd086: ;
    wr16(edi * 2u + sp0 - 0x2020u, 0u);
    goto L_101bd08d;
L_101bd13b: ;
    wr16(esi * 2u + sp0 - 0x1800u, 0u);
    wr16(ebp * 2u + sp0 - 0x800u, 0u);
    wr16(ebx * 2u + sp0 - 0x1000u, 0u);
    goto L_101bd153;
L_101bd199: ;
    wr32(sp0 - 0x204cu, sp0 - 0x1000u);
    wr32(sp0 - 0x2050u, sp0 - 0x800u);
    wr32(sp0 - 0x2054u, sp0 - 0x1800u);
    wr32(sp0 - 0x2058u, sp0 - 0x2000u);
    wr32(sp0 - 0x205cu, sp0 - 0x2020u);
    wr32(sp0 - 0x2060u, sp0 - 0x2040u);
    g->ebx = ebx;
    g->esp = sp0 - 0x2048u;
    t24 = cow_call_regs(g, COW_IMG(0x101bd1e0u), sp0 - 0x2000u, rd32(sp0 - 0x2044u), g->edx, 0, 6, sp0 - 0x2040u, sp0 - 0x2020u, sp0 - 0x2000u, sp0 - 0x1800u, sp0 - 0x800u, sp0 - 0x1000u);
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    return -((uint8_t)((uint8_t)t24 - 1u) != 0u) + 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bcf80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101bcf80(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
