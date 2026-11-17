/* f_0x101092c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101092c0(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x101094d0u), in_eax, self, g->edx, 0, 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (arg1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_10109311;
    }
    ecx = t2;
    edx = t3;
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
    t4 = ~ecx - 1u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, COW_IMG(0x101091d0u), self, 1, t4);
    t6 = g->edx;
    if (t5 == 0u)
    {
        edx = t6;
        goto L_10109331;
    }
    eax = t5;
    edx = t6;
    ebp = t4;
    t7 = (uint16_t)ebp + 1u;
    esi = arg1;
    edi = eax;
    ecx = t7 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t7 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->edx = edx;
    return self;
L_10109311: ;
    if (rd32(self + 4u) != 0u)
    {
        esi = rd32(self + 4u);
        t8 = rd32(esi + 4u);
        g->eax = eax;
        g->ecx = t8;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t9 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, t8);
        t10 = g->ecx;
        t11 = g->edx;
        g->edx = t11;
        g->esp = sp0 - 0x14u;
        t12 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10109100u), self, 0);
    t14 = g->edx;
    edx = t14;
L_10109331: ;
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101092c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101092c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
