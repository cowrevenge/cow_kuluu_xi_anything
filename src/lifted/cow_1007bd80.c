/* f_0x1007bd80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007bd80(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x101cbdf0u), in_eax, g->ecx, g->edx, 1, 1, 1u);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u) goto L_1007bd9d;
    edx = t2;
    g->edx = edx;
    return arg3;
L_1007bd9d: ;
    if (rd32(COW_IMG(0x1047d490u)) != 2u)
    {
        edx = rd32(COW_IMG(0x103551e0u));
        goto L_1007be44;
    }
    edx = rd32(COW_IMG(0x103551e0u));
    esi = rd32(edx + 4u);
    edi = COW_IMG(0x103580c8u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        eax = 0u;
    }
    else
    {
        eax = -cf + 1u - cf;
    }
    if (eax != 0u) goto L_1007be44;
    wr32(sp0 - 0x14u, in_ebx);
    ebx = COW_IMG(0x104826f0u);
    edi = 0u;
L_1007bdd5: ;
    if (rd32(ebx) != 0u)
    {
        esi = rd32(ebx);
        if (!(rd32(esi + 0x124u) >> 0xcu & 1u))
        {
            t3 = rd32(esi + 0x120u);
            if (!(t3 >> 7u & 1u))
            {
                eax = t3;
                if (!(eax >> 8u & 1u))
                {
                    if (!(rd32(esi + 0x12cu) >> 0x16u & 1u))
                    {
                        edx = rd32(esi + 0x12cu) >> 0x16u;
                    }
                    else
                    {
                        edx = rd32(esi + 0x12cu) >> 0x16u;
                        g->edx = edx;
                        g->esp = sp0 - 0x14u;
                        t4 = cow_thiscall(g, COW_IMG(0x1008e240u), esi, 0);
                        t5 = g->ecx;
                        t6 = g->edx;
                        if ((uint8_t)t4 == 0u)
                        {
                            edx = t6;
                        }
                        else
                        {
                            ecx = t5;
                            edx = t6;
                            wr32(sp0 - 0x18u, 0u);
                            wr32(sp0 - 0x1cu, 1u);
                            wr32(sp0 - 0x20u, edi);
                            wr32(sp0 - 0x24u, 1u);
                            wr32(sp0 - 0x28u, esi + 0x74u);
                            g->ebx = ebx;
                            g->edx = edx;
                            g->esp = sp0 - 0x14u;
                            cow_call_regs(g, COW_IMG(0x1007bf30u), edi, g->ecx, g->edx, 1, 5, esi + 0x74u, 1u, edi, 1u, 0u);
                            t7 = g->edx;
                            edx = t7;
                            edi = edi + 1u;
                        }
                    }
                }
            }
        }
    }
    if ((int32_t)(ebx + 4u) < (int32_t)COW_IMG(0x10482ef0u))
    {
        ebx = ebx + 4u;
        goto L_1007bdd5;
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return arg3;
L_1007be44: ;
    wr32(sp0 - 0x14u, sp0 - 8u);
    t8 = rd32(edx + 4u);
    wr32(sp0 - 0x18u, t8);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x1007bed0u), t8, 5, t8, sp0 - 8u, in_edi, in_esi, rd32(sp0 - 8u));
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        ecx = t10;
        goto L_1007be5f;
    }
    edx = t11;
    esi = sp0 - 8u;
L_1007be7d: ;
    if (rd32(COW_IMG(0x10480af0u) + rd32(esi) * 4u) == 0u) goto L_1007bebc;
    ecx = rd32(COW_IMG(0x10480af0u) + rd32(esi) * 4u);
    if (!(rd32(ecx + 0x12cu) >> 0x16u & 1u))
    {
        edx = rd32(ecx + 0x12cu) >> 0x16u;
        goto L_1007bebc;
    }
    edx = rd32(ecx + 0x12cu) >> 0x16u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t16 = cow_thiscall(g, COW_IMG(0x1008e240u), ecx, 0);
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 == 0u)
    {
        edx = t18;
        goto L_1007bebc;
    }
    eax = t16;
    ecx = t17;
    edx = t18;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, esi);
    g->ebx = in_ebx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x1007bf30u), eax, g->ecx, g->edx, 1, 5, esi, 1u, 0u, 1u, 0u);
    t19 = g->edx;
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = t19;
    return arg3;
L_1007be5f: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    t12 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x20u, t12);
    g->edx = rd32(COW_IMG(0x103551e0u));
    t13 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0x10u;
    t14 = cow_call_regs(g, COW_IMG(0x1007a1c0u), t12, g->ecx, g->edx, 1, 4, t12, 1u, 1u, 0u);
    t15 = g->edx;
    if (t14 == 0u)
    {
        edx = t15;
        goto L_1007bebc;
    }
    edx = t15;
    esi = t14;
    goto L_1007be7d;
L_1007bebc: ;
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return -arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007bd80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007bd80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
