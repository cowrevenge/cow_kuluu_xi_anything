/* f_0x1009afe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1009afe0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        goto L_1009b3d0;
    }
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
    if ((uint8_t)arg3 != 0u)
    {
        ecx = (self & 0xffffff00u) | (uint8_t)arg3;
        goto L_1009b168;
    }
    if (rd16(arg2 + 0x10u) != 0xffffu) goto L_1009b14b;
    wr16(arg2 + 0x10u, 0u);
    wr8(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xeeu, 2u);
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xfcu) != rd16(arg2))
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        edi = (arg2 & 0xffff0000u) | rd16(arg2);
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 1u);
        wr16(eax + 0xfcu, (uint16_t)edi);
    }
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xfeu) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        wr16(eax + 0xf4u, rd16(eax + 0xf4u) | 2u);
        wr16(eax + 0xfeu, 0u);
    }
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x100u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 4u);
        wr16(eax + 0x100u, 0u);
    }
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x102u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 8u);
        wr16(eax + 0x102u, 0u);
    }
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x104u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0x10u);
        wr16(eax + 0x104u, 0u);
    }
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x106u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0x20u);
        wr16(eax + 0x106u, 0u);
    }
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x108u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0x40u);
        wr16(eax + 0x108u, 0u);
    }
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x10au) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0x80u);
        wr16(eax + 0x10au, 0u);
    }
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x10cu) == 0u) goto L_1009b3d0;
    esi = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
    wr16(esi + 0x10cu, 0u);
    wr8(esi + 0xf5u, rd8(esi + 0xf5u) | 1u);
    return eax;
L_1009b14b: ;
    if (rd32(eax + 0x120u) >> 5u & 1u)
    {
        ecx = rd32(eax + 0x120u) >> 5u;
    }
    else
    {
        ecx = rd32(eax + 0x120u) >> 5u;
        if (rd16(eax + 0x210u) == 0u)
        {
            wr8(eax + 0xeeu, 0u);
        }
    }
L_1009b168: ;
    if (rd8(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xefu) == (uint32_t)(int8_t)rd8(arg2 + 1u))
    {
        edx = rd8(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xefu);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        ecx = (ecx & 0xffffff00u) | rd8(arg2 + 1u);
        edx = rd8(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xefu);
        wr8(eax + 0xefu, (uint8_t)ecx);
        t1 = rd32(eax + 0x120u) | 1u;
        wr32(eax + 0x120u, t1);
    }
    if ((uint32_t)(int8_t)rd8(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xefu) - 1u > 7u)
    {
        eax = 0u;
        ecx = (uint32_t)(int8_t)rd8(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xefu) - 1u;
        ebp = 0u;
        goto L_1009b1ca;
    }
    ecx = (uint32_t)(int8_t)rd8(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xefu) - 1u;
    t2 = rd32(COW_IMG(0x1009b3d8u) + rd8(COW_IMG(0x1009b3e0u) + ecx) * 4u);
    edx = rd8(COW_IMG(0x1009b3e0u) + ecx);
    switch (t2 - RD)
    {
    case 0x1009b1bdu: goto L_1009b1bd;
    case 0x1009b1c3u: goto L_1009b1c3;
    default: rt_fatal(g, COW_IMG(0x1009b1b6u), "switch");
    }
    return 0;
L_1009b1bd: ;
    eax = 0u;
    ebp = 0u;
L_1009b1ca: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x1008aa80u), g->eax, g->ecx, edx, 1, 2, (uint16_t)arg1, eax);
    t4 = g->ecx;
    t5 = g->edx;
    g->ecx = t4;
    g->esp = sp0 - 0x18u;
    t6 = cow_call_regs(g, COW_IMG(0x1008aad0u), g->eax, g->ecx, t5, 1, 2, (uint16_t)arg1, ebp);
    t7 = g->ecx;
    t8 = g->edx;
    g->ecx = t7;
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x1008ab20u), g->eax, g->ecx, t8, 1, 2, (uint16_t)arg1, 0u);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint16_t)arg1 == (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
    {
        ecx = t9;
        goto L_1009b29a;
    }
    ecx = t9;
    edx = t10;
    if ((rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x78u) & 0xff000000u) != 0u) goto L_1009b29a;
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
    if (rd8(eax + 0xeeu) != 0u) goto L_1009b29a;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t11 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xa5u);
    t12 = g->ecx;
    if (t11 == 0u)
    {
        ecx = t12;
        goto L_1009b29a;
    }
    ebx = 1u;
    ebp = COW_IMG(0x1032d678u);
L_1009b22c: ;
    if (rd16((uint32_t)(int8_t)ebx * 2u + rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xfcu) == (uint16_t)(ebx << 0xcu | rd16(ebp)))
    {
        ecx = (uint32_t)(int8_t)ebx;
    }
    else
    {
        eax = (ebx << 0xcu & 0xffff0000u) | (uint16_t)(ebx << 0xcu | rd16(ebp));
        ecx = (uint32_t)(int8_t)ebx;
        edx = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        cf = rd16((uint32_t)(int8_t)ebx * 2u + rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xfcu) < (uint16_t)(ebx << 0xcu | rd16(ebp));
        pf = PARITY((uint8_t)(rd16((uint32_t)(int8_t)ebx * 2u + rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xfcu) - (uint16_t)(ebx << 0xcu | rd16(ebp))));
        zf = (uint16_t)(rd16((uint32_t)(int8_t)ebx * 2u + rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xfcu) - (uint16_t)(ebx << 0xcu | rd16(ebp))) == 0u;
        sf = (int16_t)(rd16((uint32_t)(int8_t)ebx * 2u + rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xfcu) - (uint16_t)(ebx << 0xcu | rd16(ebp))) < 0;
        of = ((rd16((uint32_t)(int8_t)ebx * 2u + rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xfcu) ^ (uint16_t)(ebx << 0xcu | rd16(ebp))) & (rd16((uint32_t)(int8_t)ebx * 2u + rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xfcu) ^ (uint16_t)(rd16((uint32_t)(int8_t)ebx * 2u + rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xfcu) - (uint16_t)(ebx << 0xcu | rd16(ebp))))) >> 0xfu;
        wr16(ecx * 2u + edx + 0xfcu, (uint16_t)eax);
        wr16(edx + 0xf4u, (uint16_t)(rd16(edx + 0xf4u) | 1u << (ecx & 0x1fu)));
    }
    if ((int32_t)(ebp + 4u) < (int32_t)COW_IMG(0x1032d68cu))
    {
        ebx = ebx + 1u;
        ebp = ebp + 4u;
        goto L_1009b22c;
    }
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xfcu) == rd8(arg2))
    {
        ecx = rd8(arg2);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        ecx = rd8(arg2);
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 1u);
        wr16(eax + 0xfcu, (uint16_t)ecx);
    }
L_1009b36a: ;
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x108u) == rd16(arg2 + 0xcu))
    {
        ecx = (ecx & 0xffff0000u) | rd16(arg2 + 0xcu);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        ecx = (ecx & 0xffff0000u) | rd16(arg2 + 0xcu);
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0x40u);
        wr16(eax + 0x108u, (uint16_t)ecx);
    }
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x10au) == rd16(arg2 + 0xeu))
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        ecx = (ecx & 0xffff0000u) | rd16(arg2 + 0xeu);
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0x80u);
        wr16(eax + 0x10au, (uint16_t)ecx);
    }
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x10cu) != rd16(arg2 + 0x10u))
    {
        esi = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        edi = (arg2 & 0xffff0000u) | rd16(arg2 + 0x10u);
        wr16(esi + 0x10cu, (uint16_t)edi);
        wr8(esi + 0xf5u, rd8(esi + 0xf5u) | 1u);
    }
L_1009b3d0: ;
    return eax;
L_1009b1c3: ;
    eax = 1u;
    ebp = 1u;
    goto L_1009b1ca;
L_1009b29a: ;
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xfcu) == rd8(arg2))
    {
        ecx = rd8(arg2);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        ecx = rd8(arg2);
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 1u);
        wr16(eax + 0xfcu, (uint16_t)ecx);
    }
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0xfeu) == rd16(arg2 + 2u))
    {
        ecx = (ecx & 0xffff0000u) | rd16(arg2 + 2u);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        ecx = (ecx & 0xffff0000u) | rd16(arg2 + 2u);
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 2u);
        wr16(eax + 0xfeu, (uint16_t)ecx);
    }
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x100u) == rd16(arg2 + 4u))
    {
        ecx = (ecx & 0xffff0000u) | rd16(arg2 + 4u);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        ecx = (ecx & 0xffff0000u) | rd16(arg2 + 4u);
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 4u);
        wr16(eax + 0x100u, (uint16_t)ecx);
    }
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x102u) == rd16(arg2 + 6u))
    {
        ecx = (ecx & 0xffff0000u) | rd16(arg2 + 6u);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        ecx = (ecx & 0xffff0000u) | rd16(arg2 + 6u);
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 8u);
        wr16(eax + 0x102u, (uint16_t)ecx);
    }
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x104u) == rd16(arg2 + 8u))
    {
        ecx = (ecx & 0xffff0000u) | rd16(arg2 + 8u);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        ecx = (ecx & 0xffff0000u) | rd16(arg2 + 8u);
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0x10u);
        wr16(eax + 0x104u, (uint16_t)ecx);
    }
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u) + 0x106u) == rd16(arg2 + 0xau))
    {
        ecx = (ecx & 0xffff0000u) | rd16(arg2 + 0xau);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)arg1 * 4u);
        ecx = (ecx & 0xffff0000u) | rd16(arg2 + 0xau);
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0x20u);
        wr16(eax + 0x106u, (uint16_t)ecx);
    }
    goto L_1009b36a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009afe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009afe0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
