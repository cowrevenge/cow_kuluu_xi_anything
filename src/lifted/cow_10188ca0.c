/* f_0x10188ca0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10188ca0(Guest* g)
{
    double d11;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_40_f;
    uint32_t loc_44;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    wr32(arg1 + 0x34u, 0u);
    wr32(arg1 + 0x38u, 0u);
    wr32(arg1 + 0x3cu, 0u);
    wr32(arg1 + 0x4cu, 0u);
    wr32(arg1 + 0x50u, 0u);
    wr32(arg1 + 0x54u, 0u);
    wr32(arg1 + 0x58u, 0u);
    wr32(arg1 + 0x5cu, 0u);
    wr32(arg1 + 0x60u, 0u);
    wr32(arg1 + 0x64u, 0u);
    if (rd32(self - 0x1cu) == 1u)
    {
        if (arg2 == 0u) goto L_10188d48;
        if (arg2 != 1u) goto L_10188d8a;
        wr32(sp0 - 0x40u, COW_IMG(0x1065ca34u));
        wr32(sp0 - 0x44u, sp0 - 0x30u);
        g->eax = sp0 - 0x30u;
        g->esp = sp0 - 0x3cu;
        t1 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x30u, COW_IMG(0x1065ca34u));
        wr32(sp0 - 0x48u, self + 0x17cu);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        g->edx = sp0 - 0x10u;
        g->esp = sp0 - 0x44u;
        cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x10u, self + 0x17cu);
        t2 = g->edx;
        g->edx = t2;
        g->esp = sp0 - 0x3cu;
        cow_thiscall(g, COW_IMG(0x10186f60u), self, 0);
        t3 = g->ecx;
        t4 = g->edx;
        d5 = cow_take_float(g);
        wr32(sp0 - 0x40u, t3);
        wrf32(sp0 - 0x40u, (float)(double)(float)d5);
        wr32(sp0 - 0x44u, self + 0x19cu);
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        eax = sp0 - 0x20u;
        ecx = t3;
        edx = t4;
        loc_40_f = (double)(float)d5;
        loc_44 = self + 0x19cu;
L_10188d82: ;
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x20u, loc_44, cow_f2bits(loc_40_f));
L_10188d8a: ;
        t12 = rd32(sp0 - 0x20u);
        t13 = rd32(sp0 - 0x1cu);
        t14 = rd32(sp0 - 0x18u);
        wr32(arg1 + 4u, t12);
        t15 = rd32(sp0 - 0x30u);
        wr32(arg1 + 8u, t13);
        t16 = rd32(sp0 - 0x2cu);
        wr32(arg1 + 0xcu, t14);
        t17 = rd32(sp0 - 0x28u);
        wr32(arg1 + 0x24u, t15);
        t18 = rd32(sp0 - 0x24u);
        wr32(arg1 + 0x28u, t16);
        t19 = rd32(sp0 - 0x10u);
        wr32(arg1 + 0x2cu, t17);
        t20 = rd32(sp0 - 0xcu);
        wr32(arg1 + 0x30u, t18);
        t21 = rd32(sp0 - 8u);
        wr32(arg1 + 0x10u, 0x3f800000u);
        wr32(arg1 + 0x40u, t19);
        wr32(arg1 + 0x44u, t20);
        wr32(arg1 + 0x48u, t21);
        eax = t19;
    }
    else
    {
        wr32(arg1 + 0x40u, 0u);
        wr32(arg1 + 4u, 0x437f0000u);
        wr32(arg1 + 8u, 0x437f0000u);
        wr32(arg1 + 0xcu, 0x437f0000u);
        wr32(arg1 + 0x10u, 0x437f0000u);
        wr32(arg1 + 0x24u, 0x437f0000u);
        wr32(arg1 + 0x28u, 0x437f0000u);
        wr32(arg1 + 0x2cu, 0x437f0000u);
        wr32(arg1 + 0x30u, 0x437f0000u);
        wr32(arg1 + 0x44u, 0x3f800000u);
        wr32(arg1 + 0x48u, 0u);
        eax = 0x437f0000u;
    }
    wr32(arg1 + 0x14u, 0u);
    wr32(arg1 + 0x18u, 0u);
    wr32(arg1 + 0x1cu, 0u);
    wr32(arg1 + 0x20u, 0u);
    wr32(arg1, 3u);
    return eax;
L_10188d48: ;
    wr32(sp0 - 0x40u, COW_IMG(0x1065ca34u));
    wr32(sp0 - 0x44u, sp0 - 0x30u);
    g->ecx = sp0 - 0x30u;
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x30u, COW_IMG(0x1065ca34u));
    t6 = g->ecx;
    wr32(sp0 - 0x48u, self + 0x14cu);
    wr32(sp0 - 0x4cu, sp0 - 0x10u);
    g->edx = self + 0x14cu;
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x10u, self + 0x14cu);
    t7 = g->edx;
    g->edx = t7;
    g->esp = sp0 - 0x3cu;
    t8 = cow_thiscall(g, COW_IMG(0x10186fd0u), self, 0);
    t9 = g->ecx;
    t10 = g->edx;
    d11 = cow_take_float(g);
    wr32(sp0 - 0x40u, t9);
    wrf32(sp0 - 0x40u, (float)(double)(float)d11);
    wr32(sp0 - 0x44u, self + 0x16cu);
    wr32(sp0 - 0x48u, sp0 - 0x20u);
    eax = t8;
    ecx = sp0 - 0x20u;
    edx = t10;
    loc_40_f = (double)(float)d11;
    loc_44 = self + 0x16cu;
    goto L_10188d82;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10188ca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10188ca0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
