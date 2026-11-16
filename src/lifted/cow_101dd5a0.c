/* f_0x101dd5a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101dd5a0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 4u);
    edi = t1;
    eax = 0x20202020u;
    ecx = 0x1eu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    wr8(t1 + 0x7bu, 0u);
    t2 = arg2 * 0x7bu + self + 0x1au;
    wr32(sp0 + 4u, t2);
    ecx = arg2 * 5u;
    edx = t2;
    ebx = t1;
    ebp = 3u;
L_101dd5e0: ;
    edi = edx;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t3 = ~ecx - 1u;
    esi = edx;
    edi = ebx;
    ecx = t3 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t3 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    if (ebp != 1u)
    {
        edx = edx + 0x29u;
        ebx = ebx + 0x28u;
        ebp = ebp - 1u;
        goto L_101dd5e0;
    }
    eax = arg3 * 0x29u;
    ecx = arg3 * 0x52u + self;
    edx = self;
    ebx = 3u;
    esi = rd32(sp0 + 4u);
    edi = arg3 * 0x7bu + self + 0x1au;
L_101dd625: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, edi, esi, 0x29u);
    t5 = g->ecx;
    t6 = g->edx;
    if (ebx != 1u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        ebx = ebx - 1u;
        esi = esi + 0x29u;
        edi = edi + 0x29u;
        goto L_101dd625;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dd5a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101dd5a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
