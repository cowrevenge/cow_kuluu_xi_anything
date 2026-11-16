/* f_0x102ac560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102ac560(Guest* g)
{
    double d18;
    double d19;
    double d20;
    double d22;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    int64_t q15;
    int64_t q7;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t21;
    uint32_t t23;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(sp0 + 4u) + 0x48u);
    t2 = rd32(sp0 + 4u);
    wr32(COW_IMG(0x109aaab8u), t1);
    if (rd32(t2 + 0x34u) != 0u)
    {
        eax = rd32(t2 + 0x34u);
        edi = t1;
        t3 = rd32(eax + 0x54u);
        wr32(sp0 + 4u, t3);
    }
    else
    {
        eax = rd32(t2 + 0x34u);
        edi = t1;
        wr32(sp0 + 4u, eax);
    }
    t4 = rd32(edi);
    wr32(COW_IMG(0x109aaab8u), edi + 4u);
    if (t4 == 0u)
    {
        ecx = self;
        edx = in_edx;
        loc_4 = self;
    }
    else
    {
        eax = t4;
        edi = edi + 4u;
        edx = in_edx;
        ebx = in_ebx;
        ebp = rd32(sp0 + 0x10u);
L_102ac59d: ;
        t5 = rd32(edi);
        wr32(sp0 + 0x10u, t5);
        wr32(COW_IMG(0x109aaab8u), edi + 4u);
        if ((int32_t)t5 <= 0)
        {
            ecx = t5;
            edi = edi + 4u;
            loc_4 = eax - 1u;
            eax = eax - 1u;
            ecx = -ecx;
        }
        else
        {
            ecx = t5;
            edi = edi + 4u;
            loc_4 = eax - 1u;
            eax = eax - 1u;
            t6 = rd32(arg2 + eax * 4u);
            wr32(COW_IMG(0x109aaac4u), t6);
            q7 = (int64_t)cow_muls(0x55555556u, ecx);
            t8 = cow_qhi(q7) + (cow_qhi(q7) >> 0x1fu);
            wr32(COW_IMG(0x109aaab4u), t8);
            if (rd32(arg5) == 1u)
            {
                edx = t8;
                if ((int32_t)edx <= 0)
                {
                    ebx = 0u;
                }
                else
                {
                    ebx = 0u;
                    esi = 0u;
L_102ac66d: ;
                    d18 = fr(g, fr(g, fr(g, (double)rdf32(rd32(sp0 + 4u) + rd32(edi + esi + 8u) * 0xcu) + (double)rdf32(rd32(sp0 + 4u) + rd32(edi + esi + 4u) * 0xcu)) + (double)rdf32(rd32(edi + esi) * 0xcu + rd32(sp0 + 4u))) - fr(g, (double)rdf32(arg3) * (double)rdf32(COW_IMG(0x10329d38u))));
                    d19 = fr(g, fr(g, (double)rdf32(rd32(sp0 + 4u) + rd32(edi + esi + 8u) * 0xcu + 4u) + (double)rdf32(rd32(sp0 + 4u) + rd32(edi + esi + 4u) * 0xcu + 4u)) + (double)rdf32(rd32(edi + esi) * 0xcu + rd32(sp0 + 4u) + 4u));
                    d20 = fr(g, fr(g, (double)rdf32(rd32(sp0 + 4u) + rd32(edi + esi + 8u) * 0xcu + 8u) + (double)rdf32(rd32(sp0 + 4u) + rd32(edi + esi + 4u) * 0xcu + 8u)) + (double)rdf32(rd32(edi + esi) * 0xcu + rd32(sp0 + 4u) + 8u));
                    t21 = rd32(COW_IMG(0x109aaac4u));
                    d22 = fr(g, fr(g, fr(g, fr(g, d20 - fr(g, (double)rdf32(arg3 + 8u) * (double)rdf32(COW_IMG(0x10329d38u)))) * (double)rdf32(ebp + 8u)) + fr(g, fr(g, d19 - fr(g, (double)rdf32(arg3 + 4u) * (double)rdf32(COW_IMG(0x10329d38u)))) * (double)rdf32(ebp + 4u))) + fr(g, d18 * (double)rdf32(ebp)));
                    wrf32(ebx * 4u + t21, (float)d22);
                    if ((int32_t)(ebx + 1u) < (int32_t)rd32(COW_IMG(0x109aaab4u)))
                    {
                        ebx = ebx + 1u;
                        esi = esi + 0xcu;
                        goto L_102ac667;
                    }
                    edx = t21;
                    ebx = ebx + 1u;
                    ecx = rd32(sp0 + 0x10u);
                    edi = rd32(COW_IMG(0x109aaab8u));
                }
                eax = loc_4;
            }
            else
            {
                eax = rd32(arg5) - 1u;
                edx = t8;
                if (eax == 1u)
                {
                    eax = eax - 1u;
                    g->edi = edi;
                    g->edx = edx - 1u;
                    g->esp = sp0 - 0xcu;
                    cow_thiscall_cdecl(g, COW_IMG(0x102ac730u), ecx, 4, 0u, edx - 1u, in_esi, in_ebp);
                    t13 = g->edx;
                    t14 = rd32(COW_IMG(0x109aaab4u)) - 1u;
                    q15 = (int64_t)cow_muls(0x55555556u, rd32(COW_IMG(0x109aaab4u)) * 2u - 2u);
                    t16 = cow_qhi(q15) + (cow_qhi(q15) >> 0x1fu);
                    g->edx = t16;
                    g->esp = sp0;
                    cow_cdecl(g, COW_IMG(0x102aca50u), 9, t16, t14, 0u, edx - 1u, in_esi, in_ebp, in_ebx, in_edi, loc_4);
                    t17 = g->edx;
                    eax = loc_4;
                    ecx = rd32(sp0 + 0x10u);
                    edx = t17;
                    edi = rd32(COW_IMG(0x109aaab8u));
                }
                else
                {
                    eax = eax - 1u;
                    g->ebx = ebx;
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x18u;
                    t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be980u));
                    t10 = g->ecx;
                    t11 = g->edx;
                    g->ebx = ebx;
                    g->edx = t11;
                    g->esp = sp0 - 0x1cu;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bebccu), COW_IMG(0x103b379cu));
                    t12 = g->edx;
                    eax = loc_4;
                    ecx = rd32(sp0 + 0x10u);
                    edx = t12;
                    edi = rd32(COW_IMG(0x109aaab8u));
                }
            }
        }
        t23 = ecx * 4u + edi;
        wr32(COW_IMG(0x109aaab8u), t23);
        if (eax != 0u)
        {
            edi = t23;
            goto L_102ac59d;
        }
    }
    g->ebx = in_ebx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102acb40u), 1, arg5);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
L_102ac667: ;
    edi = rd32(COW_IMG(0x109aaab8u));
    goto L_102ac66d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ac560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ac560(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
