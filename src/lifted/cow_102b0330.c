/* f_0x102b0330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102b0330(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd8(COW_IMG(0x103d3c84u));
    wr8(arg1, (uint8_t)t1);
    if (arg2 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | t1;
        goto L_102b03b1;
    }
    ecx = self;
    edx = in_edx;
L_102b0346: ;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, edx, 1, 4, arg1, 0x3ffu, arg2, in_edi);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_102b037f;
    }
    ecx = t3;
    edx = t4;
    t5 = rd32(COW_IMG(0x109aebc8u)) + 1u;
    wr32(COW_IMG(0x109aebc8u), t5);
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
    if (~ecx - 1u != 1u) goto L_102b03b1;
    ecx = ~ecx - 1u;
    t6 = rd8(COW_IMG(0x103d3c84u));
    wr8(arg1, (uint8_t)t6);
    ecx = (ecx & 0xffffff00u) | t6;
    goto L_102b0346;
L_102b037f: ;
    if ((rd8(arg2 + 0xcu) & 0x10u) == 0u)
    {
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x10u;
        t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf65cu));
        t8 = g->ecx;
        g->esp = sp0 - 0x18u;
        t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf72cu), arg3);
        eax = t9;
    }
    return eax & 0xffffff00u;
L_102b03b1: ;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b0330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b0330(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
