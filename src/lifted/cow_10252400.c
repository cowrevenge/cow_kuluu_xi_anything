/* f_0x10252400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10252400(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d3;
    double d4;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t5;
    uint32_t t6;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 280u);

    wr32(sp0 - 0x104u, in_edi);
    wr32(sp0 - 0x108u, sp0 + 8u);
    wr32(sp0 - 0x10cu, arg1);
    wr32(sp0 - 0x110u, 0xffu);
    wr32(sp0 - 0x114u, sp0 - 0x100u);
    g->ecx = arg1;
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0xfcu;
    cow_cdecl(g, COW_IMG(0x10314d45u), 6, sp0 - 0x100u, 0xffu, arg1, sp0 + 8u, in_edi, rd32(sp0 - 0x100u));
    t1 = g->ecx;
    t2 = g->edx;
    wr32(sp0 - 0x108u, 0u);
    d3 = (double)(float)(double)(int32_t)rd32(COW_IMG(0x103899ecu));
    wrf32(sp0 - 0x10cu, (float)d3);
    d4 = (double)(float)(double)(int32_t)rd32(COW_IMG(0x103899e8u));
    wrf32(sp0 - 0x110u, (float)d4);
    wr32(sp0 - 0x114u, sp0 - 0x100u);
    g->ecx = t1;
    g->esp = sp0 - 0x104u;
    cow_call_regs(g, COW_IMG(0x100384b0u), sp0 - 0x100u, g->ecx, g->edx, 1, 4, sp0 - 0x100u, cow_f2bits(d4), cow_f2bits(d3), 0u);
    t5 = g->ecx;
    edi = sp0 - 0x100u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x104u < sp0 - 0x114u;
    pf = PARITY((uint8_t)(sp0 - 0x104u));
    af = (sp0 - 0x114u ^ 0x10u ^ sp0 - 0x104u) >> 4u & 1u;
    zf = sp0 == 0x104u;
    sf = (int32_t)(sp0 - 0x104u) < 0;
    of = ((sp0 - 0x114u ^ sp0 - 0x104u) & (sp0 - 0x104u ^ 0x10u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (rd8(sp0 + ~ecx - 0x102u) == 0xau)
    {
        t6 = rd32(COW_IMG(0x103899ecu));
        wr32(COW_IMG(0x103899e8u), 8u);
        wr32(COW_IMG(0x103899ecu), t6 + 0xcu);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10252400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10252400(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
