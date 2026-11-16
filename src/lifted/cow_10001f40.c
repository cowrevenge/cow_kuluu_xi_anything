/* f_0x10001f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10001f40(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x103d3c88u)) == 0u) goto L_10001fd0;
    edx = rd32(COW_IMG(0x103d3c88u));
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
    t1 = ~ecx - 1u;
    g->ecx = t1;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10311ef0u), eax, g->ecx, edx, 1, 2, edx, arg1);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u) goto L_10001fd0;
    ecx = t3;
    edx = t4;
    edi = t1;
    g->ecx = ecx;
    t5 = rd32(COW_IMG(0x103d3c88u));
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x10311ef0u), t5, g->ecx, edx, 1, 2, t5, arg1);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u) goto L_10001fd0;
    eax = t6;
    ecx = t7;
    edx = t8;
L_10001f83: ;
    if (rd8(eax + edi) == 0x20u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + edi);
        goto L_10001fd5;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + edi);
    if ((uint8_t)ecx == 0u) goto L_10001fd5;
    if ((uint8_t)ecx == 0x30u) goto L_10001fd5;
    if ((uint8_t)ecx == 0x31u) goto L_10001fd5;
    if ((uint8_t)ecx == 0x32u) goto L_10001fd5;
    if ((uint8_t)ecx == 0x33u) goto L_10001fd5;
    if ((uint8_t)ecx == 0x34u) goto L_10001fd5;
    if ((uint8_t)ecx == 0x35u) goto L_10001fd5;
    if ((uint8_t)ecx == 0x36u) goto L_10001fd5;
    if ((uint8_t)ecx == 0x37u) goto L_10001fd5;
    if ((uint8_t)ecx == 0x38u) goto L_10001fd5;
    if ((uint8_t)ecx == 0x39u) goto L_10001fd5;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t9 = cow_call_regs(g, COW_IMG(0x10311ef0u), eax + 1u, g->ecx, edx, 1, 2, eax + 1u, arg1);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 != 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        goto L_10001f83;
    }
L_10001fd0: ;
    return 0u;
L_10001fd5: ;
    if (arg2 == 0u)
    {
        eax = eax + edi;
    }
    else
    {
        eax = eax + edi;
        edx = arg2;
        esi = 0u;
        edi = arg3;
L_10001fe5: ;
        if (esi != 0u) goto L_10002004;
        if (rd8(eax) == 0x20u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax);
            goto L_10002020;
        }
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        if ((uint8_t)ecx == 0u) goto L_10002020;
        if ((uint8_t)ecx == 9u) goto L_10002020;
        wr8(edx, (uint8_t)ecx);
        eax = eax + 1u;
        edx = edx + 1u;
        esi = 1u;
        goto L_10001fe5;
    }
L_10002026: ;
    return eax;
L_10002004: ;
    if (edi != 0u) goto L_10002018;
    if (rd8(eax) == 0x20u) goto L_10002023;
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_10002023;
    zf = (uint8_t)((uint8_t)ecx - 9u) == 0u;
L_10002019: ;
    if (zf) goto L_10002023;
    t12 = rd8(eax);
    wr8(edx, (uint8_t)t12);
    ecx = (ecx & 0xffffff00u) | t12;
    edx = edx + 1u;
L_10002020: ;
    eax = eax + 1u;
    goto L_10001fe5;
L_10002018: ;
    zf = edi == 1u;
    edi = edi - 1u;
    goto L_10002019;
L_10002023: ;
    wr8(edx, 0u);
    goto L_10002026;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10001f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10001f40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
