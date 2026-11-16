/* f_0x102adea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102adea0(Guest* g)
{
    double d1;
    double d10;
    double d12;
    double d14;
    double d16;
    double d17;
    double d5;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t11;
    uint32_t t13;
    uint32_t t15;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 160u);

    wr32(sp0 - 0x68u, in_ebx);
    if ((int32_t)rd32(sp0 + 0xcu) >= 2)
    {
        ebx = rd32(sp0 + 0xcu);
        wr32(sp0 + 0xcu, ebx - 1u);
        d1 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)(int32_t)rd32(sp0 + 0xcu));
        wrf32(sp0 - 0x64u, (float)d1);
    }
    else
    {
        ebx = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x64u, 0x3f800000u);
    }
    if ((int32_t)(rd32(sp0 + 8u) - 2u) <= 1)
    {
        ebp = in_ebp;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        ecx = rd32(sp0 + 8u) - 2u;
        wr32(sp0 - 0x6cu, in_ebp);
        wr32(sp0 - 0x70u, in_esi);
        wr32(sp0 - 0x74u, in_edi);
        t2 = rd32(sp0 + 0x10u);
        t3 = rd32(sp0 + 4u);
        wr32(sp0 + 8u, t2);
        wr32(sp0 + 0x10u, ecx - 1u);
        eax = t3 + 0x18u;
        ebp = ebx * 0xcu;
L_102adefc: ;
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x7cu, sp0 - 0x20u);
        wr32(sp0 - 0x80u, sp0 - 0x30u);
        wr32(sp0 - 0x84u, sp0 - 0x40u);
        wr32(sp0 - 0x88u, eax + 0xcu);
        wr32(sp0 - 0x8cu, eax);
        wr32(sp0 - 0x90u, eax - 0xcu);
        wr32(sp0 - 0x94u, eax - 0x18u);
        wr32(sp0 + 4u, eax + 0xcu);
        g->esp = sp0 - 0x74u;
        cow_cdecl(g, COW_IMG(0x102aeb60u), 8, eax - 0x18u, eax - 0xcu, eax, eax + 0xcu, sp0 - 0x40u, sp0 - 0x30u, sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 + 0xcu, 0u);
        if ((int32_t)ebx <= 0)
        {
            esi = eax + 0xcu;
        }
        else
        {
            t4 = rd32(sp0 + 8u);
            wr32(sp0 + 8u, ebp + t4);
            esi = t4;
            edi = ebx;
L_102adf4d: ;
            d5 = (double)rdf32(sp0 + 0xcu);
            wr32(sp0 - 0x78u, sp0 - 0x40u);
            wr32(sp0 - 0x7cu, sp0 - 0x60u);
            t6 = rd32(sp0 + 0xcu);
            wr32(sp0 - 0x58u, t6);
            wr32(sp0 - 0x54u, 0x3f800000u);
            d7 = (double)(float)fr(g, (double)rdf32(sp0 + 0xcu) * fr(g, d5 * d5));
            wrf32(sp0 - 0x60u, (float)d7);
            d8 = (double)(float)fr(g, d5 * d5);
            wrf32(sp0 - 0x5cu, (float)d8);
            g->ecx = sp0 - 0x60u;
            g->esp = sp0 - 0x74u;
            cow_cdecl(g, COW_IMG(0x10274e00u), 2, sp0 - 0x60u, sp0 - 0x40u);
            t9 = g->ecx;
            d10 = cow_take_float(g);
            wrf32(sp0 - 0x50u, (float)(double)(float)d10);
            wr32(sp0 - 0x80u, sp0 - 0x30u);
            wr32(sp0 - 0x84u, sp0 - 0x60u);
            g->eax = sp0 - 0x60u;
            g->esp = sp0 - 0x7cu;
            t11 = cow_cdecl(g, COW_IMG(0x10274e00u), 2, sp0 - 0x60u, sp0 - 0x30u);
            d12 = cow_take_float(g);
            wrf32(sp0 - 0x4cu, (float)(double)(float)d12);
            wr32(sp0 - 0x88u, sp0 - 0x20u);
            wr32(sp0 - 0x8cu, sp0 - 0x60u);
            g->edx = sp0 - 0x60u;
            g->esp = sp0 - 0x84u;
            cow_cdecl(g, COW_IMG(0x10274e00u), 2, sp0 - 0x60u, sp0 - 0x20u);
            t13 = g->edx;
            d14 = cow_take_float(g);
            wrf32(sp0 - 0x48u, (float)(double)(float)d14);
            wr32(sp0 - 0x90u, sp0 - 0x10u);
            wr32(sp0 - 0x94u, sp0 - 0x60u);
            g->ecx = sp0 - 0x60u;
            g->esp = sp0 - 0x8cu;
            cow_cdecl(g, COW_IMG(0x10274e00u), 2, sp0 - 0x60u, sp0 - 0x10u);
            t15 = g->ecx;
            d16 = cow_take_float(g);
            wrf32(sp0 - 0x44u, (float)(double)(float)d16);
            wr32(sp0 - 0x98u, sp0 - 0x50u);
            wr32(sp0 - 0x9cu, esi);
            g->esp = sp0 - 0x94u;
            cow_cdecl(g, COW_IMG(0x10274670u), 2, esi, sp0 - 0x50u);
            d17 = fr(g, (double)rdf32(sp0 + 0xcu) + (double)rdf32(sp0 - 0x64u));
            wrf32(sp0 + 0xcu, (float)d17);
            if (edi != 1u)
            {
                esi = esi + 0xcu;
                edi = edi - 1u;
                goto L_102adf4d;
            }
            esi = rd32(sp0 + 4u);
        }
        t18 = rd32(sp0 + 0x10u) - 1u;
        t19 = rd32(sp0 + 0x10u);
        wr32(sp0 + 0x10u, t18);
        if (t19 != 1u)
        {
            eax = esi;
            goto L_102adefc;
        }
        ebp = rd32(sp0 - 0x6cu);
        esi = rd32(sp0 - 0x70u);
        edi = rd32(sp0 - 0x74u);
    }
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102adea0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102adea0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
