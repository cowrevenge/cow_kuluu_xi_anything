/* f_0x10288c40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10288c40(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        ecx = self;
        edx = rd32(COW_IMG(0x109a2788u));
    }
    else
    {
        edx = rd32(COW_IMG(0x109a2788u));
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_cdecl(g, COW_IMG(0x10288680u), 1, arg2);
        t2 = g->ecx;
        t3 = g->edx;
        g->ecx = t2;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t3, 1, 5, t3, COW_IMG(0x103b9190u), t1, arg2, in_edi);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x102886a0u), 3, arg2, in_edi, in_esi);
    t7 = g->ecx;
    if ((int32_t)rd32(arg1 + 0x7cu) <= 0)
    {
        edx = rd32(COW_IMG(0x109a2788u));
        esi = t6;
        goto L_10288cfd;
    }
    ecx = t7;
    edx = rd32(COW_IMG(0x109a2788u));
    ebp = 0u;
    esi = t6;
L_10288c85: ;
    if (edx != 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t8 = cow_cdecl(g, COW_IMG(0x10288680u), 1, esi);
        t9 = g->ecx;
        t10 = g->edx;
        g->ebx = arg1;
        g->ecx = t9;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t10, 1, 5, t10, COW_IMG(0x103b9174u), t8, esi, in_edi);
        t11 = g->ecx;
        ecx = t11;
    }
    wr32(ebp * 4u + rd32(arg1 + 0x70u), esi);
    edi = esi;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t12 = esi + ~ecx;
    if ((t12 & 3u) == 0u)
    {
        ecx = ~ecx - 1u;
        edx = rd32(COW_IMG(0x109a2788u));
        esi = t12;
    }
    else
    {
        eax = t12 & 3u;
        ecx = ~ecx - 1u;
        edx = rd32(COW_IMG(0x109a2788u));
        esi = t12;
        if (edx == 0u)
        {
            edi = 4u - eax;
        }
        else
        {
            edi = 4u - eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t13 = cow_cdecl(g, COW_IMG(0x10288680u), 1, esi);
            t14 = g->ecx;
            t15 = g->edx;
            g->ebx = arg1;
            g->ecx = t14;
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t15, 1, 5, t15, COW_IMG(0x103b8850u), t13, edi, in_edi);
            t16 = g->ecx;
            ecx = t16;
            edx = rd32(COW_IMG(0x109a2788u));
        }
        if (edi != 0u)
        {
            esi = edi + esi;
        }
    }
    if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x7cu))
    {
        ebp = ebp + 1u;
        goto L_10288c85;
    }
L_10288cfd: ;
    if ((int32_t)rd32(arg1 + 0x7cu) >= (int32_t)rd32(arg1 + 0x80u))
    {
        ecx = rd32(arg1 + 0x80u);
        goto L_10288d26;
    }
    eax = rd32(arg1 + 0x7cu);
L_10288d0a: ;
    wr32(eax * 4u + rd32(arg1 + 0x70u), 0u);
    if ((int32_t)(eax + 1u) < (int32_t)rd32(arg1 + 0x80u))
    {
        eax = eax + 1u;
        goto L_10288d0a;
    }
    ecx = rd32(arg1 + 0x80u);
    edx = rd32(COW_IMG(0x109a2788u));
L_10288d26: ;
    if ((int32_t)rd32(arg1 + 0x90u) <= 0) goto L_10288db0;
    ebp = 0u;
L_10288d32: ;
    if (edx != 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t17 = cow_cdecl(g, COW_IMG(0x10288680u), 1, esi);
        t18 = g->ecx;
        t19 = g->edx;
        g->ebx = arg1;
        g->ecx = t18;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t19, 1, 5, t19, COW_IMG(0x103b9158u), t17, esi, in_edi);
        t20 = g->ecx;
        ecx = t20;
    }
    wr32(ebp * 4u + rd32(arg1 + 0x84u), esi);
    t21 = rd32(COW_IMG(0x109a2788u));
    edi = esi;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t22 = esi + ~ecx;
    if ((t22 & 3u) == 0u)
    {
        ecx = ~ecx - 1u;
        edx = t21;
        esi = t22;
    }
    else
    {
        eax = t22 & 3u;
        ecx = ~ecx - 1u;
        edx = t21;
        esi = t22;
        if (edx == 0u)
        {
            edi = 4u - eax;
        }
        else
        {
            edi = 4u - eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t23 = cow_cdecl(g, COW_IMG(0x10288680u), 1, esi);
            t24 = g->ecx;
            t25 = g->edx;
            g->ebx = arg1;
            g->ecx = t24;
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t25, 1, 5, t25, COW_IMG(0x103b8850u), t23, edi, in_edi);
            t26 = g->ecx;
            ecx = t26;
            edx = rd32(COW_IMG(0x109a2788u));
        }
        if (edi != 0u)
        {
            esi = edi + esi;
        }
    }
    if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x90u))
    {
        ebp = ebp + 1u;
        goto L_10288d32;
    }
L_10288db0: ;
    if ((int32_t)rd32(arg1 + 0x90u) >= (int32_t)rd32(arg1 + 0x94u)) goto L_10288dd9;
    eax = rd32(arg1 + 0x90u);
L_10288dc0: ;
    wr32(eax * 4u + rd32(arg1 + 0x84u), 0u);
    if ((int32_t)(eax + 1u) < (int32_t)rd32(arg1 + 0x94u))
    {
        eax = eax + 1u;
        goto L_10288dc0;
    }
L_10288dd9: ;
    g->ebx = in_ebx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10288c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10288c40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
