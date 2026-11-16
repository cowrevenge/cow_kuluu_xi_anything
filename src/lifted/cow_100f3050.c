/* f_0x100f3050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_100f3050(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 0x9cu) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x9cu);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, self, in_edx, 1, 3, eax, in_edi, in_esi);
        t1 = g->ecx;
        t2 = g->edx;
        wr32(self + 0x9cu, 0u);
        ecx = t1;
        edx = t2;
    }
    if ((int32_t)(uint16_t)arg5 <= 50)
    {
        ebp = (uint16_t)arg5;
    }
    else
    {
        ebp = 0x32u;
    }
    wr32(self + 0x98u, 0x50u);
    wr32(self + 0xbcu, 0u);
    if ((int32_t)ebp >= 50)
    {
        if (arg1 == 0u)
        {
            ecx = 0u;
        }
        else
        {
            edi = arg1;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            ecx = ~ecx - 1u;
        }
        if ((int32_t)ecx <= (int32_t)ebp)
        {
            ecx = ecx + 1u;
        }
        else
        {
            ecx = ebp + 1u;
        }
        wr32(self + 0xbcu, ecx);
    }
    else
    {
        wr32(self + 0xbcu, ebp + 1u);
    }
    if (arg2 == 0u) goto L_100f30f2;
    edi = arg2;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if ((int32_t)(~ecx - 1u) <= 300)
    {
        ecx = ~ecx - 1u;
        goto L_100f30f4;
    }
    ecx = ~ecx - 1u;
    eax = rd32(self + 0xbcu) + 0x12du;
L_100f30fd: ;
    wr32(self + 0xbcu, eax);
    if (arg3 == 0u) goto L_100f3124;
    if (arg4 == 0u) goto L_100f3124;
    wr8(self + 0xc4u, 1u);
    wr32(self + 0xbcu, arg4 + eax);
L_100f312b: ;
    t3 = rd32(self + 0xbcu) + 0x58u;
    wr32(self + 0x98u, t3);
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, t3, in_edi, in_esi);
    wr32(self + 0x9cu, t4);
    if (t4 != 0u)
    {
        eax = t4;
        t5 = (eax + 7u & 0xffffff00u) | (eax + 7u & 0xf8u);
        wr32(self + 0xa0u, t5);
        wr32(self + 0xa4u, t5 + 0x48u);
        if (arg3 == 0u)
        {
            eax = t5 + 0x48u;
            goto L_100f316d;
        }
        eax = t5 + 0x48u;
        if (arg4 == 0u) goto L_100f316d;
        edx = arg3;
L_100f316f: ;
        if (arg3 == 0u) goto L_100f317b;
        if (arg4 == 0u) goto L_100f317b;
        ecx = arg4;
L_100f317d: ;
        g->ebx = arg4;
        g->esp = sp0 - 0x1cu;
        t6 = cow_call_regs(g, COW_IMG(0x100f2990u), g->eax, g->ecx, arg2, 0, 1, arg2);
        t7 = g->edx;
        g->edx = t7;
        t8 = rd32(self);
        g->esp = sp0 - 0x20u;
        t9 = cow_thiscall(g, COW_IMG(0x100f28d0u), t8, 2, arg1, ebp);
        t10 = g->ecx;
        t11 = g->edx;
        t12 = cow_cdecl(g, COW_IMG(0x1031039eu), 1, t9);
        wr32(self + 0xbcu, t12);
    }
    g->ebx = in_ebx;
    return rd32(self + 0x9cu);
L_100f30f2: ;
    ecx = 0u;
L_100f30f4: ;
    eax = ecx + rd32(self + 0xbcu) + 1u;
    ecx = ecx + 1u;
    goto L_100f30fd;
L_100f3124: ;
    wr8(self + 0xc4u, 0u);
    goto L_100f312b;
L_100f316d: ;
    edx = 0u;
    goto L_100f316f;
L_100f317b: ;
    ecx = 0u;
    goto L_100f317d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f3050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f3050(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
