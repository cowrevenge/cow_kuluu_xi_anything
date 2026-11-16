/* f_0x10019730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10019730(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0x30u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x30u);
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x30u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x28u;
        cow_stdcall(g, COW_IMG(0x10017d50u), 0);
        t1 = g->ecx;
        t2 = g->edx;
        t3 = rd8(self + 0x30u);
        g->eax = t3;
        g->ecx = t1;
        g->edx = t2;
        g->esp = sp0 - 0x30u;
        t4 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    if (rd8(self + 0x31u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x31u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x31u);
        if (rd16(self + 0x34u) != 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(self + 0x34u);
            wr16(self + 0x34u, (uint16_t)(eax - 1u));
        }
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t7 = cow_stdcall(g, COW_IMG(0x10074290u), 0);
        t8 = g->ecx;
        t9 = g->edx;
        t10 = (uint32_t)(int16_t)rd16(self + 0x32u);
        if (t7 == 0xc122u)
        {
            ecx = t8;
            edx = t9;
            ebx = t7;
            ebp = (uint32_t)(int16_t)rd16(self + 0x34u);
            edi = t10;
            loc_c = t10;
            loc_8 = t7;
            goto L_100197a9;
        }
        ecx = t8;
        edx = t9;
        ebx = t7;
        ebp = (uint32_t)(int16_t)rd16(self + 0x34u);
        edi = t10;
        loc_c = t10;
        loc_8 = t7;
        if (ebx == 0xc40du) goto L_100197a9;
        if (ebx != 0xc129u) goto L_10019873;
L_100197a9: ;
        if (edi != 0u)
        {
            ebx = 0u;
            loc_14 = self + 0x76u;
            loc_10 = edi;
L_100197be: ;
            esi = 0u;
            edi = loc_14;
L_100197c4: ;
            if (rd32(edi) == 0u)
            {
                t11 = rd32(ebx * 4u + esi * 4u + self + 0x82u);
                if (cow_bits2f(t11) != (double)rdf32(COW_IMG(0x1032a1a4u)))
                {
                    edx = self;
                }
                else
                {
                    ecx = ebx * 4u + esi * 4u + self + 0x82u;
                    wr32(ecx, 0xc0b00000u);
                    edx = 0xc0b00000u;
                }
            }
            else
            {
                eax = rd32(edi);
                if (ebp != 0u)
                {
                    ecx = eax * 4u + self + 0x3au;
                    edx = ebp;
L_100197d8: ;
                    if (cow_bits2f(rd32(ecx)) == (double)rdf32(COW_IMG(0x1032a1a4u)))
                    {
                        wr32(ecx, 0xc0b00000u);
                    }
                    if (edx != 1u)
                    {
                        ecx = ecx + 4u;
                        edx = edx - 1u;
                        goto L_100197d8;
                    }
                    edx = edx - 1u;
                }
            }
            if (esi + 1u < 3u)
            {
                esi = esi + 1u;
                edi = edi + 4u;
                goto L_100197c4;
            }
            if (loc_10 != 1u)
            {
                ebx = ebx + 0x15u;
                loc_14 = loc_14 + 0x54u;
                loc_10 = loc_10 - 1u;
                goto L_100197be;
            }
            ecx = loc_14 + 0x54u;
            ebx = loc_8;
            edi = loc_c;
        }
L_10019873: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t12 = cow_cdecl(g, COW_IMG(0x100c51c0u), 2, 0u, 8u);
        t13 = g->ecx;
        t14 = g->edx;
        if (ebx < t12)
        {
            ecx = t13;
            edx = t14;
            goto L_10019893;
        }
        ecx = t13;
        edx = t14;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t15 = cow_cdecl(g, COW_IMG(0x100c51c0u), 2, 0u, 0xfu);
        t16 = g->ecx;
        t17 = g->edx;
        if (ebx <= t15)
        {
            edx = t17;
            goto L_100198e1;
        }
        ecx = t16;
        edx = t17;
L_10019893: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t18 = cow_cdecl(g, COW_IMG(0x100c51c0u), 2, 0u, 0x1b4u);
        t19 = g->ecx;
        t20 = g->edx;
        if (ebx < t18)
        {
            ecx = t19;
            edx = t20;
            goto L_100198b9;
        }
        ecx = t19;
        edx = t20;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t21 = cow_cdecl(g, COW_IMG(0x100c51c0u), 2, 0u, 0x1bbu);
        t22 = g->ecx;
        t23 = g->edx;
        if (ebx <= t21)
        {
            edx = t23;
            goto L_100198e1;
        }
        ecx = t22;
        edx = t23;
L_100198b9: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t24 = cow_cdecl(g, COW_IMG(0x100c51c0u), 2, 1u, 8u);
        t25 = g->ecx;
        t26 = g->edx;
        if (ebx < t24)
        {
            eax = t24;
            edx = t26;
            goto L_10019a17;
        }
        ecx = t25;
        edx = t26;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t27 = cow_cdecl(g, COW_IMG(0x100c51c0u), 2, 1u, 0xfu);
        t28 = g->edx;
        if (ebx > t27)
        {
            eax = t27;
            edx = t28;
            goto L_10019a17;
        }
        edx = t28;
L_100198e1: ;
        if ((rd32(self + 0x20u) & 0xffff0000u) == 0x316c0000u)
        {
            eax = rd32(self + 0x20u) & 0xffff0000u;
            goto L_10019902;
        }
        eax = rd32(self + 0x20u) & 0xffff0000u;
        if (eax == 0x316d0000u) goto L_10019902;
        if (eax != 0x31700000u) goto L_10019a17;
L_10019902: ;
        if (edi != 0u)
        {
            ebx = self + 0x5eu;
            loc_14 = 0u;
            loc_10 = edi;
            loc_18 = self + 0x3eu;
L_10019920: ;
            esi = 0u;
            edi = loc_18;
L_10019926: ;
            if ((rd32(edi) & 0x7fffffffu) == 0u) goto L_10019962;
            eax = rd32(edi) & 0x7fffffffu;
            if (ebp == 0u) goto L_10019985;
            ecx = 0u;
            edx = eax * 4u + self + 0x3au;
L_1001993d: ;
            if (cow_bits2f(rd32(edx)) != (double)rdf32(COW_IMG(0x103295d8u))) goto L_100199eb;
            if (ecx + 1u < ebp)
            {
                ecx = ecx + 1u;
                edx = edx + 4u;
                goto L_1001993d;
            }
L_10019985: ;
            if (esi + 1u < 3u)
            {
                esi = esi + 1u;
                edi = edi + 4u;
                goto L_10019926;
            }
            esi = ebx;
            edi = 0u;
L_10019992: ;
            if (rd32(esi) == 0u)
            {
                eax = rd32(esi);
                goto L_100199c7;
            }
            eax = rd32(esi);
            if (ebp == 0u) goto L_100199dc;
            ecx = 0u;
            edx = eax * 4u + self + 0x3au;
L_100199a6: ;
            if (cow_bits2f(rd32(edx)) != (double)rdf32(COW_IMG(0x103295d8u))) goto L_100199eb;
            if (ecx + 1u < ebp)
            {
                ecx = ecx + 1u;
                edx = edx + 4u;
                goto L_100199a6;
            }
L_100199dc: ;
            if (edi + 1u < 3u)
            {
                esi = esi + 4u;
                edi = edi + 1u;
                goto L_10019992;
            }
            wr32(ebx, rd32(ebx) | 0x80000000u);
L_100199eb: ;
            if (loc_10 != 1u)
            {
                ebx = ebx + 0x54u;
                loc_14 = loc_14 + 0x15u;
                loc_10 = loc_10 - 1u;
                loc_18 = loc_18 + 0x54u;
                goto L_10019920;
            }
            eax = loc_10 - 1u;
            edx = loc_18 + 0x54u;
        }
L_10019a17: ;
        wr8(self + 0x31u, 1u);
    }
    g->edx = edx;
    return eax;
L_10019962: ;
    t29 = rd32(esi * 4u + self + loc_14 * 4u + 0x4eu);
    if (cow_bits2f(t29) != (double)rdf32(COW_IMG(0x103295d8u))) goto L_100199eb;
    goto L_10019985;
L_100199c7: ;
    if (cow_bits2f(eax) != (double)rdf32(COW_IMG(0x103295d8u))) goto L_100199eb;
    goto L_100199dc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10019730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10019730(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
