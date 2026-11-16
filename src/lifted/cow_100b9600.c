/* f_0x100b9600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b9600(Guest* g)
{
    double d16;
    double d17;
    double d26;
    double d27;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_48_f;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 0x4cu, in_ebx);
    wr32(sp0 - 0x50u, in_ebp);
    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    wr32(sp0 - 0x5cu, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x58u;
    t1 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t2 = g->edx;
    wr32(sp0 - 0x5cu, 3u);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t4 = g->edx;
    wr32(sp0 - 0x5cu, 5u);
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 5u);
    t6 = g->edx;
    wr32(sp0 - 0x5cu, 7u);
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 7u);
    t8 = g->edx;
    wr32(sp0 - 0x44u, t7);
    wr32(sp0 - 0x5cu, 9u);
    wrf32(sp0 - 0x44u, (float)(double)(float)(double)(int32_t)t7);
    t9 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 9u);
    wr32(sp0 - 0x48u, t9);
    t10 = rd32(rd16(self + 0x256u) + rd32(self + 0x20u) + 0xbu);
    wr32(sp0 - 0x40u, t10);
    wrf32(sp0 - 0x48u, (float)(double)(float)(double)(int32_t)t9);
    t11 = rd32(rd16(self + 0x256u) + rd32(self + 0x20u) + 0xfu);
    wr32(sp0 - 0x3cu, t11);
    t12 = rd32(rd16(self + 0x256u) + rd32(self + 0x20u) + 0x13u);
    wr32(sp0 - 0x38u, t12);
    t13 = rd32(rd16(self + 0x256u) + rd32(self + 0x20u) + 0x17u);
    wr32(sp0 - 0x34u, t13);
    eax = 0u;
    ecx = t13;
    ebx = t3;
    ebp = t5;
    edi = t1;
    loc_48_f = (double)(float)(double)(int32_t)t9;
L_100b9681: ;
    if (rd8(eax + sp0 - 0x40u) == 0x5fu)
    {
        wr8(eax + sp0 - 0x40u, 0x20u);
    }
    if ((int32_t)(eax + 1u) < 16)
    {
        eax = eax + 1u;
        goto L_100b9681;
    }
    if (rd32(COW_IMG(0x10663888u)) == 0u) goto L_100b976b;
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, (uint32_t)(int16_t)ebx);
    wr32(sp0 - 0x68u, (uint32_t)(int16_t)edi);
    if (rd16(COW_IMG(0x104896e6u)) != 0u)
    {
        eax = (uint32_t)(int16_t)edi;
        edx = (uint32_t)(int16_t)ebx;
        loc_64 = (uint32_t)(int16_t)ebx;
        loc_68 = (uint32_t)(int16_t)edi;
        goto L_100b9714;
    }
    eax = (uint32_t)(int16_t)edi;
    edx = (uint32_t)(int16_t)ebx;
    loc_64 = (uint32_t)(int16_t)ebx;
    loc_68 = (uint32_t)(int16_t)edi;
    wr32(sp0 - 0x6cu, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t14 = cow_cdecl(g, COW_IMG(0x100b2570u), 5, 4u, loc_68, loc_64, 0u, 0u);
    t15 = g->edx;
    d16 = (double)(float)fr(g, (double)rdf32(sp0 - 0x48u) * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(sp0 - 0x5cu, (float)d16);
    d17 = (double)(float)fr(g, (double)rdf32(sp0 - 0x44u) * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(sp0 - 0x60u, (float)d17);
    wr32(sp0 - 0x64u, (uint32_t)(int16_t)ebp);
    wr32(sp0 - 0x68u, 1u);
    g->edi = (uint32_t)(int16_t)ebp;
    g->edx = t15;
    t18 = cow_thiscall(g, COW_IMG(0x101f8d50u), rd32(COW_IMG(0x10663888u)), 4, 1u, (uint32_t)(int16_t)ebp, cow_f2bits(d17), cow_f2bits(d16));
    t19 = g->edx;
    wr32(sp0 - 0x5cu, sp0 - 0x40u);
    wr32(sp0 - 0x60u, (uint32_t)(int16_t)ebp);
    wr32(sp0 - 0x64u, 1u);
    g->edx = t19;
    t20 = rd32(COW_IMG(0x10663888u));
    t21 = cow_thiscall(g, COW_IMG(0x101f8e30u), t20, 3, 1u, (uint32_t)(int16_t)ebp, sp0 - 0x40u);
    t22 = g->ecx;
    t23 = g->edx;
    cow_call_regs(g, COW_IMG(0x100b2a60u), t21, g->ecx, t23, 1, 0);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0x1bu));
    g->edi = in_edi;
    return;
L_100b9714: ;
    wr32(sp0 - 0x6cu, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t24 = cow_cdecl(g, COW_IMG(0x100b2570u), 5, 1u, loc_68, loc_64, 0u, 0u);
    t25 = g->edx;
    d26 = (double)(float)fr(g, (double)rdf32(sp0 - 0x48u) * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(sp0 - 0x5cu, (float)d26);
    d27 = (double)(float)fr(g, (double)rdf32(sp0 - 0x44u) * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(sp0 - 0x60u, (float)d27);
    wr32(sp0 - 0x64u, (uint32_t)(int16_t)ebp);
    wr32(sp0 - 0x68u, 1u);
    g->edi = (uint32_t)(int16_t)ebp;
    g->edx = t25;
    t28 = cow_thiscall(g, COW_IMG(0x101f8d50u), rd32(COW_IMG(0x10663888u)), 4, 1u, (uint32_t)(int16_t)ebp, cow_f2bits(d27), cow_f2bits(d26));
    t29 = g->edx;
    wr32(sp0 - 0x5cu, (uint32_t)(int16_t)ebp);
    wr32(sp0 - 0x60u, 1u);
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x101f8de0u), rd32(COW_IMG(0x10663888u)), 2, 1u, (uint32_t)(int16_t)ebp);
    t31 = g->edx;
    wr32(sp0 - 0x5cu, sp0 - 0x40u);
    wr32(sp0 - 0x60u, (uint32_t)(int16_t)ebp);
    wr32(sp0 - 0x64u, 1u);
    cow_thiscall(g, COW_IMG(0x101f8e30u), rd32(COW_IMG(0x10663888u)), 3, 1u, (uint32_t)(int16_t)ebp, sp0 - 0x40u);
L_100b976b: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0x1bu));
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b9600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b9600(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
