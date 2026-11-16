/* f_0x101e1850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e1850(Guest* g)
{
    double d11;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    if ((int16_t)rd16(self + 0x14u) >= 0)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0x60u, 1u);
        t1 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
        wr32(sp0 - 0x64u, t1);
        g->edx = in_edx;
        t2 = rd32(COW_IMG(0x10578204u));
        g->esp = sp0 - 0x5cu;
        t3 = cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
        t4 = g->edx;
        g->edx = t4;
        t5 = cow_thiscall(g, COW_IMG(0x1013bf40u), t2, 0);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t8 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t9 = g->ecx;
    t10 = g->edx;
    d11 = cow_take_float(g);
    g->edx = t10;
    fpush(g, d11);
    t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
    t13 = g->edx;
    wr16(self + 0x14u, (uint16_t)(rd16(self + 0x14u) - (uint16_t)t12));
    if ((int16_t)rd16(self + 0x16u) < 0)
    {
        eax = (t12 & 0xffff0000u) | rd16(self + 0x16u);
        edx = t13;
    }
    else
    {
        eax = (t12 & 0xffff0000u) | rd16(self + 0x16u);
        edx = t13;
        if (rd8(self + 0x1cu) == 0u) goto L_101e1932;
        ecx = rd8(self + 0x1cu);
        if (ecx == 1u) goto L_101e18e1;
        ecx = ecx - 1u;
        if (ecx != 0xbu) goto L_101e1973;
        edi = sp0 - 0x54u;
        eax = 0u;
        ecx = 0x15u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t14 = rd16(self + 0x20u);
        t15 = rd8(self + 0x1eu);
        wr16(sp0 - 0x4cu, 0xa9u);
        wr32(sp0 - 0x48u, t14);
        wr32(sp0 - 0x44u, t15);
        wr32(sp0 - 0x60u, sp0 - 0x54u);
        eax = sp0 - 0x54u;
        ecx = t14;
        edx = t15;
L_101e1965: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t23 = cow_stdcall(g, COW_IMG(0x100a1ab0u), 0);
        t24 = g->edx;
        eax = t23;
        edx = t24;
L_101e196d: ;
        wr16(self + 0x16u, 0xffffu);
    }
L_101e1973: ;
    if ((int16_t)rd16(self + 0x14u) < 0)
    {
        if ((int16_t)rd16(self + 0x16u) < 0)
        {
            wr32(sp0 - 0x60u, 1u);
            t25 = rd32(self + 8u);
            wr32(sp0 - 0x64u, t25);
            g->edx = edx;
            g->esp = sp0 - 0x5cu;
            t26 = cow_call_regs(g, COW_IMG(0x1015e790u), t25, COW_IMG(0x10621838u), g->edx, 0, 2, t25, 1u);
            t27 = g->edx;
            eax = t26;
            edx = t27;
        }
    }
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->edx = edx;
    return eax;
L_101e18e1: ;
    if (rd16(self + (uint32_t)(int16_t)eax * 2u + 0x22u) != 0u)
    {
        edx = self + (uint32_t)(int16_t)eax * 2u + 0x22u;
        goto L_101e18fd;
    }
    edx = self + (uint32_t)(int16_t)eax * 2u + 0x22u;
    wr16(self + 0x16u, (uint16_t)(eax + 1u));
    if ((int16_t)(eax + 1u) < 8)
    {
        eax = eax + 1u;
        goto L_101e1973;
    }
    eax = eax + 1u;
    goto L_101e196d;
L_101e18fd: ;
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(sp0 - 0x4cu, 0xa4u);
    t16 = (eax & 0xffff0000u) | rd16(edx);
    wr32(sp0 - 0x48u, t16);
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    g->eax = t16;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t17 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t18 = g->edx;
    wr16(self + 0x16u, (uint16_t)(rd16(self + 0x16u) + 1u));
    if ((int16_t)rd16(self + 0x16u) < 8)
    {
        eax = t17;
        edx = t18;
        goto L_101e1973;
    }
    eax = t17;
    edx = t18;
    goto L_101e196d;
L_101e1932: ;
    t19 = rd8(self + 0x1du);
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t20 = rd16(self + 0x20u);
    t21 = rd8(self + 0x1eu);
    wr16(sp0 - 0x4cu, (uint16_t)(((edx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)t19) + 0xa0u));
    t22 = (eax & 0xffff0000u) | t20;
    wr32(sp0 - 0x48u, t22);
    wr32(sp0 - 0x44u, t21);
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    eax = t22;
    ecx = t21;
    edx = sp0 - 0x54u;
    goto L_101e1965;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e1850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e1850(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
