/* f_0x100e3f70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e3f70(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 116u);

    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    if (rd8(rd32(sp0 + 0xcu) + 4u) == 0u)
    {
        esi = rd32(sp0 + 0xcu);
        goto L_100e4043;
    }
    eax = rd8(rd32(sp0 + 0xcu) + 4u);
    esi = rd32(sp0 + 0xcu);
    if (eax == 1u) goto L_100e3fdd;
    eax = eax - 1u;
    if (eax != 0xbu)
    {
        eax = eax - 0xbu;
        edx = in_edx;
        goto L_100e408e;
    }
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x60u, 0x18u);
    wr32(sp0 - 0x64u, esi + 0x1eu);
    wr32(sp0 - 0x68u, sp0 - 0x34u);
    t1 = rd16(esi + 8u);
    t2 = rd8(esi + 6u);
    wr16(sp0 - 0x4cu, 0xcdu);
    t3 = (eax & 0xffff0000u) | t1;
    wr32(sp0 - 0x48u, t3);
    wr32(sp0 - 0x44u, t2);
    g->ecx = t2;
    g->edx = sp0 - 0x34u;
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x10312090u), t3, g->ecx, g->edx, 1, 3, sp0 - 0x34u, esi + 0x1eu, 0x18u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x6cu, sp0 - 0x54u);
    g->eax = sp0 - 0x54u;
    g->edx = t5;
    g->esp = sp0 - 0x68u;
    t6 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t7 = g->edx;
    g->edx = t7;
    return (t6 & 0xffffff00u) | 1u;
L_100e3fdd: ;
    wr32(sp0 - 0x60u, in_ebx);
    wr32(sp0 + 0xcu, 8u);
    edx = in_edx;
    ebx = esi + 0xau;
L_100e3fe9: ;
    if (rd16(ebx) == 0u)
    {
        edx = (edx & 0xffff0000u) | rd16(ebx);
    }
    else
    {
        edx = (edx & 0xffff0000u) | rd16(ebx);
        edi = sp0 - 0x54u;
        eax = 0u;
        ecx = 0x15u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x48u, (uint16_t)edx);
        wr32(sp0 - 0x64u, 0x18u);
        wr32(sp0 - 0x68u, esi + 0x1eu);
        wr32(sp0 - 0x6cu, sp0 - 0x34u);
        wr16(sp0 - 0x4cu, 0xccu);
        g->ecx = esi + 0x1eu;
        g->edx = sp0 - 0x34u;
        g->esp = sp0 - 0x60u;
        cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, sp0 - 0x34u, esi + 0x1eu, 0x18u);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x70u, sp0 - 0x54u);
        g->ebx = ebx;
        g->edx = t9;
        g->esp = sp0 - 0x6cu;
        cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
        t10 = g->edx;
        edx = t10;
    }
    t11 = rd32(sp0 + 0xcu) - 1u;
    t12 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t11);
    if (t12 != 1u)
    {
        ebx = ebx + 2u;
        goto L_100e3fe9;
    }
    eax = t11;
    g->ebx = in_ebx;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100e4043: ;
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t13 = rd8(esi + 6u);
    t14 = rd16(esi + 8u);
    wr16(sp0 - 0x4cu, (uint16_t)(((ecx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(esi + 5u)) + 0xc8u));
    wr32(sp0 - 0x60u, 0x18u);
    wr32(sp0 - 0x64u, esi + 0x1eu);
    wr32(sp0 - 0x68u, sp0 - 0x34u);
    wr32(sp0 - 0x48u, t14);
    t15 = (eax & 0xffffff00u) | t13;
    wr32(sp0 - 0x44u, t15);
    g->ecx = sp0 - 0x34u;
    g->esp = sp0 - 0x5cu;
    t16 = cow_call_regs(g, COW_IMG(0x10312090u), t15, g->ecx, g->edx, 1, 3, sp0 - 0x34u, esi + 0x1eu, 0x18u);
    t17 = g->ecx;
    wr32(sp0 - 0x6cu, sp0 - 0x54u);
    g->ebx = in_ebx;
    g->edx = sp0 - 0x54u;
    g->esp = sp0 - 0x68u;
    t18 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t19 = g->edx;
    eax = t18;
    edx = t19;
L_100e408e: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e3f70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e3f70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
