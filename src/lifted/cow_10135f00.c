/* f_0x10135f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10135f00(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10135ee0u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10135f16;
    }
    eax = t1;
    return eax;
L_10135f16: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(self + 0xbcu, t4);
    t7 = (t5 & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    wr32(sp0 - 0x14u, t7);
    g->ecx = self;
    g->edx = t6;
    t8 = rd32(self + 8u);
    t9 = cow_stdcall(g, COW_IMG(0x10131680u), 1, t7);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int16_t)t9 >= 0)
    {
        ecx = t10;
        edx = t11;
        edi = (uint32_t)(int16_t)t9;
        goto L_10135f40;
    }
    eax = t9;
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return eax & 0xffffff00u;
L_10135f40: ;
    if ((uint8_t)arg2 == 0u) goto L_10136014;
    if ((uint8_t)arg2 == 1u) goto L_10135f74;
    if ((uint8_t)arg2 == 2u) goto L_10135f61;
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return (uint8_t)arg2 - 2u & 0xffffff00u;
L_10135f61: ;
    t12 = edi * 4u + self + 0x78u;
    wr32(sp0 - 0x14u, t12);
    g->esp = sp0 - 0x10u;
    t13 = cow_stdcall(g, COW_IMG(0x10136050u), 1, t12);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return t13;
L_10135f74: ;
    if (arg1 != 0u) goto L_10135f85;
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return (uint8_t)arg2 - 1u & 0xffffff00u;
L_10135f85: ;
    if (rd32(rd32(COW_IMG(0x10663740u)) + 0x60u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10663740u)) + 0x60u);
        goto L_10135f9a;
    }
    eax = rd32(rd32(COW_IMG(0x10663740u)) + 0x60u);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return eax & 0xffffff00u;
L_10135f9a: ;
    if (rd8(edi * 4u + self + 0x79u) != rd8(arg1 + 2u))
    {
        ebx = rd32(eax);
        eax = (eax & 0xffffff00u) | rd8(arg1 + 2u);
        goto L_10135fce;
    }
    ebx = rd32(eax);
    eax = (eax & 0xffffff00u) | rd8(arg1 + 2u);
    if (rd8(edi * 4u + self + 0x78u) >> 2u != ebx)
    {
        ecx = edi * 4u + self + 0x78u;
        edx = rd8(edi * 4u + self + 0x78u) >> 2u;
        goto L_10135fce;
    }
    ecx = edi * 4u + self + 0x78u;
    edx = rd8(edi * 4u + self + 0x78u) >> 2u;
    if (rd16(edi * 4u + self + 0x7au) != rd16(arg1))
    {
        edx = (edx & 0xffff0000u) | rd16(edi * 4u + self + 0x7au);
        goto L_10135fce;
    }
    edx = (edx & 0xffff0000u) | rd16(edi * 4u + self + 0x7au);
    wr32(sp0 - 0x14u, ecx);
    g->esp = sp0 - 0x10u;
    t14 = cow_stdcall(g, COW_IMG(0x10136030u), 1, ecx);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return t14;
L_10135fce: ;
    wr32(sp0 - 0x14u, edi);
    t15 = (ecx & 0xffff0000u) | rd16(arg1);
    wr32(sp0 - 0x18u, t15);
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x20u, ebx);
    g->ebx = ebx;
    g->ebp = arg1;
    g->esp = sp0 - 0x10u;
    t16 = cow_call_regs(g, COW_IMG(0x10135e80u), eax, self, edx, 0, 4, ebx, eax, t15, edi);
    t17 = g->edx;
    if ((int32_t)t16 < 0)
    {
        edx = t17;
    }
    else
    {
        eax = t16;
        t18 = eax * 4u + self + 0x78u;
        wr32(sp0 - 0x14u, t18);
        g->edx = t18;
        g->esp = sp0 - 0x10u;
        cow_stdcall(g, COW_IMG(0x10136030u), 1, t18);
        t19 = g->edx;
        edx = t19;
    }
    wr32(sp0 - 0x14u, ebx);
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, sp0 + 8u);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10136070u), 3, sp0 + 8u, arg1, ebx);
    t20 = g->edx;
    wr32(sp0 - 0x14u, self + 0x78u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    wr32(sp0 - 0x1cu, edi);
    t21 = cow_cdecl(g, COW_IMG(0x100e5380u), 3, edi, sp0 + 8u, self + 0x78u);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return t21;
L_10136014: ;
    t22 = edi * 4u + self + 0x78u;
    wr32(sp0 - 0x14u, t22);
    g->esp = sp0 - 0x10u;
    t23 = cow_stdcall(g, COW_IMG(0x10136030u), 1, t22);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return t23;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10135f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10135f00(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
