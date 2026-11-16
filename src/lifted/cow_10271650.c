/* f_0x10271650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10271650(Guest* g)
{
    double d11;
    double d3;
    double d4;
    double d7;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 160u);

    if ((rd8(COW_IMG(0x1099c514u) + rd32(COW_IMG(0x1099b0f8u)) * 0x14u) & 2u) == 0u)
    {
        t1 = (uint32_t)((int32_t)rd32(sp0 + 8u) >> 1u);
        t2 = rd32(sp0 + 4u);
        d3 = fr(g, (double)rdf32(COW_IMG(0x10340b14u)) / (double)(int32_t)rd32(sp0 + 0x10u));
        wr32(sp0 + 8u, t1);
        wr32(sp0 + 4u, (uint32_t)((int32_t)t2 >> 1u));
        if ((cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329cecu)), 1u) & 0x4100u) != 0u)
        {
            x0 = d3;
            wr32(sp0 + 0x10u, 0x3f800000u);
        }
        else
        {
            x0 = d3;
            d4 = fr(g, (double)rdf32(COW_IMG(0x10329ce8u)) / x0);
            wrf32(sp0 + 0x10u, (float)d4);
        }
        wr32(sp0 - 0x50u, in_esi);
        wr32(sp0 - 0x54u, in_edi);
        t5 = rd32(COW_IMG(0x1099b35cu) + rd32(COW_IMG(0x1099b0f4u)) * 0x7cu);
        wr32(sp0 - 0x58u, t5);
        wr32(sp0 - 0x4cu, t5);
        t6 = rd32(COW_IMG(0x1099b36cu) + rd32(COW_IMG(0x1099b0f4u)) * 0x7cu);
        wr32(sp0 - 0x48u, t6);
        d7 = (double)(float)fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 + 0x10u)) * (double)rdf32(COW_IMG(0x1032a840u)));
        wrf32(sp0 - 0x58u, (float)d7);
        wr32(sp0 - 0x5cu, sp0 - 0x4cu);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        t8 = rd32(COW_IMG(0x1099b37cu) + rd32(COW_IMG(0x1099b0f4u)) * 0x7cu);
        wr32(sp0 - 0x44u, t8);
        g->esp = sp0 - 0x54u;
        cow_cdecl(g, COW_IMG(0x1027ac50u), 3, sp0 - 0x10u, sp0 - 0x4cu, cow_f2bits(d7));
        t9 = rd32(COW_IMG(0x1099b358u) + rd32(COW_IMG(0x1099b0f4u)) * 0x7cu);
        wr32(sp0 - 0x4cu, t9);
        t10 = rd32(COW_IMG(0x1099b368u) + rd32(COW_IMG(0x1099b0f4u)) * 0x7cu);
        wr32(sp0 - 0x48u, t10);
        d11 = (double)(float)fr(g, fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(sp0 + 0x10u)) * (double)rdf32(COW_IMG(0x10340b10u)));
        wrf32(sp0 - 0x58u, (float)d11);
        wr32(sp0 - 0x5cu, sp0 - 0x4cu);
        wr32(sp0 - 0x60u, sp0 - 0x20u);
        t12 = rd32(COW_IMG(0x1099b378u) + rd32(COW_IMG(0x1099b0f4u)) * 0x7cu);
        wr32(sp0 - 0x44u, t12);
        cow_cdecl(g, COW_IMG(0x1027ac50u), 3, sp0 - 0x20u, sp0 - 0x4cu, cow_f2bits(d11));
        wr32(sp0 - 0x64u, sp0 - 0x20u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        wr32(sp0 - 0x6cu, sp0 - 0x40u);
        g->ecx = sp0 - 0x40u;
        t13 = rd32(COW_IMG(0x1099b0f8u));
        g->esp = sp0 - 0x60u;
        cow_cdecl(g, COW_IMG(0x1027b190u), 3, sp0 - 0x40u, sp0 - 0x10u, sp0 - 0x20u);
        t14 = g->ecx;
        t15 = COW_IMG(0x1099bd1cu) + t13 * 0x7cu;
        wr32(sp0 - 0x70u, t15);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wr32(sp0 - 0x78u, sp0 - 0x30u);
        g->eax = sp0 - 0x30u;
        g->edx = sp0 - 0x40u;
        g->esp = sp0 - 0x6cu;
        t16 = cow_cdecl(g, COW_IMG(0x1027b190u), 3, sp0 - 0x30u, sp0 - 0x40u, t15);
        t17 = g->edx;
        wr32(sp0 - 0x7cu, sp0 - 0x30u);
        wr32(sp0 - 0x80u, t15);
        g->ecx = sp0 - 0x30u;
        g->edx = t17;
        g->esp = sp0 - 0x78u;
        t18 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, t15, sp0 - 0x30u);
        t19 = g->ecx;
        t20 = g->edx;
        t21 = COW_IMG(0x1099bcb4u) + t13 * 0x7cu;
        wr32(sp0 - 0x84u, t21);
        g->esp = sp0 - 0x80u;
        cow_cdecl(g, COW_IMG(0x1026e210u), 1, t21);
        wr32(sp0 - 0x88u, sp0 - 0x20u);
        wr32(sp0 - 0x8cu, sp0 - 0x10u);
        wr32(sp0 - 0x90u, sp0 - 0x40u);
        g->edx = sp0 - 0x40u;
        t22 = rd32(COW_IMG(0x1099b0f8u));
        g->esp = sp0 - 0x84u;
        cow_cdecl(g, COW_IMG(0x1027b190u), 3, sp0 - 0x40u, sp0 - 0x10u, sp0 - 0x20u);
        t23 = g->edx;
        t24 = COW_IMG(0x1099bf88u) + t22 * 0x7cu;
        wr32(sp0 - 0x94u, t24);
        wr32(sp0 - 0x98u, sp0 - 0x40u);
        wr32(sp0 - 0x9cu, sp0 - 0x30u);
        g->eax = sp0 - 0x40u;
        g->ecx = sp0 - 0x30u;
        g->esp = sp0 - 0x90u;
        t25 = cow_cdecl(g, COW_IMG(0x1027b190u), 3, sp0 - 0x30u, sp0 - 0x40u, t24);
        t26 = g->ecx;
        wr32(sp0 - 0x58u, sp0 - 0x30u);
        wr32(sp0 - 0x5cu, t24);
        g->ecx = t26;
        g->edx = sp0 - 0x30u;
        g->esp = sp0 - 0x54u;
        t27 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, t24, sp0 - 0x30u);
        t28 = g->ecx;
        t29 = g->edx;
        t30 = COW_IMG(0x1099bf20u) + t22 * 0x7cu;
        wr32(sp0 - 0x60u, t30);
        g->ecx = t28;
        g->edx = t29;
        g->esp = sp0 - 0x5cu;
        t31 = cow_cdecl(g, COW_IMG(0x1026e210u), 1, t30);
        t32 = g->ecx;
        t33 = g->edx;
        wr32(sp0 - 0x64u, 0x3e800000u);
        wr32(sp0 - 0x68u, 0x3e800000u);
        wr32(sp0 - 0x6cu, 0x3e800000u);
        wr32(sp0 - 0x70u, t30 + 0x1cu);
        g->esp = sp0 - 0x60u;
        cow_cdecl(g, COW_IMG(0x102806d0u), 4, t30 + 0x1cu, 0x3e800000u, 0x3e800000u, 0x3e800000u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10271650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10271650(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
