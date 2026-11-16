/* f_0x10055780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10055780(Guest* g)
{
    double d37;
    double d39;
    double d45;
    double d46;
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
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_4;
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t38;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
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

    g->edx = in_edx;
    g->esp = sp0 - 0x34u;
    t1 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x7cu);
    t2 = g->edx;
    if (t1 == 0u)
    {
        esi = 0u;
    }
    else
    {
        eax = t1;
        edx = t2;
        esi = t1;
        wr32(esi, COW_IMG(0x103299f0u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t3 = cow_thiscall(g, COW_IMG(0x10063460u), esi + 4u, 0);
        t4 = g->edx;
        g->edx = t4;
        t5 = cow_thiscall(g, COW_IMG(0x10063460u), esi + 0x2cu, 0);
        t6 = g->edx;
        cow_thiscall(g, COW_IMG(0x10063460u), esi + 0x54u, 0);
        wr32(esi, COW_IMG(0x1032b734u));
    }
    t7 = (uint8_t)rd32(self) + (rd32(self) >> 0x13u & 1u) + (rd32(self) >> 0x14u & 1u);
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100634b0u), esi + 4u, 4, t7, 7u, 0u, 0u);
    t8 = (uint8_t)rd32(self) + (rd32(self) >> 0x13u & 1u) + (rd32(self) >> 0x14u & 1u);
    cow_thiscall(g, COW_IMG(0x100634b0u), esi + 0x2cu, 4, t8, 7u, 0u, 0u);
    t9 = (uint8_t)rd32(self) + (rd32(self) >> 0x13u & 1u) + (rd32(self) >> 0x14u & 1u);
    cow_thiscall(g, COW_IMG(0x100634b0u), esi + 0x54u, 4, t9, 7u, 0u, 0u);
    t10 = rd32(esi + 0x3cu) + 4u;
    t11 = rd32(esi + 0x40u) + 4u;
    t12 = rd32(esi + 0x60u) + 4u;
    t13 = rd32(esi + 0x64u) + 4u;
    t14 = rd32(esi + 0x68u) + 4u;
    t15 = rd32(esi + 0x38u) + 4u;
    if (!(rd32(self) >> 0x13u & 1u))
    {
        ecx = t15;
        ebx = rd32(esi + 0x14u) + 4u;
        ebp = rd32(esi + 0x18u) + 4u;
        edi = rd32(esi + 0x10u) + 4u;
        loc_20 = t10;
        loc_1c = t11;
        loc_18 = t12;
        loc_14 = t13;
        loc_10 = t14;
        loc_24 = t15;
        loc_c = 0u;
    }
    else
    {
        ecx = t15;
        edx = rd32(self) >> 0x13u;
        ebx = rd32(esi + 0x14u) + 4u;
        ebp = rd32(esi + 0x18u) + 4u;
        edi = rd32(esi + 0x10u) + 4u;
        loc_20 = t10;
        loc_1c = t11;
        loc_18 = t12;
        loc_14 = t13;
        loc_10 = t14;
        loc_24 = t15;
        g->eax = self;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t16 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t17 = g->ecx;
        t18 = g->edx;
        t19 = rd32(t16 + 0x44u);
        wr32(edi, t19);
        g->eax = t19;
        g->edx = t18;
        t20 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t21 = g->edx;
        t22 = rd32(t20 + 0x48u);
        wr32(ebx, t22);
        g->ecx = t22;
        t23 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t24 = g->ecx;
        t25 = rd32(t23 + 0x4cu);
        wr32(ebp, t25);
        g->edx = t25;
        t26 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t27 = g->edx;
        t28 = rd32(t26 + 0x50u);
        wr32(loc_24, t28);
        g->eax = loc_24 + 4u;
        g->ecx = t28;
        t29 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t30 = g->ecx;
        t31 = rd32(t29 + 0x54u);
        wr32(loc_20, t31);
        g->eax = loc_20 + 4u;
        g->edx = t31;
        t32 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t33 = g->edx;
        t34 = rd32(t32 + 0x58u);
        wr32(loc_1c, t34);
        g->ecx = t34;
        g->edx = t33;
        cow_stdcall(g, COW_IMG(0x100152c0u), 0);
        t35 = g->ecx;
        t36 = g->edx;
        d37 = cow_take_float(g);
        wrf32(loc_18, (float)d37);
        g->eax = loc_18 + 4u;
        t38 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        d39 = (double)rdf32(t38 + 0x5cu);
        wrf32(loc_14, (float)d39);
        wr32(loc_10, 0u);
        ecx = loc_24 + 4u;
        ebx = ebx + 4u;
        ebp = ebp + 4u;
        edi = edi + 4u;
        loc_20 = loc_20 + 4u;
        loc_1c = loc_1c + 4u;
        loc_18 = loc_18 + 4u;
        loc_14 = loc_14 + 4u;
        loc_10 = loc_10 + 4u;
        loc_24 = loc_24 + 4u;
        loc_c = 1u;
    }
    if ((int32_t)(uint8_t)rd32(self) <= 0)
    {
        eax = self;
        edx = rd32(self);
        loc_4 = 0u;
    }
    else
    {
        eax = self + 0x14u;
        loc_4 = 0u;
L_10055979: ;
        t40 = rd32(eax - 4u);
        wr32(edi, t40);
        wr32(ebx, rd32(eax));
        t41 = rd32(eax + 4u);
        wr32(ebp, t41);
        t42 = rd32(eax + 0xcu);
        wr32(ecx, t42);
        t43 = rd32(eax + 0x10u);
        wr32(loc_20, t43);
        t44 = rd32(eax + 0x14u);
        wr32(loc_1c, t44);
        d45 = (double)rdf32(eax + 8u);
        wrf32(loc_18, (float)d45);
        d46 = (double)rdf32(eax + 0x18u);
        wrf32(loc_14, (float)d46);
        wrf32(loc_10, (float)(double)(int32_t)loc_c);
        if ((int32_t)(loc_4 + 1u) < (int32_t)(uint8_t)rd32(self))
        {
            eax = eax + 0x30u;
            ebx = ebx + 4u;
            ebp = ebp + 4u;
            edi = edi + 4u;
            loc_20 = loc_20 + 4u;
            loc_1c = loc_1c + 4u;
            loc_18 = loc_18 + 4u;
            loc_14 = loc_14 + 4u;
            loc_10 = loc_10 + 4u;
            loc_24 = ecx + 4u;
            loc_c = loc_c + 1u;
            loc_4 = loc_4 + 1u;
            goto L_10055975;
        }
        eax = eax + 0x30u;
        edx = (uint8_t)rd32(self);
        loc_20 = loc_20 + 4u;
        loc_1c = loc_1c + 4u;
        loc_18 = loc_18 + 4u;
        loc_14 = loc_14 + 4u;
        loc_10 = loc_10 + 4u;
        loc_24 = ecx + 4u;
        loc_c = loc_c + 1u;
        loc_4 = loc_4 + 1u;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t47 = cow_thiscall_cdecl(g, COW_IMG(0x100635b0u), esi + 4u, 13, in_edi, in_esi, in_ebp, in_ebx, loc_24, loc_20, loc_1c, loc_18, loc_14, loc_10, loc_c, self, loc_4);
    t48 = g->edx;
    g->edx = t48;
    t49 = cow_thiscall_cdecl(g, COW_IMG(0x100635b0u), esi + 0x2cu, 13, in_edi, in_esi, in_ebp, in_ebx, loc_24, loc_20, loc_1c, loc_18, loc_14, loc_10, loc_c, self, loc_4);
    t50 = g->edx;
    cow_thiscall_cdecl(g, COW_IMG(0x100635b0u), esi + 0x54u, 13, in_edi, in_esi, in_ebp, in_ebx, loc_24, loc_20, loc_1c, loc_18, loc_14, loc_10, loc_c, self, loc_4);
    return esi;
L_10055975: ;
    ecx = loc_24;
    goto L_10055979;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10055780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10055780(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
