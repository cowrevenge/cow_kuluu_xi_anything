/* f_0x100f8d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f8d30(Guest* g)
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
    uint32_t t13;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100f8d88;
    }
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xa1u, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100f8d88;
    }
    ecx = t2;
    edx = t3;
    esi = t1;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x100f8db0u), arg1, g->ecx, g->edx, 1, 3, esi + 5u, arg1, 0xfu);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd8(esi + 5u) != 0u)
    {
        ecx = t5;
        edx = t6;
        edi = esi + 5u;
    }
    else
    {
        eax = (t4 & 0xffffff00u) | rd8(esi + 5u);
        ecx = t5;
        edx = t6;
        edi = esi + 5u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x100f8db0u), eax, g->ecx, g->edx, 1, 3, edi, COW_IMG(0x104df910u), 0xfu);
        t7 = g->ecx;
        t8 = g->edx;
        ecx = t7;
        edx = t8;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_cdecl(g, COW_IMG(0x100e0a50u), 1, edi);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 0u)
    {
        ecx = t10;
        edx = t11;
        goto L_100f8d8d;
    }
    eax = t9;
L_100f8d88: ;
    return eax & 0xffffff00u;
L_100f8d8d: ;
    wr8(esi + 4u, (uint8_t)arg2);
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t12 = ~ecx - 1u;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t13 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, esi, 6u, t12);
    return (t13 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f8d30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f8d30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
