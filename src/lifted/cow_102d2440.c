/* f_0x102d2440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102d2440(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d14;
    double d15;
    double d2;
    double d7;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    double loc_4_f;
    double loc_8_f;
    double loc_c_f;
    uint32_t t1;
    uint32_t t13;
    uint32_t t16;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    double x0;
    double x1;
    double x2;
    double x3;
    double x4;
    const uint32_t sp0 = g->esp;

    t1 = rd32(sp0 + 4u);
    d2 = (double)rdf32(COW_IMG(0x1032a378u));
    wr32(sp0 + 4u, 0x3dcccccdu);
    ecx = t1 + 0xbf0u;
    ebx = 0u;
    ebp = t1 + 0xb78u;
    edi = t1;
    loc_10 = t1 + 0x39f0u;
    x1 = (double)rdf32(sp0 + 4u);
    x0 = d2;
L_102d2487: ;
    eax = loc_10;
    edx = 0x100u;
    x3 = (double)rdf32(COW_IMG(0x103295d8u));
    x2 = (double)rdf32(COW_IMG(0x103295d8u));
L_102d249c: ;
    if (edx != 1u)
    {
        edx = edx - 1u;
        x3 = fr(g, x3 + fabs((double)rdf32(eax - 0x2d70u)));
        x2 = fr(g, x2 + fabs((double)rdf32(eax)));
        eax = eax + 0x10u;
        goto L_102d249c;
    }
    x3 = fr(g, x3 + fabs((double)rdf32(eax - 0x2d70u)));
    x2 = fr(g, x2 + fabs((double)rdf32(eax)));
    t3 = rd32(ecx - 0x40u);
    wr32(ecx + 0x40u, rd32(ecx));
    wr32(ecx, t3);
    t4 = rd32(ecx + 4u);
    t5 = rd32(ebp);
    wr32(ecx - 0x40u, cow_f2bits((double)(float)x3));
    t6 = rd32(ecx - 0x3cu);
    wr32(ecx + 0x44u, t4);
    wr32(ecx + 4u, t6);
    d7 = (double)rdf32(COW_IMG(0x10345700u));
    wr32(ecx - 0x3cu, cow_f2bits((double)(float)x2));
    t8 = rd32(edi + 0xb64u);
    wr32(sp0 + 4u, 0x419d94ecu);
    if ((int32_t)ebx >= (int32_t)t8)
    {
        eax = t8;
        esi = t5;
        loc_c_f = (double)(float)x3;
        loc_8_f = (double)(float)x2;
        x4 = d7;
    }
    else
    {
        eax = t8;
        esi = t5;
        loc_c_f = (double)(float)x3;
        loc_8_f = (double)(float)x2;
        x4 = d7;
        d9 = (double)rdf32(COW_IMG(0x103456fcu));
        wr32(sp0 + 4u, 0x45100000u);
        if (esi != 0u)
        {
            x4 = d9;
            if (esi == 1u)
            {
                wr32(sp0 + 4u, 0x42c00000u);
            }
        }
        else
        {
            x4 = d9;
            x4 = (double)rdf32(COW_IMG(0x1032d3dcu));
        }
    }
    d10 = fr(g, x4 * x3);
    if (!(d10 < x2))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, x2, 4u);
        d11 = fr(g, (double)rdf32(sp0 + 4u) * x2);
        if (!(d11 < x3))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, x3, 4u);
            d12 = fr(g, x2 + x3);
            if (!(d12 < (double)rdf32(COW_IMG(0x103456f8u))))
            {
                edx = 3u;
            }
            else
            {
                edx = 0xfffffffdu;
            }
        }
        else
        {
            edx = 1u;
        }
    }
    else
    {
        edx = 0u;
    }
    if ((int32_t)esi < 0)
    {
        esi = -esi;
    }
    wr32(ebp - 0x10u, esi);
    wr32(ebp, edx);
    if ((int32_t)ebx >= (int32_t)rd32(edi + 0xb64u))
    {
        if (edx == 3u) goto L_102d258d;
        if (edx != 0xfffffffdu) goto L_102d25a5;
L_102d258d: ;
        x1 = fr(g, fr(g, x1 * (double)rdf32(COW_IMG(0x1032a1acu))) + loc_8_f);
        x0 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x1032a1acu))) + loc_c_f);
    }
L_102d25a5: ;
    if ((int32_t)(ebx + 1u) < 4)
    {
        ecx = ecx + 0x10u;
        ebx = ebx + 1u;
        ebp = ebp + 4u;
        loc_10 = loc_10 + 4u;
        goto L_102d2483;
    }
    wrf32(sp0 + 4u, (float)x1);
    t13 = rd32(edi + 0xb8cu);
    wr32(edi + 0xb88u, t13);
    d14 = (double)(float)fr(g, x1 + x0);
    if ((cow_fsw(g, x0, x1, 1u) & 0x4100u) != 0u)
    {
        ecx = 0u;
        loc_4_f = d14;
    }
    else
    {
        loc_4_f = d14;
        ecx = 8u;
        x0 = (double)rdf32(sp0 + 4u);
    }
    d15 = fr(g, fr(g, fr(g, x0 / loc_4_f) * (double)rdf32(COW_IMG(0x10337190u))) + (double)rdf32(COW_IMG(0x10343990u)));
    wrf32(sp0 + 4u, (float)d15);
    t16 = ecx + (rd32(sp0 + 4u) & 7u);
    wr32(edi + 0xb8cu, t16);
    return;
L_102d2483: ;
    goto L_102d2487;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d2440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102d2440(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
