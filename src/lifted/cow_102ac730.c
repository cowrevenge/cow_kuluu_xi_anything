/* f_0x102ac730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102ac730(Guest* g)
{
    double d15;
    double d16;
    double d17;
    double d18;
    double d2;
    double d20;
    double d27;
    double d28;
    double d3;
    double d30;
    double d38;
    double d39;
    double d4;
    double d41;
    double d5;
    double d7;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t19;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t29;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t40;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)(arg2 - rd32(sp0 + 4u)) < (int32_t)rd32(COW_IMG(0x103be97cu)))
    {
        loc_4 = self;
    }
    else
    {
        ecx = rd32(sp0 + 4u);
        edi = in_edi;
        loc_4 = self;
L_102ac753: ;
        t1 = arg2 + ecx - (uint32_t)((int32_t)(arg2 + ecx) >> 0x1fu);
        if ((int32_t)ecx >= (int32_t)(uint32_t)((int32_t)t1 >> 1u))
        {
            edx = rd32(COW_IMG(0x109aaac4u));
            ebx = (uint32_t)((int32_t)t1 >> 1u);
        }
        else
        {
            eax = t1;
            edx = rd32(COW_IMG(0x109aaac4u));
            ebx = (uint32_t)((int32_t)t1 >> 1u);
            ebp = ecx;
            esi = ecx * 0xcu;
            edi = ecx * 0xcu + 4u;
L_102ac77a: ;
            d2 = (double)rdf32(ebp * 4u + edx);
            d3 = (double)rdf32(ebx * 4u + edx);
            if ((cow_fsw(g, d2, d3, 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d2, d3, 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d2, d3, 0u) & 0x4100u;
                if (ecx != ebp)
                {
                    d4 = (double)rdf32(ecx * 4u + edx);
                    d5 = (double)rdf32(ebp * 4u + edx);
                    if (d4 == d5)
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, d5, 0u);
                    }
                    else
                    {
                        t6 = rd32(ebp * 4u + edx);
                        d7 = (double)rdf32(ecx * 4u + edx);
                        wr32(ecx * 4u + edx, t6);
                        wrf32(ebp * 4u + rd32(COW_IMG(0x109aaac4u)), (float)d7);
                        t8 = rd32(esi + rd32(COW_IMG(0x109aaab8u)));
                        t9 = rd32(edi + rd32(COW_IMG(0x109aaab8u)) - 4u);
                        wr32(esi + rd32(COW_IMG(0x109aaab8u)), t9);
                        wr32(edi + rd32(COW_IMG(0x109aaab8u)) - 4u, t8);
                        t10 = rd32(esi + rd32(COW_IMG(0x109aaab8u)) + 4u);
                        t11 = rd32(edi + rd32(COW_IMG(0x109aaab8u)));
                        wr32(esi + rd32(COW_IMG(0x109aaab8u)) + 4u, t11);
                        wr32(edi + rd32(COW_IMG(0x109aaab8u)), t10);
                        t12 = rd32(esi + rd32(COW_IMG(0x109aaab8u)) + 8u);
                        t13 = rd32(edi + rd32(COW_IMG(0x109aaab8u)) + 4u);
                        wr32(esi + rd32(COW_IMG(0x109aaab8u)) + 8u, t13);
                        t14 = rd32(COW_IMG(0x109aaab8u));
                        wr32(edi + t14 + 4u, t12);
                        eax = t14;
                        edx = rd32(COW_IMG(0x109aaac4u));
                        loc_4 = t12;
                    }
                }
                if (ecx + 1u != ebx)
                {
                    ecx = ecx + 1u;
                    esi = esi + 0xcu;
                }
                else
                {
                    ecx = ecx + 1u;
                    esi = esi + 0xcu;
                    ecx = ecx + 1u;
                    esi = esi + 0xcu;
                }
            }
            if ((int32_t)(ebp + 1u) < (int32_t)ebx)
            {
                ebp = ebp + 1u;
                edi = edi + 0xcu;
                goto L_102ac77a;
            }
            edi = edi + 0xcu;
        }
        if ((int32_t)(ebx + 1u) <= (int32_t)arg2)
        {
            ebp = ebx + 1u;
            eax = ebp * 3u;
            esi = ecx * 0xcu;
            edi = ebp * 0xcu + 4u;
L_102ac85a: ;
            d15 = (double)rdf32(ebp * 4u + edx);
            d16 = (double)rdf32(ebx * 4u + edx);
            if ((cow_fsw(g, d15, d16, 0u) & 0x4100u) == 0u)
            {
                eax = cow_fsw(g, d15, d16, 0u) & 0x4100u;
                if (ecx != ebp)
                {
                    d17 = (double)rdf32(ecx * 4u + edx);
                    d18 = (double)rdf32(ebp * 4u + edx);
                    if (d17 != d18)
                    {
                        t19 = rd32(ebp * 4u + edx);
                        d20 = (double)rdf32(ecx * 4u + edx);
                        wr32(ecx * 4u + edx, t19);
                        wrf32(ebp * 4u + rd32(COW_IMG(0x109aaac4u)), (float)d20);
                        t21 = rd32(esi + rd32(COW_IMG(0x109aaab8u)));
                        t22 = rd32(edi + rd32(COW_IMG(0x109aaab8u)) - 4u);
                        wr32(esi + rd32(COW_IMG(0x109aaab8u)), t22);
                        wr32(edi + rd32(COW_IMG(0x109aaab8u)) - 4u, t21);
                        t23 = rd32(esi + rd32(COW_IMG(0x109aaab8u)) + 4u);
                        t24 = rd32(edi + rd32(COW_IMG(0x109aaab8u)));
                        wr32(esi + rd32(COW_IMG(0x109aaab8u)) + 4u, t24);
                        wr32(edi + rd32(COW_IMG(0x109aaab8u)), t23);
                        t25 = rd32(esi + rd32(COW_IMG(0x109aaab8u)) + 8u);
                        t26 = rd32(edi + rd32(COW_IMG(0x109aaab8u)) + 4u);
                        wr32(esi + rd32(COW_IMG(0x109aaab8u)) + 8u, t26);
                        wr32(edi + rd32(COW_IMG(0x109aaab8u)) + 4u, t25);
                        edx = rd32(COW_IMG(0x109aaac4u));
                    }
                }
                if (ecx + 1u != ebx)
                {
                    ecx = ecx + 1u;
                    esi = esi + 0xcu;
                }
                else
                {
                    ecx = ecx + 1u;
                    esi = esi + 0xcu;
                    ecx = ecx + 1u;
                    esi = esi + 0xcu;
                }
            }
            if ((int32_t)(ebp + 1u) <= (int32_t)arg2)
            {
                edi = edi + 0xcu;
                loc_4 = ebp + 1u;
                goto L_102ac856;
            }
            edi = edi + 0xcu;
            loc_4 = ebp + 1u;
        }
        if ((int32_t)ecx <= (int32_t)ebx)
        {
            zf = ecx == ebx;
            if (zf)
            {
                eax = arg2;
            }
            else
            {
                d38 = (double)rdf32(ecx * 4u + edx);
                d39 = (double)rdf32(ebx * 4u + edx);
                if (d38 == d39)
                {
                    eax = (arg2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d38, d39, 0u);
                }
                else
                {
                    t40 = rd32(ebx * 4u + edx);
                    d41 = (double)rdf32(ecx * 4u + edx);
                    wr32(ecx * 4u + edx, t40);
                    wrf32(ebx * 4u + rd32(COW_IMG(0x109aaac4u)), (float)d41);
                    t42 = rd32(ebx * 0xcu + rd32(COW_IMG(0x109aaab8u)));
                    t43 = rd32(ecx * 0xcu + rd32(COW_IMG(0x109aaab8u)));
                    wr32(ecx * 0xcu + rd32(COW_IMG(0x109aaab8u)), t42);
                    wr32(ebx * 0xcu + rd32(COW_IMG(0x109aaab8u)), t43);
                    t44 = rd32(ebx * 0xcu + rd32(COW_IMG(0x109aaab8u)) + 4u);
                    t45 = rd32(ecx * 0xcu + rd32(COW_IMG(0x109aaab8u)) + 4u);
                    wr32(ecx * 0xcu + rd32(COW_IMG(0x109aaab8u)) + 4u, t44);
                    wr32(ebx * 0xcu + rd32(COW_IMG(0x109aaab8u)) + 4u, t45);
                    t46 = rd32(ebx * 0xcu + rd32(COW_IMG(0x109aaab8u)) + 8u);
                    t47 = rd32(ecx * 0xcu + rd32(COW_IMG(0x109aaab8u)) + 8u);
                    wr32(ecx * 0xcu + rd32(COW_IMG(0x109aaab8u)) + 8u, t46);
                    t48 = rd32(COW_IMG(0x109aaab8u));
                    wr32(ebx * 0xcu + t48 + 8u, t47);
                    eax = t48;
                    edi = t46;
                }
            }
            esi = ecx;
        }
        else
        {
            if (ecx - 1u == ebx)
            {
                eax = arg2;
                esi = ecx - 1u;
            }
            else
            {
                esi = ecx - 1u;
                d27 = (double)rdf32(ecx * 4u + edx - 4u);
                d28 = (double)rdf32(ebx * 4u + edx);
                if (d27 == d28)
                {
                    eax = (arg2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, d28, 0u);
                }
                else
                {
                    t29 = rd32(ebx * 4u + edx);
                    d30 = (double)rdf32(ecx * 4u + edx - 4u);
                    wr32(ecx * 4u + edx - 4u, t29);
                    wrf32(ebx * 4u + rd32(COW_IMG(0x109aaac4u)), (float)d30);
                    t31 = rd32(ebx * 0xcu + rd32(COW_IMG(0x109aaab8u)));
                    t32 = rd32(ecx * 0xcu + rd32(COW_IMG(0x109aaab8u)) - 0xcu);
                    wr32(ecx * 0xcu + rd32(COW_IMG(0x109aaab8u)) - 0xcu, t31);
                    wr32(ebx * 0xcu + rd32(COW_IMG(0x109aaab8u)), t32);
                    t33 = rd32(ebx * 0xcu + rd32(COW_IMG(0x109aaab8u)) + 4u);
                    t34 = rd32(ecx * 0xcu + rd32(COW_IMG(0x109aaab8u)) - 8u);
                    wr32(ecx * 0xcu + rd32(COW_IMG(0x109aaab8u)) - 8u, t33);
                    wr32(ebx * 0xcu + rd32(COW_IMG(0x109aaab8u)) + 4u, t34);
                    t35 = rd32(ebx * 0xcu + rd32(COW_IMG(0x109aaab8u)) + 8u);
                    t36 = rd32(COW_IMG(0x109aaab8u));
                    t37 = rd32(ecx * 0xcu + rd32(COW_IMG(0x109aaab8u)) - 4u);
                    wr32(ecx * 0xcu + t36 - 4u, t35);
                    wr32(ebx * 0xcu + rd32(COW_IMG(0x109aaab8u)) + 8u, t37);
                    eax = t36;
                    edi = t35;
                }
            }
        }
        t49 = rd32(sp0 + 4u);
        g->edi = edi;
        g->esp = sp0 - 0xcu;
        cow_thiscall_cdecl(g, COW_IMG(0x102ac730u), esi - 1u, 4, t49, esi - 1u, in_edi, in_esi);
        wr32(sp0 + 4u, esi + 1u);
        if ((int32_t)(arg2 - (esi + 1u)) >= (int32_t)rd32(COW_IMG(0x103be97cu))) goto L_102ac74f;
    }
    g->edi = in_edi;
    return;
L_102ac74f: ;
    ecx = rd32(sp0 + 4u);
    goto L_102ac753;
L_102ac856: ;
    eax = arg2;
    ebp = loc_4;
    goto L_102ac85a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ac730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ac730(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
