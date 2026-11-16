/* f_0x100e8690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100e8690(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

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
    t1 = rd32(COW_IMG(0x104ca3f0u)) + 0x18c04u;
    t2 = ~ecx - 1u;
    g->ecx = t2;
    g->esp = sp0 - 0xcu;
    t3 = cow_call_regs(g, COW_IMG(0x10311ef0u), t1, g->ecx, in_edx, 1, 2, t1, arg1);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        edx = t5;
        goto L_100e870a;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    esi = t2;
L_100e86bd: ;
    if (rd8(eax + esi) == 0x20u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + esi);
        goto L_100e8710;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + esi);
    if ((uint8_t)ecx == 0u) goto L_100e8710;
    if ((uint8_t)ecx == 0x30u) goto L_100e8710;
    if ((uint8_t)ecx == 0x31u) goto L_100e8710;
    if ((uint8_t)ecx == 0x32u) goto L_100e8710;
    if ((uint8_t)ecx == 0x33u) goto L_100e8710;
    if ((uint8_t)ecx == 0x34u) goto L_100e8710;
    if ((uint8_t)ecx == 0x35u) goto L_100e8710;
    if ((uint8_t)ecx == 0x36u) goto L_100e8710;
    if ((uint8_t)ecx == 0x37u) goto L_100e8710;
    if ((uint8_t)ecx == 0x38u) goto L_100e8710;
    if ((uint8_t)ecx == 0x39u) goto L_100e8710;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x10311ef0u), eax + 1u, g->ecx, edx, 1, 2, eax + 1u, arg1);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 != 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_100e86bd;
    }
    edx = t8;
L_100e870a: ;
    g->edx = edx;
    return 0u;
L_100e8710: ;
    if (arg2 == 0u)
    {
        eax = eax + esi;
        edx = arg2;
    }
    else
    {
        eax = eax + esi;
        edx = arg2;
        esi = 0u;
L_100e871c: ;
        if (esi != 0u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax);
            goto L_100e873b;
        }
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        if ((uint8_t)ecx == 0x20u) goto L_100e874c;
        if ((uint8_t)ecx == 0u) goto L_100e874c;
        if ((uint8_t)ecx == 9u) goto L_100e874c;
        wr8(edx, (uint8_t)ecx);
        eax = eax + 1u;
        edx = edx + 1u;
        esi = 1u;
        goto L_100e871c;
    }
L_100e8752: ;
    g->edx = edx;
    return eax;
L_100e873b: ;
    if ((uint8_t)ecx == 0x20u) goto L_100e874f;
    if ((uint8_t)ecx == 0u) goto L_100e874f;
    if ((uint8_t)ecx == 9u) goto L_100e874f;
    wr8(edx, (uint8_t)ecx);
    edx = edx + 1u;
L_100e874c: ;
    eax = eax + 1u;
    goto L_100e871c;
L_100e874f: ;
    wr8(edx, 0u);
    goto L_100e8752;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e8690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e8690(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
