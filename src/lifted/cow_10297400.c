/* f_0x10297400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
uint32_t cow_fn_10297400(Guest* g)
{
    double d1;
    double d11;
    double d2;
    double d4;
    uint32_t eax;
    uint32_t t10;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 480u);

    d1 = (double)(float)fr(g, fr(g, (double)rdf32(arg1 + 0x20u) + (double)rdf32(arg1 + 0x14u)) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x198u, (float)d1);
    d2 = (double)(float)fr(g, fr(g, (double)rdf32(arg1 + 0x24u) + (double)rdf32(arg1 + 0x18u)) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x194u, (float)d2);
    t3 = rd32(COW_IMG(0x1099d200u)) + 0x188u;
    wr32(sp0 - 0x19cu, t3);
    wr32(sp0 - 0x1a0u, sp0 - 0x80u);
    d4 = (double)(float)fr(g, fr(g, (double)rdf32(arg1 + 0x28u) + (double)rdf32(arg1 + 0x1cu)) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x190u, (float)d4);
    g->ecx = sp0 - 0x80u;
    g->esp = sp0 - 0x198u;
    cow_cdecl(g, COW_IMG(0x1027f090u), 2, sp0 - 0x80u, t3);
    t5 = g->ecx;
    t6 = rd32(COW_IMG(0x1099d200u)) + 0x1c8u;
    wr32(sp0 - 0x1a4u, t6);
    wr32(sp0 - 0x1a8u, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    g->esp = sp0 - 0x1a0u;
    t7 = cow_cdecl(g, COW_IMG(0x1027f090u), 2, sp0 - 0x100u, t6);
    t8 = rd32(COW_IMG(0x1099d200u)) + 0x32cu;
    wr32(sp0 - 0x1acu, t8);
    wr32(sp0 - 0x1b0u, sp0 - 0xc0u);
    g->edx = sp0 - 0xc0u;
    g->esp = sp0 - 0x1a8u;
    cow_cdecl(g, COW_IMG(0x1027f090u), 2, sp0 - 0xc0u, t8);
    t9 = g->edx;
    wr32(sp0 - 0x1b4u, sp0 - 0x80u);
    wr32(sp0 - 0x1b8u, sp0 - 0x140u);
    g->esp = sp0 - 0xe0u;
    cow_bridge_indirect(g, COW_IMG(0x1027f100u), 0u, 54u, (const uint32_t[]){sp0 - 0x140u, sp0 - 0x80u, sp0 - 0xc0u, rd32(sp0 - 0x1acu), sp0 - 0x100u, rd32(sp0 - 0x1a4u), sp0 - 0x80u, rd32(sp0 - 0x19cu), rd32(sp0 - 0x198u), rd32(sp0 - 0x194u), rd32(sp0 - 0x190u), rd32(sp0 - 0x18cu), rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u), rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u), rd32(sp0 - 0x13cu), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u)}, g->ecx, g->edx, g->eax, 216u);
    wr32(sp0 - 0x1bcu, sp0 - 0x100u);
    wr32(sp0 - 0x1c0u, sp0 - 0x140u);
    wr32(sp0 - 0x1c4u, sp0 - 0x40u);
    g->esp = sp0 - 0x1b8u;
    cow_cdecl(g, COW_IMG(0x10280160u), 3, sp0 - 0x40u, sp0 - 0x140u, sp0 - 0x100u);
    wr32(sp0 - 0x1c8u, sp0 - 0xc0u);
    wr32(sp0 - 0x1ccu, sp0 - 0x140u);
    wr32(sp0 - 0x1d0u, sp0 - 0x180u);
    g->esp = sp0 - 0x1c4u;
    cow_cdecl(g, COW_IMG(0x10280160u), 3, sp0 - 0x180u, sp0 - 0x140u, sp0 - 0xc0u);
    wr32(sp0 - 0x1d4u, sp0 - 0x198u);
    wr32(sp0 - 0x1d8u, sp0 - 0x40u);
    wr32(sp0 - 0x1dcu, sp0 - 0x18cu);
    g->eax = sp0 - 0x40u;
    g->esp = sp0 - 0x1d0u;
    t10 = cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0x18cu, sp0 - 0x40u, sp0 - 0x198u);
    d11 = (double)rdf32(sp0 - 0x158u);
    if (!(d11 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t10 & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 - 0x158u);
    }
    else
    {
        eax = (t10 & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 - 0x158u);
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    g->edx = rd32(COW_IMG(0x1099d200u));
    fpush(g, -fr(g, fr(g, fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x1032a40cu))) + (double)rdf32(COW_IMG(0x10329990u))) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2c4u)) * (double)rdf32(sp0 - 0x184u)));
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10297400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10297400(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
