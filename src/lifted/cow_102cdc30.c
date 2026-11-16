/* f_0x102cdc30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_102cdc30(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d29;
    double d3;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d4;
    double d40;
    double d41;
    double d42;
    double d46;
    double d48;
    double d5;
    double d50;
    double d52;
    double d55;
    double d56;
    double d57;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t28;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t47;
    uint32_t t49;
    uint32_t t51;
    uint32_t t53;
    uint32_t t54;
    uint32_t t58;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg2 <= 0)
    {
        eax = arg2;
        edx = 0u;
    }
    else
    {
        t1 = rd32(sp0 + 0x10u);
        t2 = rd32(sp0 + 0xcu);
        wr32(sp0 + 0x10u, arg1 + 0x1a40u);
        eax = t1;
        edx = 0u;
        loc_c = 0u;
        loc_14 = 0x490u;
        loc_18 = t2;
        loc_8 = t1;
        loc_4 = 0x228u - t2;
L_102cdc7a: ;
        if (!(edx & 1u))
        {
            ecx = eax;
            edx = eax;
            esi = eax + 0x3fcu;
            edi = 0x80u;
            goto L_102cdca5;
        }
        ecx = eax;
        edx = eax;
        esi = eax + 0x3fcu;
        edi = 0x80u;
L_102cdc8e: ;
        d3 = fr(g, (double)rdf32(esi) - (double)rdf32(edx));
        d4 = (double)rdf32(edx);
        wrf32(edx, (float)d3);
        wrf32(esi, (float)d4);
        if (edi != 1u)
        {
            edx = edx + 4u;
            esi = esi - 4u;
            edi = edi - 1u;
            goto L_102cdc8e;
        }
L_102cdcb5: ;
        edx = 0x80u;
L_102cdcba: ;
        d6 = fr(g, (double)rdf32(eax) - fr(g, (double)rdf32(COW_IMG(0x103cbfccu)) * (double)rdf32(eax + 0x200u)));
        d7 = fr(g, (double)rdf32(COW_IMG(0x103cbfccu)) * (double)rdf32(eax + 0x200u));
        wrf32(eax + 0x200u, (float)d6);
        d8 = fr(g, d7 + (double)rdf32(eax));
        wrf32(eax, (float)d8);
        if (edx != 1u)
        {
            eax = eax + 4u;
            edx = edx - 1u;
            goto L_102cdcba;
        }
        edi = 0x40u;
L_102cdce1: ;
        ebx = 0x7fu - (uint32_t)((int32_t)edi >> 1u);
        ebp = (uint32_t)((int32_t)edi >> 1u);
L_102cdcec: ;
        eax = ecx;
        edx = edi * 8u - 0xcu;
        esi = edi * 2u;
L_102cdcf8: ;
        d9 = fr(g, (double)rdf32(eax) - (double)rdf32(eax + edx + 8u));
        wrf32(eax, (float)d9);
        d10 = fr(g, (double)rdf32(eax + 4u) - (double)rdf32(eax + edx + 4u));
        wrf32(eax + 4u, (float)d10);
        d11 = fr(g, (double)rdf32(eax + 8u) - (double)rdf32(eax + edx));
        wrf32(eax + 8u, (float)d11);
        d12 = fr(g, (double)rdf32(eax + 0xcu) - (double)rdf32(eax + edx - 4u));
        wrf32(eax + 0xcu, (float)d12);
        if ((int32_t)(esi - 8u) > 0)
        {
            eax = eax + 0x10u;
            edx = edx - 0x20u;
            esi = esi - 8u;
            goto L_102cdcf8;
        }
        eax = eax + 0x10u;
        x0 = (double)rdf32(COW_IMG(0x103cbed0u) + ebx * 4u);
L_102cdd33: ;
        d13 = fr(g, (double)rdf32(ecx) - fr(g, x0 * (double)rdf32(ecx + edi * 4u)));
        d14 = fr(g, x0 * (double)rdf32(ecx + edi * 4u + 4u));
        d15 = fr(g, x0 * (double)rdf32(ecx + edi * 4u));
        wrf32(ecx + edi * 4u, (float)d13);
        d16 = fr(g, (double)rdf32(ecx + 4u) - d14);
        wrf32(ecx + edi * 4u + 4u, (float)d16);
        d17 = fr(g, d15 + (double)rdf32(ecx));
        wrf32(ecx, (float)d17);
        d18 = fr(g, d14 + (double)rdf32(ecx + 4u));
        wrf32(ecx + 4u, (float)d18);
        if (ecx + 8u != eax)
        {
            ecx = ecx + 8u;
            goto L_102cdd33;
        }
        ecx = ecx + 8u;
        if ((int32_t)(ebx - edi) >= 0)
        {
            ecx = ecx + edi * 4u;
            ebx = ebx - edi;
            goto L_102cdcec;
        }
        ecx = ecx + edi * 4u;
        if (ebp != 2u)
        {
            ecx = ecx - 0x400u;
            edi = ebp;
            goto L_102cdce1;
        }
        ecx = ecx - 0x400u;
        eax = COW_IMG(0x103cc0c8u);
L_102cdd8d: ;
        d19 = fr(g, (double)rdf32(ecx) - (double)rdf32(ecx + 0xcu));
        d20 = (double)rdf32(ecx + 0xcu);
        d21 = (double)rdf32(eax);
        wrf32(sp0 + 0xcu, (float)d19);
        d22 = (double)(float)fr(g, (double)rdf32(ecx + 4u) - (double)rdf32(ecx + 8u));
        d23 = fr(g, (double)rdf32(sp0 + 0xcu) + fr(g, (double)rdf32(ecx + 8u) * d21));
        d24 = fr(g, (double)rdf32(ecx + 8u) * d21);
        wrf32(ecx, (float)d23);
        wrf32(ecx + 4u, (float)fr(g, d22 + fr(g, d20 * d21)));
        d25 = fr(g, (double)rdf32(sp0 + 0xcu) - d24);
        wrf32(ecx + 8u, (float)d25);
        wrf32(ecx + 0xcu, (float)fr(g, d22 - fr(g, d20 * d21)));
        if ((int32_t)(eax - 8u) >= (int32_t)COW_IMG(0x103cbed0u))
        {
            eax = eax - 8u;
            ecx = ecx + 0x10u;
            goto L_102cdd8d;
        }
        ecx = ecx + 0x10u;
        eax = loc_18 + loc_4 + rd32(arg1 + 8u);
        ebp = ecx - 0x400u;
        edi = COW_IMG(0x103cc108u);
        x0 = (double)rdf32(COW_IMG(0x103444e8u) + rd32(loc_18) * 4u);
L_102cde11: ;
        d26 = fr(g, (double)rdf32(ebp) - (double)rdf32(ebp + 4u));
        d27 = fr(g, fr(g, fr(g, d26 - fr(g, (double)rdf32(ebp + 4u) * (double)rdf32(COW_IMG(0x103cb6dcu) + rd32(edi) * 0x10u))) * (double)rdf32(COW_IMG(0x103cb6d8u) + rd32(edi) * 0x10u)) * x0);
        t28 = rd32(edi);
        d29 = fr(g, (double)rdf32(arg1 + loc_14 * 4u + rd32(edi) * 4u) - fr(g, d27 * (double)rdf32(COW_IMG(0x103cb6d0u) + rd32(edi) * 0x10u)));
        d30 = fr(g, (double)rdf32(ebp + 4u) * (double)rdf32(COW_IMG(0x103cb6dcu) + rd32(edi) * 0x10u));
        wrf32(eax - t28 * 0x10u + 0x7f0u, (float)d29);
        d31 = fr(g, fr(g, (double)rdf32(COW_IMG(0x103cb6d0u) + t28 * 0x10u) * (double)rdf32(arg1 + loc_14 * 4u + t28 * 4u)) + d27);
        wrf32(eax + t28 * 0x10u + 0x800u, (float)d31);
        d32 = fr(g, fr(g, d30 + d26) * (double)rdf32(COW_IMG(0x103cb6d4u) + t28 * 0x10u));
        wrf32(arg1 + loc_14 * 4u + t28 * 4u, (float)d32);
        if ((int32_t)(edi + 4u) <= (int32_t)COW_IMG(0x103cc304u))
        {
            ebp = ebp + 8u;
            edi = edi + 4u;
            goto L_102cde11;
        }
        ebx = eax + 0x1000u;
        edi = rd32(sp0 + 0x10u);
L_102cde96: ;
        if (rd32(edi + 4u) != 4u)
        {
            ecx = ebx + rd32(edi) * 0x10u - 0xff0u;
            esi = rd32(edi + 4u);
            goto L_102cdeba;
        }
        ecx = ebx + rd32(edi) * 0x10u - 0xff0u;
        esi = rd32(edi + 4u);
        if (ecx >= ebx) goto L_102ce041;
        eax = ecx;
L_102cdf3d: ;
        t43 = esi * 7u + rd32(edi + 0xcu);
        t44 = t43 + rd32(edi + 0xcu) - esi;
        t45 = rd32(edi + 0xcu);
        d46 = fr(g, fr(g, (double)rdf32(COW_IMG(0x103444e8u) + (t43 >> 3u) * 4u) * (double)rdf32(COW_IMG(0x10344528u) + (t43 & 7u) * 4u)) * (double)rdf32(eax));
        wrf32(eax, (float)d46);
        t47 = t44 + t45 - esi;
        d48 = fr(g, fr(g, (double)rdf32(COW_IMG(0x103444e8u) + (t44 >> 3u) * 4u) * (double)rdf32(COW_IMG(0x10344528u) + (t44 & 7u) * 4u)) * (double)rdf32(eax + 0x10u));
        wrf32(eax + 0x10u, (float)d48);
        t49 = t45 + t47 - esi;
        d50 = fr(g, fr(g, (double)rdf32(COW_IMG(0x103444e8u) + (t47 >> 3u) * 4u) * (double)rdf32(COW_IMG(0x10344528u) + (t47 & 7u) * 4u)) * (double)rdf32(eax + 0x20u));
        wrf32(eax + 0x20u, (float)d50);
        t51 = t45 + t49 - esi;
        d52 = fr(g, fr(g, (double)rdf32(COW_IMG(0x103444e8u) + (t49 >> 3u) * 4u) * (double)rdf32(COW_IMG(0x10344528u) + (t49 & 7u) * 4u)) * (double)rdf32(eax + 0x30u));
        wrf32(eax + 0x30u, (float)d52);
        t53 = t45 + t51 - esi;
        t54 = t45 + t53 - esi;
        d55 = fr(g, fr(g, (double)rdf32(COW_IMG(0x103444e8u) + (t51 >> 3u) * 4u) * (double)rdf32(COW_IMG(0x10344528u) + (t51 & 7u) * 4u)) * (double)rdf32(eax + 0x40u));
        wrf32(eax + 0x40u, (float)d55);
        d56 = fr(g, fr(g, (double)rdf32(COW_IMG(0x103444e8u) + (t53 >> 3u) * 4u) * (double)rdf32(COW_IMG(0x10344528u) + (t53 & 7u) * 4u)) * (double)rdf32(eax + 0x50u));
        wrf32(eax + 0x50u, (float)d56);
        d57 = fr(g, fr(g, (double)rdf32(COW_IMG(0x103444e8u) + (t54 >> 3u) * 4u) * (double)rdf32(COW_IMG(0x10344528u) + (t54 & 7u) * 4u)) * (double)rdf32(eax + 0x60u));
        wrf32(eax + 0x60u, (float)d57);
        if (eax + 0x70u < ebx)
        {
            eax = eax + 0x70u;
            edi = edi + 8u;
            goto L_102cde96;
        }
L_102ce041: ;
        t58 = rd32(sp0 + 0x10u) + 0x40u;
        wr32(sp0 + 0x10u, t58);
        if ((int32_t)(loc_c + 1u) < (int32_t)arg2)
        {
            eax = loc_8 + 0x400u;
            edx = loc_c + 1u;
            loc_c = loc_c + 1u;
            loc_14 = loc_14 + 0x80u;
            loc_18 = loc_18 + 4u;
            loc_8 = loc_8 + 0x400u;
            goto L_102cdc7a;
        }
        eax = loc_8 + 0x400u;
        edx = loc_c + 1u;
    }
    g->edx = edx;
    return eax;
L_102cdca5: ;
    d5 = fr(g, (double)rdf32(edx) - (double)rdf32(esi));
    wrf32(edx, (float)d5);
    if (edi != 1u)
    {
        edx = edx + 4u;
        esi = esi - 4u;
        edi = edi - 1u;
        goto L_102cdca5;
    }
    goto L_102cdcb5;
L_102cdeba: ;
    d33 = (double)rdf32(COW_IMG(0x103444e8u) + esi * 4u);
    wrf32(sp0 + 0xcu, (float)d33);
    d34 = fr(g, d33 * (double)rdf32(eax));
    wrf32(eax, (float)d34);
    if (eax + 0x10u >= ecx)
    {
        eax = eax + 0x10u;
        goto L_102cdf3d;
    }
    eax = eax + 0x10u;
L_102cded2: ;
    d35 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(eax));
    wrf32(eax, (float)d35);
    d36 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(eax + 0x10u));
    wrf32(eax + 0x10u, (float)d36);
    d37 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(eax + 0x20u));
    wrf32(eax + 0x20u, (float)d37);
    d38 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(eax + 0x30u));
    wrf32(eax + 0x30u, (float)d38);
    d39 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(eax + 0x40u));
    wrf32(eax + 0x40u, (float)d39);
    d40 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(eax + 0x50u));
    wrf32(eax + 0x50u, (float)d40);
    d41 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(eax + 0x60u));
    wrf32(eax + 0x60u, (float)d41);
    d42 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(eax + 0x70u));
    wrf32(eax + 0x70u, (float)d42);
    if (eax + 0x80u < ecx)
    {
        eax = eax + 0x80u;
        goto L_102cded2;
    }
    eax = eax + 0x80u;
    goto L_102cdf3d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cdc30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102cdc30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
