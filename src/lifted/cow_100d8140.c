/* f_0x100d8140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100d8140(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 288u);

    wr32(sp0 - 0x108u, in_esi);
    wr32(sp0 - 0x10cu, in_edi);
    wr8(sp0 - 0x100u, rd8(COW_IMG(0x103d3c84u)));
    edi = sp0 - 0xffu;
    eax = 0u;
    ecx = 0x3fu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    wr32(sp0 - 0x110u, sp0 + 8u);
    wr32(sp0 - 0x114u, arg1);
    wr32(sp0 - 0x118u, 0xffu);
    wr32(sp0 - 0x11cu, sp0 - 0x100u);
    wr8(sp0 - 0x104u, 0xffu);
    wr8(sp0 - 0x103u, 0xffu);
    wr8(sp0 - 0x102u, 0xffu);
    wr8(sp0 - 0x101u, 0xffu);
    g->eax = arg1;
    g->ecx = sp0 - 0x100u;
    g->esp = sp0 - 0x104u;
    t1 = cow_cdecl(g, COW_IMG(0x10314d45u), 6, sp0 - 0x100u, 0xffu, arg1, sp0 + 8u, in_edi, in_esi);
    t2 = g->ecx;
    if (rd8(sp0 + t1 - 0x101u) != 0xau)
    {
        ecx = t2;
        esi = t1;
    }
    else
    {
        ecx = t2;
        esi = t1;
        wr8(esi + sp0 - 0x101u, 0u);
    }
    wr32(sp0 - 0x110u, sp0 - 0x104u);
    wr32(sp0 - 0x114u, sp0 - 0x100u);
    g->edx = sp0 - 0x104u;
    g->esp = sp0 - 0x10cu;
    cow_cdecl(g, COW_IMG(0x100d8020u), 2, sp0 - 0x100u, sp0 - 0x104u);
    t3 = g->edx;
    g->edx = t3;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d8140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d8140(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
