/* f_0x1008e4d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1008e4d0(Guest* g)
{
    uint32_t eax;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    g->ecx = self;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = rd32(self + 0x120u) & 0xff7fffffu;
    wr32(self + 0x120u, t3);
    if ((t3 >> 8u & 2u) == 0u)
    {
        eax = t3;
        edi = t1;
    }
    else
    {
        eax = t3;
        ecx = t2;
        edx = t3;
        edi = t1;
        if ((int8_t)eax >= 0) goto L_1008e511;
        if (rd8(COW_IMG(0x104807f5u)) == 0u) goto L_1008e511;
        if ((eax & 0x20000u) != 0u)
        {
            ecx = rd32(self + 0xa0u);
            goto L_1008e554;
        }
        ecx = rd32(self + 0xa0u);
L_1008e51c: ;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10085a10u), eax, ecx, edx, 1, 0);
        eax = rd32(self + 0x120u) & 0xfffeffffu;
L_1008e56d: ;
        wr32(self + 0x120u, eax);
    }
L_1008e573: ;
    if (rd32(self + 0x120u) >> 8u & 1u) goto L_1008e6c8;
    ecx = rd32(self + 0x120u);
    if (!(rd32(edi + 0x130u) >> 0xbu & 1u))
    {
        edx = rd32(edi + 0x130u) >> 0xbu;
        goto L_1008e5f5;
    }
    edx = rd32(edi + 0x130u) >> 0xbu;
    if (rd8(edi + 0x1ffu) - 2u > 0x29u)
    {
        eax = rd8(edi + 0x1ffu) - 2u;
        goto L_1008e5f5;
    }
    eax = rd8(edi + 0x1ffu) - 2u;
    t5 = rd32(COW_IMG(0x1008e6ccu) + rd8(COW_IMG(0x1008e6d4u) + eax) * 4u);
    edx = rd8(COW_IMG(0x1008e6d4u) + eax);
    switch (t5 - RD)
    {
    case 0x1008e5afu: goto L_1008e5af;
    case 0x1008e5f5u: goto L_1008e5f5;
    default: rt_fatal(g, COW_IMG(0x1008e5a8u), "switch");
    }
    return 0;
L_1008e511: ;
    if ((eax >> 8u & 0xc0u) != 0u) goto L_1008e52e;
    ecx = rd32(self + 0xa0u);
    goto L_1008e51c;
L_1008e52e: ;
    if ((eax & 0x40000u) != 0u)
    {
        if (rd32(self + 0x138u) >> 0x1fu == 0u)
        {
            wr32(self + 0x120u, eax | 0x800000u);
            eax = eax | 0x800000u;
        }
    }
    ecx = rd32(self + 0xa0u);
L_1008e554: ;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10085a50u), eax, ecx, edx, 1, 0);
    if (rd8(self + 0x122u) & 1u)
    {
        eax = t4;
        goto L_1008e573;
    }
    eax = rd32(self + 0x120u) | 0x10000u;
    goto L_1008e56d;
L_1008e5af: ;
    if (!(rd8(self + 0x1d0u) & 1u)) goto L_1008e5f5;
    if ((rd32(self + 0x128u) & 0x3800u) >= 0x1800u)
    {
        eax = rd32(self + 0x128u) & 0x3800u;
        goto L_1008e5f5;
    }
    if (rd8(self + 0x1ffu) - 2u > 0x29u)
    {
        eax = rd8(self + 0x1ffu) - 2u;
        goto L_1008e5e9;
    }
    eax = rd8(self + 0x1ffu) - 2u;
    t6 = rd32(COW_IMG(0x1008e700u) + rd8(COW_IMG(0x1008e708u) + eax) * 4u);
    edx = rd8(COW_IMG(0x1008e708u) + eax);
    switch (t6 - RD)
    {
    case 0x1008e5e9u: goto L_1008e5e9;
    case 0x1008e5f5u: goto L_1008e5f5;
    default: rt_fatal(g, COW_IMG(0x1008e5e2u), "switch");
    }
    return 0;
L_1008e5e9: ;
    wr32(self + 0x120u, ecx | 0x800000u);
    ecx = ecx | 0x800000u;
L_1008e5f5: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 5u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        ecx = t8;
        edx = t9;
        goto L_1008e65f;
    }
    ecx = t8;
    edx = t9;
    if (!(rd32(self + 0x12cu) >> 0x16u & 1u)) goto L_1008e65f;
    eax = rd32(self + 0x12cu) >> 0x16u;
    t10 = rd32(self + 0x120u) | 0x800000u;
    wr32(self + 0x120u, t10);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), t10, 1, 0u);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 == 0u)
    {
        ecx = t12;
        edx = t13;
        goto L_1008e664;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
L_1008e631: ;
    if (rd16(eax + 0x18u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(eax + 0x18u);
        goto L_1008e648;
    }
    eax = (eax & 0xffff0000u) | rd16(eax + 0x18u);
    if (self == rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u)) goto L_1008e653;
    eax = (uint16_t)eax;
L_1008e648: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 != 0u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        goto L_1008e631;
    }
    ecx = t15;
    edx = t16;
L_1008e664: ;
    if ((int8_t)rd32(self + 0x120u) >= 0)
    {
        eax = rd32(self + 0x120u);
        goto L_1008e678;
    }
    eax = rd32(self + 0x120u);
    if (rd8(COW_IMG(0x104807f5u)) != 0u) goto L_1008e6c8;
L_1008e678: ;
    if (rd32(self + 0x138u) >> 0x1fu == 0u)
    {
        ecx = rd32(self + 0x138u) >> 0x1fu;
        if ((eax & 0x44000u) != 0u)
        {
            wr32(self + 0x120u, eax | 0x800000u);
            eax = eax | 0x800000u;
        }
        if ((rd32(self + 0x78u) & 0xff000000u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u));
            zf = ((rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u))) & 0x10u) == 0u;
        }
        else
        {
            zf = ((rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u))) & 2u) == 0u;
        }
        if (!zf)
        {
            wr32(self + 0x120u, rd32(self + 0x120u) | 0x800000u);
        }
    }
L_1008e6c8: ;
    return eax;
L_1008e653: ;
    wr32(self + 0x120u, rd32(self + 0x120u) & 0xff7fffffu);
    goto L_1008e664;
L_1008e65f: ;
    goto L_1008e664;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008e4d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008e4d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
