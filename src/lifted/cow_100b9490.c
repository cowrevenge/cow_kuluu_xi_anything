/* f_0x100b9490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b9490(Guest* g)
{
    double d14;
    double d15;
    double d23;
    double d24;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_48_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x4cu, in_ebx);
    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, in_edi);
    wr32(sp0 - 0x58u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x54u;
    t1 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t2 = g->edx;
    wr32(sp0 - 0x58u, 3u);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t4 = g->edx;
    wr32(sp0 - 0x58u, 5u);
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 5u);
    t6 = g->edx;
    wr32(sp0 - 0x44u, t5);
    wr32(sp0 - 0x58u, 7u);
    wrf32(sp0 - 0x44u, (float)(double)(float)(double)(int32_t)t5);
    t7 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 7u);
    wr32(sp0 - 0x48u, t7);
    t8 = rd32(rd16(self + 0x256u) + rd32(self + 0x20u) + 9u);
    wr32(sp0 - 0x40u, t8);
    wrf32(sp0 - 0x48u, (float)(double)(float)(double)(int32_t)t7);
    t9 = rd32(rd16(self + 0x256u) + rd32(self + 0x20u) + 0xdu);
    wr32(sp0 - 0x3cu, t9);
    t10 = rd32(rd16(self + 0x256u) + rd32(self + 0x20u) + 0x11u);
    wr32(sp0 - 0x38u, t10);
    t11 = rd32(rd16(self + 0x256u) + rd32(self + 0x20u) + 0x15u);
    wr32(sp0 - 0x34u, t11);
    eax = 0u;
    ecx = t11;
    edx = rd16(self + 0x256u) + rd32(self + 0x20u) + 9u;
    ebx = t3;
    edi = t1;
    loc_48_f = (double)(float)(double)(int32_t)t7;
L_100b9505: ;
    if (rd8(eax + sp0 - 0x40u) == 0x5fu)
    {
        wr8(eax + sp0 - 0x40u, 0x20u);
    }
    if ((int32_t)(eax + 1u) < 16)
    {
        eax = eax + 1u;
        goto L_100b9505;
    }
    if (rd32(COW_IMG(0x10663888u)) == 0u) goto L_100b95f0;
    eax = rd32(COW_IMG(0x10663888u));
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, 0xffffffffu);
    if (rd16(COW_IMG(0x104896e6u)) != 0u) goto L_100b9595;
    wr32(sp0 - 0x64u, (uint32_t)(int16_t)edi);
    wr32(sp0 - 0x68u, 4u);
    g->eax = eax;
    g->edx = (uint32_t)(int16_t)edi;
    g->esp = sp0 - 0x54u;
    t12 = cow_cdecl(g, COW_IMG(0x100b2570u), 5, 4u, (uint32_t)(int16_t)edi, 0xffffffffu, 0u, 0u);
    t13 = g->edx;
    d14 = (double)(float)fr(g, (double)rdf32(sp0 - 0x48u) * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(sp0 - 0x58u, (float)d14);
    d15 = (double)(float)fr(g, (double)rdf32(sp0 - 0x44u) * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(sp0 - 0x5cu, (float)d15);
    wr32(sp0 - 0x60u, (uint32_t)(int16_t)ebx);
    wr32(sp0 - 0x64u, 1u);
    g->edi = (uint32_t)(int16_t)ebx;
    g->edx = t13;
    cow_thiscall(g, COW_IMG(0x101f8d50u), rd32(COW_IMG(0x10663888u)), 4, 1u, (uint32_t)(int16_t)ebx, cow_f2bits(d15), cow_f2bits(d14));
    t16 = g->edx;
    wr32(sp0 - 0x58u, sp0 - 0x40u);
    wr32(sp0 - 0x5cu, (uint32_t)(int16_t)ebx);
    wr32(sp0 - 0x60u, 1u);
    g->eax = sp0 - 0x40u;
    g->edx = t16;
    t17 = rd32(COW_IMG(0x10663888u));
    t18 = cow_thiscall(g, COW_IMG(0x101f8e30u), t17, 3, 1u, (uint32_t)(int16_t)ebx, sp0 - 0x40u);
    t19 = g->ecx;
    t20 = g->edx;
    cow_call_regs(g, COW_IMG(0x100b2a60u), t18, g->ecx, g->edx, 1, 0);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0x19u));
    g->edi = in_edi;
    return;
L_100b9595: ;
    wr32(sp0 - 0x64u, (uint32_t)(int16_t)edi);
    wr32(sp0 - 0x68u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t21 = cow_cdecl(g, COW_IMG(0x100b2570u), 5, 1u, (uint32_t)(int16_t)edi, 0xffffffffu, 0u, 0u);
    t22 = g->edx;
    d23 = (double)(float)fr(g, (double)rdf32(sp0 - 0x48u) * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(sp0 - 0x58u, (float)d23);
    d24 = (double)(float)fr(g, (double)rdf32(sp0 - 0x44u) * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(sp0 - 0x5cu, (float)d24);
    wr32(sp0 - 0x60u, (uint32_t)(int16_t)ebx);
    wr32(sp0 - 0x64u, 1u);
    g->edi = (uint32_t)(int16_t)ebx;
    g->edx = t22;
    t25 = cow_thiscall(g, COW_IMG(0x101f8d50u), rd32(COW_IMG(0x10663888u)), 4, 1u, (uint32_t)(int16_t)ebx, cow_f2bits(d24), cow_f2bits(d23));
    t26 = g->edx;
    wr32(sp0 - 0x58u, (uint32_t)(int16_t)ebx);
    wr32(sp0 - 0x5cu, 1u);
    t27 = cow_thiscall(g, COW_IMG(0x101f8de0u), rd32(COW_IMG(0x10663888u)), 2, 1u, (uint32_t)(int16_t)ebx);
    wr32(sp0 - 0x58u, sp0 - 0x40u);
    wr32(sp0 - 0x5cu, (uint32_t)(int16_t)ebx);
    wr32(sp0 - 0x60u, 1u);
    cow_thiscall(g, COW_IMG(0x101f8e30u), rd32(COW_IMG(0x10663888u)), 3, 1u, (uint32_t)(int16_t)ebx, sp0 - 0x40u);
L_100b95f0: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0x19u));
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b9490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b9490(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
