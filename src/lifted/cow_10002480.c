/* f_0x10002480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10002480(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x104u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(COW_IMG(0x10329118u)), t2, 2, 0x104u, t1);
    t4 = g->ecx;
    t5 = g->edx;
    edi = t1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t6 = rd32(COW_IMG(0x1034f2c8u));
    wr32(edi - 1u, t6);
    t7 = rd32(COW_IMG(0x1034f2ccu));
    wr32(edi + 3u, t7);
    g->eax = t6;
    g->ecx = t7;
    g->edx = t5;
    g->esp = sp0;
    t8 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, t1, COW_IMG(0x1034f2d0u), in_edi, in_esi, in_ebx);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        ebx = in_ebx & 0xffffff00u;
        esi = t1;
    }
    else
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        esi = t1;
        edi = edi - 1u;
        g->edi = edi;
        g->ecx = ecx;
        g->esp = sp0 - 4u;
        t11 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, eax, in_edi, in_esi);
        t12 = g->ecx;
        t13 = g->edx;
        eax = t11;
        ecx = t12;
        edx = t13;
        ebx = (in_ebx & 0xffffff00u) | 1u;
    }
    if (esi != 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t14 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
        eax = t14;
    }
    g->edi = in_edi;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10002480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10002480(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
